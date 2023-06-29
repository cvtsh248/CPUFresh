# CPUFresh

Work in progress 8 bit CPU, designed in verilog, and simulated via verilator. As of now, programs are entered by directly directly adding values to the RAM in code.

# Current instruction set

The following instructions are currently supported:

```
Instr.   Code.
OP_LDA : 1000 => Load value at address into register A
OP_LDB : 0100 => Load value at address into register B
OP_ADD : 0010 => Add values in Register A and B and dump in accumulator
OP_SUB : 0001 => Subtract value in B from register A and dump in accumulator
OP_JMP : 1001 => Jump to instruction at address
OP_HLT : 1111 => Halt 
OP_WRT : 1010 => Write accumulator contents to RAM
```

Instructions are given in the following format:

```
[_ _ _ _][_ _ _ _]
  Instr.   Addr.
```

Where the address points to a certain location in memory.

For instance, the instruction ``10000110`` would load the value stored at ``0110`` in memory into register A.

# Running the simulation

Ensure verilator (at least v5.006) is installed, and run ``instruct.sh``. To edit simulation parameters, edit ``testbench.cpp``, and refer to verilator's documentation. A waveform file called ``Waveform.vcd`` will be updated/created upon running ``instruct.sh``. This file can be viewed using GTKWave. Any signal within the ``cpuf.v`` file can be viewed from ``Waveform.vcd``.

# Todo
* Write an assembler
* ~~Test on actual FPGA hardware~~ Now works on the Tang Nano 9k
* Add additional instructions (Multiplication, division, and compare)