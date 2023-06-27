// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+24,"bus_i", false,-1, 7,0);
    tracep->declBit(c+25,"clk", false,-1);
    tracep->declBit(c+26,"reset", false,-1);
    tracep->pushNamePrefix("top ");
    tracep->declBus(c+24,"bus_i", false,-1, 7,0);
    tracep->declBit(c+25,"clk", false,-1);
    tracep->declBit(c+26,"reset", false,-1);
    tracep->declBit(c+1,"pc_a", false,-1);
    tracep->declBit(c+2,"mar_a", false,-1);
    tracep->declBit(c+3,"ir_a", false,-1);
    tracep->declBit(c+4,"in_b", false,-1);
    tracep->declBit(c+5,"out_b", false,-1);
    tracep->declBit(c+6,"in_a", false,-1);
    tracep->declBit(c+7,"out_a", false,-1);
    tracep->declBit(c+29,"a_out", false,-1);
    tracep->declBit(c+29,"b_out", false,-1);
    tracep->declBit(c+29,"out_bus", false,-1);
    tracep->declBus(c+8,"ir_i", false,-1, 3,0);
    tracep->declBus(c+30,"bus_d", false,-1, 7,0);
    tracep->declBus(c+9,"to_ram", false,-1, 3,0);
    tracep->declBus(c+10,"to_ir", false,-1, 7,0);
    tracep->declBus(c+11,"to_a", false,-1, 7,0);
    tracep->declBus(c+12,"to_b", false,-1, 7,0);
    tracep->declBus(c+13,"address_ir", false,-1, 3,0);
    tracep->pushNamePrefix("areg ");
    tracep->declBus(c+30,"bus_d", false,-1, 7,0);
    tracep->declBus(c+11,"from_ram", false,-1, 7,0);
    tracep->declBit(c+25,"clk", false,-1);
    tracep->declBit(c+7,"ram_in", false,-1);
    tracep->declBit(c+29,"out_b", false,-1);
    tracep->declBus(c+27,"areg", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("breg ");
    tracep->declBus(c+30,"bus_d", false,-1, 7,0);
    tracep->declBus(c+12,"from_ram", false,-1, 7,0);
    tracep->declBit(c+25,"clk", false,-1);
    tracep->declBit(c+5,"ram_in", false,-1);
    tracep->declBit(c+29,"out_b", false,-1);
    tracep->declBus(c+28,"areg", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("control ");
    tracep->declBus(c+24,"bus_i", false,-1, 7,0);
    tracep->declBus(c+30,"bus_d", false,-1, 7,0);
    tracep->declBit(c+1,"pc_a", false,-1);
    tracep->declBit(c+2,"mar_a", false,-1);
    tracep->declBit(c+3,"ir_a", false,-1);
    tracep->declBit(c+6,"in_a", false,-1);
    tracep->declBit(c+7,"out_a", false,-1);
    tracep->declBit(c+4,"in_b", false,-1);
    tracep->declBit(c+5,"out_b", false,-1);
    tracep->declBus(c+8,"ir_i", false,-1, 3,0);
    tracep->declBit(c+25,"clk", false,-1);
    tracep->declBit(c+26,"reset", false,-1);
    tracep->declBus(c+14,"stagecount", false,-1, 2,0);
    tracep->declBit(c+29,"aflag", false,-1);
    tracep->declBus(c+31,"OP_LDA", false,-1, 3,0);
    tracep->declBus(c+32,"OP_LDB", false,-1, 3,0);
    tracep->declBus(c+33,"OP_ADD", false,-1, 3,0);
    tracep->declBus(c+34,"OP_SUB", false,-1, 3,0);
    tracep->declBus(c+35,"OP_MUL", false,-1, 3,0);
    tracep->declBus(c+36,"OP_DIV", false,-1, 3,0);
    tracep->declBus(c+37,"OP_JMP", false,-1, 3,0);
    tracep->declBus(c+38,"OP_HLT", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("counter ");
    tracep->declBus(c+24,"bus_i", false,-1, 7,0);
    tracep->declBit(c+25,"clk", false,-1);
    tracep->declBit(c+26,"reset", false,-1);
    tracep->declBit(c+1,"pc_a", false,-1);
    tracep->declBus(c+15,"pc", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ir ");
    tracep->declBus(c+24,"bus_i", false,-1, 7,0);
    tracep->declBus(c+10,"from_ram", false,-1, 7,0);
    tracep->declBus(c+8,"to_ctrl", false,-1, 3,0);
    tracep->declBus(c+13,"to_ram", false,-1, 3,0);
    tracep->declBit(c+25,"clk", false,-1);
    tracep->declBit(c+26,"reset", false,-1);
    tracep->declBit(c+3,"ir_a", false,-1);
    tracep->declBus(c+8,"instruction", false,-1, 3,0);
    tracep->declBus(c+13,"address", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mar ");
    tracep->declBus(c+24,"bus_i", false,-1, 7,0);
    tracep->declBus(c+9,"to_ram", false,-1, 3,0);
    tracep->declBus(c+13,"from_ir", false,-1, 3,0);
    tracep->declBit(c+25,"clk", false,-1);
    tracep->declBit(c+26,"reset", false,-1);
    tracep->declBit(c+2,"mar_a", false,-1);
    tracep->declBus(c+9,"address", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ram ");
    tracep->declBus(c+10,"to_ir", false,-1, 7,0);
    tracep->declBus(c+11,"to_a", false,-1, 7,0);
    tracep->declBus(c+12,"to_b", false,-1, 7,0);
    tracep->declBus(c+9,"mar_in", false,-1, 3,0);
    tracep->declBus(c+13,"address_ir", false,-1, 3,0);
    tracep->declBit(c+4,"in_b", false,-1);
    tracep->declBit(c+5,"out_b", false,-1);
    tracep->declBit(c+6,"in_a", false,-1);
    tracep->declBit(c+7,"out_a", false,-1);
    tracep->declBit(c+25,"clk", false,-1);
    tracep->declBit(c+26,"reset", false,-1);
    tracep->declArray(c+16,"mem", false,-1, 128,0);
    tracep->declBus(c+21,"index_ir", false,-1, 7,0);
    tracep->declBus(c+22,"index_reg", false,-1, 7,0);
    tracep->declBus(c+23,"out_reg", false,-1, 7,0);
    tracep->declBus(c+10,"out_ir", false,-1, 7,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->top__DOT__pc_a));
    bufp->fullBit(oldp+2,(vlSelf->top__DOT__mar_a));
    bufp->fullBit(oldp+3,(vlSelf->top__DOT__ir_a));
    bufp->fullBit(oldp+4,(vlSelf->top__DOT__in_b));
    bufp->fullBit(oldp+5,(vlSelf->top__DOT__out_b));
    bufp->fullBit(oldp+6,(vlSelf->top__DOT__in_a));
    bufp->fullBit(oldp+7,(vlSelf->top__DOT__out_a));
    bufp->fullCData(oldp+8,(vlSelf->top__DOT__ir__DOT__instruction),4);
    bufp->fullCData(oldp+9,(vlSelf->top__DOT__mar__DOT__address),4);
    bufp->fullCData(oldp+10,(vlSelf->top__DOT__ram__DOT__out_ir),8);
    bufp->fullCData(oldp+11,(vlSelf->top__DOT__to_a),8);
    bufp->fullCData(oldp+12,(vlSelf->top__DOT__to_b),8);
    bufp->fullCData(oldp+13,(vlSelf->top__DOT__ir__DOT__address),4);
    bufp->fullCData(oldp+14,(vlSelf->top__DOT__control__DOT__stagecount),3);
    bufp->fullCData(oldp+15,(vlSelf->top__DOT__counter__DOT__pc),4);
    bufp->fullWData(oldp+16,(vlSelf->top__DOT__ram__DOT__mem),129);
    bufp->fullCData(oldp+21,(vlSelf->top__DOT__ram__DOT__index_ir),8);
    bufp->fullCData(oldp+22,(vlSelf->top__DOT__ram__DOT__index_reg),8);
    bufp->fullCData(oldp+23,(vlSelf->top__DOT__ram__DOT__out_reg),8);
    bufp->fullCData(oldp+24,(vlSelf->bus_i),8);
    bufp->fullBit(oldp+25,(vlSelf->clk));
    bufp->fullBit(oldp+26,(vlSelf->reset));
    bufp->fullCData(oldp+27,(vlSelf->top__DOT__areg__DOT__areg),8);
    bufp->fullCData(oldp+28,(vlSelf->top__DOT__breg__DOT__areg),8);
    bufp->fullBit(oldp+29,(0U));
    bufp->fullCData(oldp+30,(0U),8);
    bufp->fullCData(oldp+31,(8U),4);
    bufp->fullCData(oldp+32,(4U),4);
    bufp->fullCData(oldp+33,(2U),4);
    bufp->fullCData(oldp+34,(1U),4);
    bufp->fullCData(oldp+35,(0xcU),4);
    bufp->fullCData(oldp+36,(0xaU),4);
    bufp->fullCData(oldp+37,(9U),4);
    bufp->fullCData(oldp+38,(0xfU),4);
}
