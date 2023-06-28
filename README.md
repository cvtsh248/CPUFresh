# CPUFresh

Work in progress 8 bit CPU, designed in verilog, and simulated via verilator. 

# Current instruction set

The following instructions are currently supported

`` 
[_ _ _ _][_ _ _ _]
  Instr.   Addr.
OP_LDA : 1000 => Load value at address into register A
OP_LDB : 0100 => Load value at address into register B
OP_ADD : 0010 => Add values in Register A and B and dump in accumulator
OP_SUB : 0001 => Subtract value in B from register A and dump in accumulator
OP_JMP : 1001 => Jump to instruction at address
OP_HLT : 1111 => Halt 
OP_WRT : 1010 => Write accumulator contents to RAM
``