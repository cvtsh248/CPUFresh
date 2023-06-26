// LITTLE ENDIAN
// First four bytes are instruction, last four address
// verilator lint_off BLKANDNBLK

// INSTRUCTIONS
// [_ _ _ _][_ _ _ _]
//   Instr.   Addr.
// OP_LDA : 1000 => Load value at address into register A
// OP_LDB : 0100 => Load value at address into register B
// OP_ADD : 0010 => Add values in Register A and bus and dump in register B
// OP_SUB : 0001 => Subtract value in  bus from register A
// OP_MUL : 1100 => Mutiply A and value in bus and dump in register B
// OP_DIV : 1010 => Divide A by value in bus and dump in register B
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

module instruction_register(inout [7:0] bus_i, input [7:0] from_ram, output [3:0] to_ctrl, output [3:0] to_ram, input clk, input reset, input ir_a);

    reg [3:0] instruction;
    reg [3:0] address; // Address in instruction

    always @(posedge clk) begin
        if (reset) begin
            instruction <= 0;
        end
        else if (ir_a) begin
            address <= from_ram[3:0];
            instruction <= from_ram[7:4];
        end 
    end

    //assign bus_i = (out_b) ? {instruction,4'bz} : 8'bz;
    assign to_ctrl = (1) ? instruction : 4'bz;
    assign to_ram = address;

endmodule

module mar(inout [7:0] bus_i, output [3:0] to_ram, input [3:0] from_ir, input clk, input reset, input mar_a);

    reg [3:0] address;

    always @(posedge clk) begin
        if (mar_a)
            address <= bus_i[3:0];
        //else
        //    address <= from_ir;
    end

    //assign to_ram = (mar_a) ? address : 4'bz;
    assign to_ram = address;
endmodule
// -----

// RAM
module ram(output [7:0] to_ir, inout [7:0] to_a, inout [7:0] to_b, input [3:0] mar_in, input [3:0] address_ir, input in_b, input out_b, input in_a, input out_a, input clk, input reset);

    reg [128:0] mem;
    reg [7:0] index_ir;
    reg [7:0] index_reg;
    reg [7:0] out_reg;
    reg [7:0] out_ir;

    always @(posedge clk) begin
        mem[7:0] <= 8'b10000100;
        mem[15:8] <= 8'b10000101;
        mem[23:16] <= 8'b10000110;
        mem[31:24] <= 8'b00001111;
        mem[39:32] <= 8'b01000100;
        mem[47:40] <= 8'b01000110;
        
        if(reset) begin
            //index <= 0;
            //out <= 0;
        end
        else if(in_b) begin
            mem[127:120] <= to_b;
        end
        else if(in_a) begin
            mem[119:112] <= to_a;
        end
        index_ir <= mar_in * 8;
        index_reg <= address_ir * 8;
        out_reg <= mem[index_reg +: 8];
        out_ir <= mem[index_ir +: 8];
    end

    assign to_a = (out_a) ? out_reg : 8'bz;
    assign to_b = (out_b) ? out_reg : 8'bz;
    assign to_ir = out_ir;

endmodule
// Stuff on data bus

module register(inout [7:0] bus_d, input [7:0] from_ram, input clk, input ram_in, input out_b);

    reg [7:0] areg;

    always @(posedge clk) begin
        //if (ram_in)
        areg <= from_ram;
    end

    assign bus_d = (out_b) ? areg : 8'bz;


endmodule


module alu(inout [7:0] bus_d, input [7:0] from_a, output [7:0] to_b, input ad, input sub);
    reg [7:0] out;
    
    always @(posedge clk) begin
        if(ad)
            out <= from_a + bus_d;
        if(sub)
            out <= from_a - bus_d;
    
    assign to_b = (ad || sub) ? out : 8'bz;

    end

endmodule

module controller(inout [7:0] bus_i, inout [7:0] bus_d, output reg pc_a, output reg mar_a, output reg ir_a, output reg in_a, output reg out_a, input [3:0] ir_i, input clk, input reset);
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


    // Control word: pc_a, mar_a, ir_a, in_a, out_a

    always @(posedge clk) begin
        stagecount = stagecount + 1;
        if (stagecount == 6) begin
            pc_a = 0;
            mar_a = 0;
            ir_a = 0;
            in_a = 0;
            out_a = 0;
            //ctrl_wd = 000;
            stagecount = 0;
        end
        // First 3 stages are always the same
        if (stagecount == 1) begin
            pc_a = 1;
            mar_a = 0;
            ir_a = 0;
            in_a = 0;
            out_a = 0;
            //ctrl_wd = 110;
        end
        if (stagecount == 2) begin
            pc_a = 0;
            mar_a = 1;
            ir_a = 0; //0
            in_a = 0;
            out_a = 0;
            //ctrl_wd = 010;
        end
        if (stagecount == 3) begin
            pc_a = 0;
            mar_a = 0;
            ir_a = 1; //1
            in_a = 0;
            out_a = 0;
            //ctrl_wd = 001;
        end
        if (ir_i == OP_LDA) begin
            if (stagecount == 4) begin
                pc_a = 0;
                mar_a = 0;
                ir_a = 0;
                in_a = 0;
                out_a = 1;
            end
            if (stagecount == 5) begin
                pc_a = 0;
                mar_a = 0;
                ir_a = 0;
                in_a = 0;
                out_a = 0;
            end
        end 
        else begin
            if (stagecount == 4) begin
                pc_a = 0;
                mar_a = 0;
                ir_a = 0;
                in_a = 0;
                out_a = 0;
            end
            if (stagecount == 5) begin
                pc_a = 0;
                mar_a = 0;
                ir_a = 0;
                in_a = 0;
                out_a = 0;
            end
        end


        
    end


endmodule

module top(output [7:0] bus_i, input clk, input reset);
    reg pc_a = 0;
    reg mar_a = 0;
    reg ir_a = 0;
    // RAM flags
    reg in_b = 0;
    reg out_b = 0;
    reg in_a = 0;
    reg out_a = 0;
    //-----
    // Register flags
    reg a_out = 0;
    //----
    reg out_bus = 0;
    reg [3:0] ir_i;
    reg [7:0] bus_d;
    wire [3:0] to_ram;
    wire [7:0] to_ir;
    wire [7:0] to_a;
    wire [7:0] to_b;
    wire [3:0] address_ir;

    controller control(.bus_i(bus_i), .bus_d(bus_d), .pc_a(pc_a), .mar_a(mar_a), .ir_a(ir_a), .in_a(in_a), .out_a(out_a), .ir_i(ir_i), .clk(clk), .reset(reset));

    program_counter counter(.bus_i(bus_i), .clk(clk), .reset(reset), .pc_a(pc_a));

    mar mar(.bus_i(bus_i), .to_ram(to_ram), .from_ir(address_ir), .clk(clk), .reset(reset), .mar_a(mar_a));

    ram ram(.to_ir(to_ir), .to_a(to_a), .to_b(to_b), .mar_in(to_ram), .address_ir(address_ir), .in_b(in_b), .out_b(out_b), .in_a(in_a), .out_a(out_a), .clk(clk), .reset(reset));

    instruction_register ir(.bus_i(bus_i), .from_ram(to_ir), .to_ctrl(ir_i), .to_ram(address_ir), .clk(clk), .reset(reset), .ir_a(ir_a));

    register areg(.bus_d(bus_d), .from_ram(to_a), .clk(clk), .ram_in(out_a), .out_b(a_out));




endmodule