// LITTLE ENDIAN
// First four bytes are instruction, last four address
// verilator lint_off BLKANDNBLK

// INSTRUCTIONS
// [_ _ _ _][_ _ _ _]
//   Instr.   Addr.
// OP_LDA : 1000 => Load value at address into register A
// OP_LDB : 0100 => Load value at address into register B
// OP_ADD : 0010 => Add values in registers A and B
// OP_SUB : 0001 => Subtract value in Register B from register A
// OP_MUL : 1100 => Mutiply A and B
// OP_DIV : 1010 => Divide A by B
// OP_JMP : 1001 => Jump to instruction at address
// OP_HLT : 1111 => Halt 

// STUFF ON Instruction Bus
module program_counter(inout [7:0] bus_i, input clk, input reset, input pc_a);
    
    reg [3:0] pc;
    
    always @(posedge clk) begin
        if (reset)
            pc <= 0;
        else if (pc_a)
            pc <= pc + 1; 
    end

    assign bus_i = (pc_a) ? {4'bz,pc} : 8'bz;

endmodule

module instruction_register(inout [7:0] bus_i, input [7:0] from_ram, output [3:0] to_ctrl, input clk, input reset, input ir_a);

    reg [3:0] instruction;

    always @(posedge clk) begin
        if (reset)
            instruction <= 0;
        else if (ir_a)
            instruction <= from_ram[7:4]; 
    end

    //assign bus_i = (out_b) ? {instruction,4'bz} : 8'bz;
    assign to_ctrl = (ir_a) ? instruction : 4'bz;

endmodule

module mar(inout [7:0] bus_i, output [3:0] to_ram, input clk, input reset, input mar_a);

    reg [3:0] address;

    always @(posedge clk) begin
        if(reset)
            address <= 0;
        else if (mar_a)
            address <= bus_i[3:0];
    end

    assign to_ram = (mar_a) ? address : 4'bz;

endmodule
// -----

// RAM
module ram(output [7:0] to_ir, inout [7:0] to_a, inout [7:0] to_b, input [3:0] mar_in, input in_b, input out_b, input in_a, input out_a, input clk, input reset);

    reg [128:0] mem;
    reg [7:0] index;
    reg [7:0] out;

    always @(posedge clk) begin
        mem[7:0] <= 8'b00000000;
        mem[15:8] <= 8'b01000001;
        mem[23:16] <= 8'b11111111;
        mem[31:24] <= 8'b00000010;
        mem[39:32] <= 8'b00000001;
        mem[47:40] <= 8'b10001001;
        if(reset) begin
            index <= 0;
            out <= 0;
        end
        else if(in_b) begin
            mem[127:120] <= to_b;
        end
        else if(in_a) begin
            mem[119:112] <= to_a;
        end
        index <= mar_in * 8;
        out <= mem[index +: 8];
    end

    assign to_a = (out_a) ? out : 8'bz;
    assign to_b = (out_b) ? out : 8'bz;
    assign to_ir = out;

endmodule
// Stuff on data bus

module areg(inout [7:0] bus_d, input [7:0] from_ram, input clk, input out_b, input out_a, input active);

    reg [7:0] areg;

    always @(posedge clk) begin
        areg <= from_ram;
    end

    assign bus_d = (out_b) ? areg : 8'bz;


endmodule

module controller(inout [7:0] bus_i, inout [7:0] bus_d, output reg pc_a, output reg mar_a, output reg ir_a, input [3:0] ir_i, input clk, input reset);
    reg [2:0] stagecount = 0;
    reg aflag = 0;

    // CODES

    parameter OP_LDA = 4'b1000;
    parameter OP_LDB = 4'b0100;
    parameter OP_ADD = 4'b0010;
    parameter OP_SUB = 4'b0001;
    parameter OP_MUL = 4'b1100;
    parameter OP_DIV = 4'b1010;
    parameter OP_JMP = 4'b1001;
    parameter OP_HLT = 4'b1111;


    // Control word: pc_a, mar_a, ir_a

    always @(posedge clk) begin
        stagecount = stagecount + 1;
        if (stagecount == 4) begin
            pc_a = 0;
            mar_a = 0;
            ir_a = 0;
            //ctrl_wd = 000;
            stagecount = 0;
        end
        // First 3 stages are always the same
        if (stagecount == 1) begin
            pc_a = 1;
            mar_a = 1;
            ir_a = 0;
            //ctrl_wd = 110;
        end
        if (stagecount == 2) begin
            pc_a = 0;
            mar_a = 1;
            ir_a = 0;
            //ctrl_wd = 010;
        end
        if (stagecount == 3) begin
            pc_a = 0;
            mar_a = 0;
            ir_a = 1;
            //ctrl_wd = 001;
        end
        if (ir_i == OP_LDA) begin
            if (stagecount == 4) begin
            end
        end 


        
    end


endmodule

module top(output [7:0] bus_i, input clk, input reset);
    reg pc_a = 0;
    reg mar_a = 0;
    reg ir_a = 0;
    reg in_b = 0;
    reg out_b = 0;
    reg in_a = 0;
    reg out_a = 0;
    reg [3:0] ir_i;
    reg [7:0] bus_d;
    wire [3:0] to_ram;
    wire [7:0] to_ir;
    wire [7:0] to_a;
    wire [7:0] to_b;

    controller control(.bus_i(bus_i), .bus_d(bus_d), .pc_a(pc_a), .mar_a(mar_a), .ir_a(ir_a), .ir_i(ir_i), .clk(clk), .reset(reset));

    program_counter counter(.bus_i(bus_i), .clk(clk), .reset(reset), .pc_a(pc_a));

    mar mar(.bus_i(bus_i), .to_ram(to_ram), .clk(clk), .reset(reset), .mar_a(mar_a));

    ram ram(.to_ir(to_ir), .to_a(to_a), .to_b(to_b), .mar_in(to_ram), .in_b(in_b), .out_b(out_b), .in_a(in_a), .out_a(out_a), .clk(clk), .reset(reset));

    instruction_register ir(.bus_i(bus_i), .from_ram(to_ir), .to_ctrl(ir_i), .clk(clk), .reset(reset), .ir_a(ir_a));


endmodule