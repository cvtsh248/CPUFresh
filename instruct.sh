rm -r obj_dir
rm Waveform.vcd
verilator --cc --top-module top cpuf.v
verilator --trace --exe --build -cc --top-module top testbench.cpp cpuf.v
./obj_dir/Vtop