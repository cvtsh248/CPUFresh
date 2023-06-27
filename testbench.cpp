#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "obj_dir/Vtop.h"

#define MAX_TIME = 250

vluint64_t sim_time = 0;

int main(int argc, char** argv, char** env){
    Vtop *dut = new Vtop;
    Verilated::traceEverOn(true);
    VerilatedVcdC *m_trace = new VerilatedVcdC;
    dut -> trace(m_trace, 5);
    m_trace -> open("Waveform.vcd");
    while (sim_time < 250){
        dut -> clk ^= 1;
        dut -> reset = 0;
        dut -> eval();
        m_trace -> dump(sim_time);
        sim_time++;
    }
    m_trace -> close();
    delete dut;
    exit (EXIT_SUCCESS);
}