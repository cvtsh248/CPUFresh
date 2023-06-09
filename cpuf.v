// LITTLE ENDIAN
// First four bytes are instruction, last four address
// verilator lint_off BLKANDNBLK

// INSTRUCTIONS
// [_ _ _ _][_ _ _ _]
//   Instr.   Addr.
// OP_LDA : 1000 => Load value at address into register A
// OP_LDB : 0100 => Load value at address into register B
// OP_ADD : 0010 => Add values in Register A and B and dump in accumulator
// OP_SUB : 0001 => Subtract value in B from register A and dump in accumulator
// OP_JMP : 1001 => Jump to instruction at address
// OP_HLT : 1111 => Halt 
// OP_WRT : 1010 => Write accumulator contents to RAM
// OP_DMA : 1011 => Dump A register into data bus
// OP_DMB : 1101 => Dump B register into data bus
// OP_CME : 0101 => If A == B, jump to supplied address
// OP_CMG : 0111 => If A > B, jump to supplied address
// OP_CML : 0011 => If A < B, jump to supplied address

// STUFF ON Instruction Bus
module program_counter(output reg [7:0] bus_i, input clk, input reset, input pc_a, input [3:0] from_ir, input jmp);
    
    reg [3:0] pc;
    
    always @(posedge clk) begin
        if (reset)
            pc <= 0;
        else if (pc_a)
            pc <= pc + 1; 
        else if (jmp)
            pc <= from_ir;

        bus_i <= {4'b0,pc};
    end

    //assign bus_i = (pc_a) ? {4'bz,pc} : 8'bz;

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

module mar(inout [7:0] bus_i, output [3:0] to_ram, input [3:0] from_ir, input clk, input reset, input mar_a, input jmp);

    reg [3:0] address;
    reg [3:0] offset;

    always @(posedge clk) begin
        if (mar_a) begin
            address <= bus_i[3:0];
        end
        else if (jmp) begin
            address <= from_ir;
            
        end
        //else
        //    address <= from_ir;
    end

    //assign to_ram = (mar_a) ? address : 4'bz;
    assign to_ram = address;
endmodule
// -----

// RAM
module ram(output [7:0] to_ir, inout [7:0] to_a, inout [7:0] to_b, inout [7:0] to_c, input [3:0] mar_in, input [3:0] address_ir, input in_c, input in_b, input out_b, input in_a, input out_a, input clk, input reset);

    reg [128:0] mem;
    reg [7:0] index_ir;
    reg [7:0] index_reg;
    reg [7:0] out_reg;
    reg [7:0] out_ir;

    always @(posedge clk) begin
        // Contents of RAM, including data and the program itself
        mem[7:0] <= 8'b00000100;
        mem[15:8] <= 8'b10000110; //LDA 0110
        mem[23:16] <= 8'b01000101; //LDB 0111
        mem[31:24] <= 8'b00100001; //ADD
        mem[39:32] <= 8'b10010111; //JMP 0111
        mem[47:40] <= 8'b00001110;
        mem[55:48] <= 8'b00001100;
        mem[63:56] <= 8'b10000110; //LDA 0101
        mem[71:64] <= 8'b10000110; //LDA 0110
        mem[79:72] <= 8'b10100110; //WRT
        mem[87:80] <= 8'b10001111; //LDA 1000
        mem[95:88] <= 8'b10111111; //DMA
        mem[103:96] <= 8'b11111111; //HLT

        /*mem[7:0] <= 8'b10000001; //LDA 0011
        mem[15:8] <= 8'b01000011; //LDB 0011
        mem[23:16] <= 8'b00110101; //CML 0101
        mem[31:24] <= 8'b11111011; // HLT
        mem[39:32] <= 8'b10001011; // Data
        mem[47:40] <= 8'b10110000; //DMA
        mem[55:48] <= 8'b11111111; //HLT*/

        
        if(reset) begin
            //index <= 0;
            //out <= 0;
        end
        else if(in_c) begin
            mem[127:120] <= to_c;
        end
        else if(in_a) begin
            mem[119:112] <= to_a;
        end


        index_ir <= mar_in * 8;
        out_ir <= mem[index_ir +: 8];

        index_reg <= out_ir[3:0] * 8;
        out_reg <= mem[index_reg +: 8];

    end

    assign to_a = (out_a) ? out_reg : 8'bz;
    assign to_b = (out_b) ? out_reg : 8'bz;
    assign to_ir = out_ir;

endmodule
// Stuff on data bus

module register(output [7:0] to_out, inout [7:0] bus_d, input [7:0] from_inp, input clk, input inp_in, input out_o, input out_b);

    reg [7:0] areg;

    always @(negedge clk) begin
        if (inp_in)
            areg <= from_inp;
    end

    assign bus_d = (out_b) ? areg : 8'bz;
    assign to_out = areg;


endmodule

module alu(output reg [7:0] to_acc, output c_f, inout [7:0] bus_d, input [7:0] from_a, input [7:0] from_b, input clk, input ad, input sub, input c_e, input c_g, input c_l);
    reg [7:0] out;
    
    always @(posedge clk) begin
        if(ad)
            out <= from_a + from_b;
        if(sub)
            out <= from_a - from_b;
        if (c_e) begin
            if (from_a == from_b)
                c_f <= 1;
            else
                c_f <= 0;
        end
        else if (c_g) begin
            if (from_a > from_b)
                c_f <= 1;
            else
                c_f <= 0;
        end
        else if (c_l) begin
            if (from_a < from_b)
                c_f <= 1;
            else
                c_f <= 0;
        end
        else
            c_f <= 0;
    end
    assign to_acc = (1) ? out : 8'bz; //ad || sub


endmodule

module controller(inout [7:0] bus_i, inout [7:0] bus_d, output reg pc_a, output reg mar_a, output reg ir_a, output reg in_a, output reg out_a, output reg in_b, output reg out_b, output reg ad, output reg sb, output reg jmp, output reg acc_out, output reg a_out_bus, output reg b_out_bus, output reg c_e, output reg c_g, output reg c_l, input reg c_f, input [3:0] ir_i, input clk, input reset);
    reg [2:0] stagecount = 0;
    reg aflag = 0;

    // CODES

    parameter OP_LDA = 4'b1000;
    parameter OP_LDB = 4'b0100;
    parameter OP_ADD = 4'b0010;
    parameter OP_SUB = 4'b0001;
    parameter OP_JMP = 4'b1001;
    parameter OP_HLT = 4'b1111;
    parameter OP_WRT = 4'b1010;
    parameter OP_DMA = 4'b1011;
    parameter OP_DMB = 4'b1101;
    parameter OP_CME = 4'b0101;
    parameter OP_CMG = 4'b0111;
    parameter OP_CML = 4'b0011;


    // Control word: pc_a, mar_a, ir_a, in_a (input to ram), out_a (output from ram), in_b, out_b, ad, sb, jmp, acc_out, a_out_bus, b_out_bus, c_e, c_g, c_l

    always @(negedge clk) begin
        if (ir_i == OP_HLT) begin
            pc_a <= 0;
            mar_a <= 0;
            ir_a <= 0;
            in_a <= 0;
            out_a <= 0;
            in_b <= 0;
            out_b <= 0;
            ad <= 0;
            sb <= 0;
            jmp <= 0;
            acc_out <= 0;
        end
        else begin
            stagecount <= stagecount + 1;
            if (stagecount == 5) begin
                pc_a <= 0;
                mar_a <= 0;
                ir_a <= 0;
                in_a <= 0;
                out_a <= 0;
                in_b <= 0;
                out_b <= 0;
                ad <= 0;
                sb <= 0;
                jmp <= 0;
                acc_out <= 0;
                //a_out_bus <= 0;
                //b_out_bus <= 0;
                //ctrl_wd <= 000;
                stagecount <= 0;
            end
            // First 3 stages are always the same
            if (stagecount == 0) begin
                pc_a <= 1;
                mar_a <= 0; //0
                ir_a <= 0; //0
                in_a <= 0;
                out_a <= 0;
                in_b <= 0;
                out_b <= 0;
                ad <= 0;
                sb <= 0;
                jmp <= 0;
                acc_out <= 0;
                //a_out_bus <= 0;
                //b_out_bus <= 0;
                //ctrl_wd <= 110;
            end
            if (stagecount == 1) begin
                pc_a <= 0;
                mar_a <= 1;
                ir_a <= 0; //0
                in_a <= 0;
                out_a <= 0;
                in_b <= 0;
                out_b <= 0;
                jmp <= 0;
                acc_out <= 0;
                //a_out_bus <= 0;
                //b_out_bus <= 0;
                //ctrl_wd <= 010;
            end
            if (stagecount == 2) begin
                pc_a <= 0;
                mar_a <= 0;
                ir_a <= 1; //1
                in_a <= 0;
                out_a <= 0;
                in_b <= 0;
                out_b <= 0;
                ad <= 0;
                sb <= 0;
                jmp <= 0;
                acc_out <= 0;
                //a_out_bus <= 0;
                //b_out_bus <= 0;
                //ctrl_wd <= 001;
            end
            if (ir_i == OP_JMP) begin
                if (stagecount == 3) begin
                    pc_a <= 0;
                    mar_a <= 0;
                    ir_a <= 0;
                    in_a <= 0;
                    out_a <= 0;
                    in_b <= 0;
                    out_b <= 0;
                    ad <= 0;
                    sb <= 0;
                    jmp <= 1;
                    acc_out <= 0;
                    a_out_bus <= 0;
                    b_out_bus <= 0;
                end
                if (stagecount == 4) begin
                    pc_a <= 0;
                    mar_a <= 0;
                    ir_a <= 0;
                    in_a <= 0;
                    out_a <= 0;
                    in_b <= 0;
                    out_b <= 0;
                    ad <= 0;
                    sb <= 0;
                    jmp <= 0;
                    acc_out <= 0;
                    a_out_bus <= 0;
                    b_out_bus <= 0;
                end

            end
            else if(ir_i == OP_CME) begin
                if (stagecount == 3) begin
                    pc_a <= 0;
                    mar_a <= 0;
                    ir_a <= 0;
                    in_a <= 0;
                    out_a <= 0;
                    in_b <= 0;
                    out_b <= 0;
                    ad <= 0;
                    sb <= 0;
                    jmp <= 0;
                    acc_out <= 0;
                    a_out_bus <= 0;
                    b_out_bus <= 0;
                    c_e <= 1;
                end
                if (stagecount == 4) begin
                    pc_a <= 0;
                    mar_a <= 0;
                    ir_a <= 0;
                    in_a <= 0;
                    out_a <= 0;
                    in_b <= 0;
                    out_b <= 0;
                    ad <= 0;
                    sb <= 0;
                    acc_out <= 0;
                    a_out_bus <= 0;
                    b_out_bus <= 0;
                    c_e <= 0;
                    if (c_f)
                        jmp <= 1;
                end
            end
            else if(ir_i == OP_CMG) begin
                if (stagecount == 3) begin
                    pc_a <= 0;
                    mar_a <= 0;
                    ir_a <= 0;
                    in_a <= 0;
                    out_a <= 0;
                    in_b <= 0;
                    out_b <= 0;
                    ad <= 0;
                    sb <= 0;
                    jmp <= 0;
                    acc_out <= 0;
                    a_out_bus <= 0;
                    b_out_bus <= 0;
                    c_g <= 1;
                end
                if (stagecount == 4) begin
                    pc_a <= 0;
                    mar_a <= 0;
                    ir_a <= 0;
                    in_a <= 0;
                    out_a <= 0;
                    in_b <= 0;
                    out_b <= 0;
                    ad <= 0;
                    sb <= 0;
                    acc_out <= 0;
                    a_out_bus <= 0;
                    b_out_bus <= 0;
                    c_g <= 0;
                    if (c_f)
                        jmp <= 1;
                end
            end
            else if(ir_i == OP_CML) begin
                if (stagecount == 3) begin
                    pc_a <= 0;
                    mar_a <= 0;
                    ir_a <= 0;
                    in_a <= 0;
                    out_a <= 0;
                    in_b <= 0;
                    out_b <= 0;
                    ad <= 0;
                    sb <= 0;
                    jmp <= 0;
                    acc_out <= 0;
                    a_out_bus <= 0;
                    b_out_bus <= 0;
                    c_l <= 1;
                end
                if (stagecount == 4) begin
                    pc_a <= 0;
                    mar_a <= 0;
                    ir_a <= 0;
                    in_a <= 0;
                    out_a <= 0;
                    in_b <= 0;
                    out_b <= 0;
                    ad <= 0;
                    sb <= 0;
                    acc_out <= 0;
                    a_out_bus <= 0;
                    b_out_bus <= 0;
                    c_l <= 0;
                    if (c_f)
                        jmp <= 1;
                end
            end
            else begin
                if (ir_i == OP_LDA) begin
                    if (stagecount == 3) begin
                        pc_a <= 0;
                        mar_a <= 0;
                        ir_a <= 0;
                        in_a <= 0;
                        out_a <= 1;
                        in_b <= 0;
                        out_b <= 0;
                        ad <= 0;
                        sb <= 0;
                        jmp <= 0;
                        acc_out <= 0;
                        a_out_bus <= 0;
                        b_out_bus <= 0;
                    end
                    if (stagecount == 4) begin
                        pc_a <= 0;
                        mar_a <= 0;
                        ir_a <= 0;
                        in_a <= 0;
                        out_a <= 0;
                        in_b <= 0;
                        out_b <= 0;
                        ad <= 0;
                        sb <= 0;
                        jmp <= 0;
                        acc_out <= 0;
                        a_out_bus <= 0;
                        b_out_bus <= 0;
                    end
                end 
                else if (ir_i == OP_LDB) begin
                    if (stagecount == 3) begin
                        pc_a <= 0;
                        mar_a <= 0;
                        ir_a <= 0;
                        in_a <= 0;
                        out_a <= 0;
                        in_b <= 0;
                        out_b <= 1;
                        ad <= 0;
                        sb <= 0;
                        jmp <= 0;
                        acc_out <= 0;
                        a_out_bus <= 0;
                        b_out_bus <= 0;
                    end
                    if (stagecount == 4) begin
                        pc_a <= 0;
                        mar_a <= 0;
                        ir_a <= 0;
                        in_a <= 0;
                        out_a <= 0;
                        in_b <= 0;
                        out_b <= 0;
                        ad <= 0;
                        sb <= 0;
                        jmp <= 0;
                        acc_out <= 0;
                        a_out_bus <= 0;
                        b_out_bus <= 0;
                    end
                end
                else if (ir_i == OP_ADD) begin
                    if (stagecount == 3) begin
                        pc_a <= 0;
                        mar_a <= 0;
                        ir_a <= 0;
                        in_a <= 0;
                        out_a <= 0;
                        in_b <= 0;
                        out_b <= 0;
                        ad <= 1;
                        sb <= 0;
                        jmp <= 0;
                        acc_out <= 0;
                        a_out_bus <= 0;
                        b_out_bus <= 0;
                    end
                    if (stagecount == 4) begin
                        pc_a <= 0;
                        mar_a <= 0;
                        ir_a <= 0;
                        in_a <= 0;
                        out_a <= 0;
                        in_b <= 0;
                        out_b <= 0;
                        ad <= 0;
                        sb <= 0;
                        jmp <= 0;
                        acc_out <= 0;
                        a_out_bus <= 0;
                        b_out_bus <= 0;
                    end
                end
                else if (ir_i == OP_SUB) begin
                    if (stagecount == 3) begin
                        pc_a <= 0;
                        mar_a <= 0;
                        ir_a <= 0;
                        in_a <= 0;
                        out_a <= 0;
                        in_b <= 0;
                        out_b <= 0;
                        ad <= 0;
                        sb <= 1;
                        jmp <= 0;
                        acc_out <= 0;
                        a_out_bus <= 0;
                        b_out_bus <= 0;
                    end
                    if (stagecount == 4) begin
                        pc_a <= 0;
                        mar_a <= 0;
                        ir_a <= 0;
                        in_a <= 0;
                        out_a <= 0;
                        in_b <= 0;
                        out_b <= 0;
                        ad <= 0;
                        sb <= 0;
                        jmp <= 0;
                        acc_out <= 0;
                        a_out_bus <= 0;
                        b_out_bus <= 0;
                    end
                end
                else if (ir_i == OP_WRT) begin
                    if (stagecount == 3) begin
                        pc_a <= 0;
                        mar_a <= 0;
                        ir_a <= 0;
                        in_a <= 0;
                        out_a <= 0;
                        in_b <= 0;
                        out_b <= 0;
                        ad <= 0;
                        sb <= 0;
                        jmp <= 0;
                        acc_out <= 1;
                        a_out_bus <= 0;
                        b_out_bus <= 0;
                    end
                    if (stagecount == 4) begin
                        pc_a <= 0;
                        mar_a <= 0;
                        ir_a <= 0;
                        in_a <= 0;
                        out_a <= 0;
                        in_b <= 0;
                        out_b <= 0;
                        ad <= 0;
                        sb <= 0;
                        jmp <= 0;
                        acc_out <= 0;
                        a_out_bus <= 0;
                        b_out_bus <= 0;
                    end
                end
                else if (ir_i == OP_DMA) begin
                    if (stagecount == 3) begin
                        pc_a <= 0;
                        mar_a <= 0;
                        ir_a <= 0;
                        in_a <= 0;
                        out_a <= 0;
                        in_b <= 0;
                        out_b <= 0;
                        ad <= 0;
                        sb <= 0;
                        jmp <= 0;
                        acc_out <= 0;
                        a_out_bus <= 1;
                        b_out_bus <= 0;
                    end
                    if (stagecount == 4) begin
                        pc_a <= 0;
                        mar_a <= 0;
                        ir_a <= 0;
                        in_a <= 0;
                        out_a <= 0;
                        in_b <= 0;
                        out_b <= 0;
                        ad <= 0;
                        sb <= 0;
                        jmp <= 0;
                        acc_out <= 0;
                        a_out_bus <= 1;
                        b_out_bus <= 0;
                    end
                end
                else if (ir_i == OP_DMB) begin
                    if (stagecount == 3) begin
                        pc_a <= 0;
                        mar_a <= 0;
                        ir_a <= 0;
                        in_a <= 0;
                        out_a <= 0;
                        in_b <= 0;
                        out_b <= 0;
                        ad <= 0;
                        sb <= 0;
                        jmp <= 0;
                        acc_out <= 0;
                        a_out_bus <= 0;
                        b_out_bus <= 1;
                    end
                    if (stagecount == 4) begin
                        pc_a <= 0;
                        mar_a <= 0;
                        ir_a <= 0;
                        in_a <= 0;
                        out_a <= 0;
                        in_b <= 0;
                        out_b <= 0;
                        ad <= 0;
                        sb <= 0;
                        jmp <= 0;
                        acc_out <= 0;
                        a_out_bus <= 0;
                        b_out_bus <= 1;
                    end
                end
                else begin
                    if (stagecount == 3) begin
                        pc_a <= 0;
                        mar_a <= 0;
                        ir_a <= 0;
                        in_a <= 0;
                        out_a <= 0;
                        in_b <= 0;
                        out_b <= 0;
                        ad <= 0;
                        sb <= 0;
                        jmp <= 0;
                        acc_out <= 0;
                        a_out_bus <= 0;
                        b_out_bus <= 0;
                    end
                    if (stagecount == 4) begin
                        pc_a <= 0;
                        mar_a <= 0;
                        ir_a <= 0;
                        in_a <= 0;
                        out_a <= 0;
                        in_b <= 0;
                        out_b <= 0;
                        ad <= 0;
                        sb <= 0;
                        jmp <= 0;
                        acc_out <= 0;
                        a_out_bus <= 0;
                        b_out_bus <= 0;
                    end
                end
            end
        end
    end
endmodule

module cpu(output [7:0] bus_i, output [7:0] bus_d, input clk, input reset);
    reg pc_a = 0;
    reg mar_a = 0;
    reg ir_a = 0;
    reg jmp = 0;
    // RAM flags
    reg in_b = 0;
    reg out_b = 0;
    reg in_a = 0;
    reg out_a = 0;
    //-----
    // accumulator
    reg c_out_acc = 1; //calculator out
    reg acc_out = 0;
    reg ad = 0;
    reg sb = 0;
    // Register flags (BUS OUT)
    reg a_out = 0;
    reg b_out = 0;
    //----
    reg out_bus = 0;
    reg [3:0] ir_i;
    // Comparator flags
    reg c_f; //Jump flag
    reg c_e;
    reg c_g;
    reg c_l;
    //reg [7:0] bus_d;
    //reg [7:0] bus_i;
    wire [3:0] to_ram;
    wire [7:0] to_ir;
    wire [7:0] to_a;
    wire [7:0] to_b;
    wire [7:0] to_acc;
    wire [7:0] a_calc;
    wire [7:0] b_calc;
    wire [7:0] c_calc;
    wire [3:0] address_ir;

    controller control(.bus_i(bus_i), .bus_d(bus_d), .pc_a(pc_a), .mar_a(mar_a), .ir_a(ir_a), .in_a(in_a), .out_a(out_a), .in_b(in_b), .out_b(out_b), .ad(ad), .sb(sb), .jmp(jmp), .acc_out(acc_out), .a_out_bus(a_out), .b_out_bus(b_out), .c_e(c_e), .c_g(c_g), .c_l(c_l), .c_f(c_f), .ir_i(ir_i), .clk(clk), .reset(reset));

    program_counter counter(.bus_i(bus_i), .clk(clk), .reset(reset), .pc_a(pc_a), .from_ir(address_ir), .jmp(jmp));

    mar mar(.bus_i(bus_i), .to_ram(to_ram), .from_ir(address_ir), .clk(clk), .reset(reset), .mar_a(mar_a), .jmp(jmp));

    ram ram(.to_ir(to_ir), .to_a(to_a), .to_b(to_b), .to_c(c_calc), .mar_in(to_ram), .address_ir(address_ir), .in_c(acc_out), .in_b(in_b), .out_b(out_b), .in_a(in_a), .out_a(out_a), .clk(clk), .reset(reset));

    instruction_register ir(.bus_i(bus_i), .from_ram(to_ir), .to_ctrl(ir_i), .to_ram(address_ir), .clk(clk), .reset(reset), .ir_a(ir_a));

    register areg(.to_out(a_calc), .bus_d(bus_d), .from_inp(to_a), .clk(clk), .inp_in(out_a), .out_o(0), .out_b(a_out));
    
    //register breg(.to_c(b_calc), .bus_d(bus_d), .from_ram(to_b), .clk(clk), .ram_in(out_b), .out_b(b_out));
    register breg(.to_out(b_calc), .bus_d(bus_d), .from_inp(to_b), .clk(clk), .inp_in(out_b), .out_o(0), .out_b(b_out));

    register accumulator(.to_out(c_calc), .bus_d(bus_d), .from_inp(to_acc), .clk(clk), .inp_in(c_out_acc), .out_o(acc_out), .out_b(0));

    alu alu(.to_acc(to_acc), .c_f(c_f), .bus_d(bus_d), .from_a(a_calc), .from_b(b_calc), .clk(clk), .ad(ad), .sub(sb), .c_e(c_e), .c_g(c_g), .c_l(c_l));

endmodule

module top(output [7:0] led_1, output [7:0] led_2, input clk, input reset);

    cpu cpu(.bus_i(led_2), .bus_d(led_1), .clk(clk), .reset(reset));

endmodule