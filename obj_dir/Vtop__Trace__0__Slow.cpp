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
    tracep->declBus(c+33,"led_1", false,-1, 7,0);
    tracep->declBus(c+34,"led_2", false,-1, 7,0);
    tracep->declBit(c+35,"clk", false,-1);
    tracep->declBit(c+36,"reset", false,-1);
    tracep->pushNamePrefix("top ");
    tracep->declBus(c+33,"led_1", false,-1, 7,0);
    tracep->declBus(c+34,"led_2", false,-1, 7,0);
    tracep->declBit(c+35,"clk", false,-1);
    tracep->declBit(c+36,"reset", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBus(c+34,"bus_i", false,-1, 7,0);
    tracep->declBus(c+33,"bus_d", false,-1, 7,0);
    tracep->declBit(c+35,"clk", false,-1);
    tracep->declBit(c+36,"reset", false,-1);
    tracep->declBit(c+1,"pc_a", false,-1);
    tracep->declBit(c+2,"mar_a", false,-1);
    tracep->declBit(c+3,"ir_a", false,-1);
    tracep->declBit(c+4,"jmp", false,-1);
    tracep->declBit(c+5,"in_b", false,-1);
    tracep->declBit(c+6,"out_b", false,-1);
    tracep->declBit(c+7,"in_a", false,-1);
    tracep->declBit(c+8,"out_a", false,-1);
    tracep->declBit(c+37,"c_out_acc", false,-1);
    tracep->declBit(c+9,"acc_out", false,-1);
    tracep->declBit(c+10,"ad", false,-1);
    tracep->declBit(c+11,"sb", false,-1);
    tracep->declBit(c+38,"a_out", false,-1);
    tracep->declBit(c+38,"b_out", false,-1);
    tracep->declBit(c+38,"out_bus", false,-1);
    tracep->declBus(c+12,"ir_i", false,-1, 3,0);
    tracep->declBus(c+13,"to_ram", false,-1, 3,0);
    tracep->declBus(c+14,"to_ir", false,-1, 7,0);
    tracep->declBus(c+15,"to_a", false,-1, 7,0);
    tracep->declBus(c+16,"to_b", false,-1, 7,0);
    tracep->declBus(c+17,"to_acc", false,-1, 7,0);
    tracep->declBus(c+30,"a_calc", false,-1, 7,0);
    tracep->declBus(c+31,"b_calc", false,-1, 7,0);
    tracep->declBus(c+32,"c_calc", false,-1, 7,0);
    tracep->declBus(c+18,"address_ir", false,-1, 3,0);
    tracep->pushNamePrefix("accumulator ");
    tracep->declBus(c+32,"to_out", false,-1, 7,0);
    tracep->declBus(c+33,"bus_d", false,-1, 7,0);
    tracep->declBus(c+17,"from_inp", false,-1, 7,0);
    tracep->declBit(c+35,"clk", false,-1);
    tracep->declBit(c+37,"inp_in", false,-1);
    tracep->declBit(c+9,"out_o", false,-1);
    tracep->declBit(c+38,"out_b", false,-1);
    tracep->declBus(c+32,"areg", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("alu ");
    tracep->declBus(c+17,"to_acc", false,-1, 7,0);
    tracep->declBus(c+33,"bus_d", false,-1, 7,0);
    tracep->declBus(c+30,"from_a", false,-1, 7,0);
    tracep->declBus(c+31,"from_b", false,-1, 7,0);
    tracep->declBit(c+35,"clk", false,-1);
    tracep->declBit(c+10,"ad", false,-1);
    tracep->declBit(c+11,"sub", false,-1);
    tracep->declBus(c+19,"out", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("areg ");
    tracep->declBus(c+30,"to_out", false,-1, 7,0);
    tracep->declBus(c+33,"bus_d", false,-1, 7,0);
    tracep->declBus(c+15,"from_inp", false,-1, 7,0);
    tracep->declBit(c+35,"clk", false,-1);
    tracep->declBit(c+8,"inp_in", false,-1);
    tracep->declBit(c+38,"out_o", false,-1);
    tracep->declBit(c+38,"out_b", false,-1);
    tracep->declBus(c+30,"areg", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("breg ");
    tracep->declBus(c+31,"to_out", false,-1, 7,0);
    tracep->declBus(c+33,"bus_d", false,-1, 7,0);
    tracep->declBus(c+16,"from_inp", false,-1, 7,0);
    tracep->declBit(c+35,"clk", false,-1);
    tracep->declBit(c+6,"inp_in", false,-1);
    tracep->declBit(c+38,"out_o", false,-1);
    tracep->declBit(c+38,"out_b", false,-1);
    tracep->declBus(c+31,"areg", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("control ");
    tracep->declBus(c+34,"bus_i", false,-1, 7,0);
    tracep->declBus(c+33,"bus_d", false,-1, 7,0);
    tracep->declBit(c+1,"pc_a", false,-1);
    tracep->declBit(c+2,"mar_a", false,-1);
    tracep->declBit(c+3,"ir_a", false,-1);
    tracep->declBit(c+7,"in_a", false,-1);
    tracep->declBit(c+8,"out_a", false,-1);
    tracep->declBit(c+5,"in_b", false,-1);
    tracep->declBit(c+6,"out_b", false,-1);
    tracep->declBit(c+10,"ad", false,-1);
    tracep->declBit(c+11,"sb", false,-1);
    tracep->declBit(c+4,"jmp", false,-1);
    tracep->declBit(c+9,"acc_out", false,-1);
    tracep->declBus(c+12,"ir_i", false,-1, 3,0);
    tracep->declBit(c+35,"clk", false,-1);
    tracep->declBit(c+36,"reset", false,-1);
    tracep->declBus(c+20,"stagecount", false,-1, 2,0);
    tracep->declBit(c+38,"aflag", false,-1);
    tracep->declBus(c+39,"OP_LDA", false,-1, 3,0);
    tracep->declBus(c+40,"OP_LDB", false,-1, 3,0);
    tracep->declBus(c+41,"OP_ADD", false,-1, 3,0);
    tracep->declBus(c+42,"OP_SUB", false,-1, 3,0);
    tracep->declBus(c+43,"OP_JMP", false,-1, 3,0);
    tracep->declBus(c+44,"OP_HLT", false,-1, 3,0);
    tracep->declBus(c+45,"OP_WRT", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("counter ");
    tracep->declBus(c+34,"bus_i", false,-1, 7,0);
    tracep->declBit(c+35,"clk", false,-1);
    tracep->declBit(c+36,"reset", false,-1);
    tracep->declBit(c+1,"pc_a", false,-1);
    tracep->declBus(c+18,"from_ir", false,-1, 3,0);
    tracep->declBit(c+4,"jmp", false,-1);
    tracep->declBus(c+21,"pc", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ir ");
    tracep->declBus(c+34,"bus_i", false,-1, 7,0);
    tracep->declBus(c+14,"from_ram", false,-1, 7,0);
    tracep->declBus(c+12,"to_ctrl", false,-1, 3,0);
    tracep->declBus(c+18,"to_ram", false,-1, 3,0);
    tracep->declBit(c+35,"clk", false,-1);
    tracep->declBit(c+36,"reset", false,-1);
    tracep->declBit(c+3,"ir_a", false,-1);
    tracep->declBus(c+12,"instruction", false,-1, 3,0);
    tracep->declBus(c+18,"address", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mar ");
    tracep->declBus(c+34,"bus_i", false,-1, 7,0);
    tracep->declBus(c+13,"to_ram", false,-1, 3,0);
    tracep->declBus(c+18,"from_ir", false,-1, 3,0);
    tracep->declBit(c+35,"clk", false,-1);
    tracep->declBit(c+36,"reset", false,-1);
    tracep->declBit(c+2,"mar_a", false,-1);
    tracep->declBit(c+4,"jmp", false,-1);
    tracep->declBus(c+13,"address", false,-1, 3,0);
    tracep->declBus(c+46,"offset", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ram ");
    tracep->declBus(c+14,"to_ir", false,-1, 7,0);
    tracep->declBus(c+15,"to_a", false,-1, 7,0);
    tracep->declBus(c+16,"to_b", false,-1, 7,0);
    tracep->declBus(c+32,"to_c", false,-1, 7,0);
    tracep->declBus(c+13,"mar_in", false,-1, 3,0);
    tracep->declBus(c+18,"address_ir", false,-1, 3,0);
    tracep->declBit(c+9,"in_c", false,-1);
    tracep->declBit(c+5,"in_b", false,-1);
    tracep->declBit(c+6,"out_b", false,-1);
    tracep->declBit(c+7,"in_a", false,-1);
    tracep->declBit(c+8,"out_a", false,-1);
    tracep->declBit(c+35,"clk", false,-1);
    tracep->declBit(c+36,"reset", false,-1);
    tracep->declArray(c+22,"mem", false,-1, 128,0);
    tracep->declBus(c+27,"index_ir", false,-1, 7,0);
    tracep->declBus(c+28,"index_reg", false,-1, 7,0);
    tracep->declBus(c+29,"out_reg", false,-1, 7,0);
    tracep->declBus(c+14,"out_ir", false,-1, 7,0);
    tracep->popNamePrefix(3);
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
    bufp->fullBit(oldp+1,(vlSelf->top__DOT__cpu__DOT__pc_a));
    bufp->fullBit(oldp+2,(vlSelf->top__DOT__cpu__DOT__mar_a));
    bufp->fullBit(oldp+3,(vlSelf->top__DOT__cpu__DOT__ir_a));
    bufp->fullBit(oldp+4,(vlSelf->top__DOT__cpu__DOT__jmp));
    bufp->fullBit(oldp+5,(vlSelf->top__DOT__cpu__DOT__in_b));
    bufp->fullBit(oldp+6,(vlSelf->top__DOT__cpu__DOT__out_b));
    bufp->fullBit(oldp+7,(vlSelf->top__DOT__cpu__DOT__in_a));
    bufp->fullBit(oldp+8,(vlSelf->top__DOT__cpu__DOT__out_a));
    bufp->fullBit(oldp+9,(vlSelf->top__DOT__cpu__DOT__acc_out));
    bufp->fullBit(oldp+10,(vlSelf->top__DOT__cpu__DOT__ad));
    bufp->fullBit(oldp+11,(vlSelf->top__DOT__cpu__DOT__sb));
    bufp->fullCData(oldp+12,(vlSelf->top__DOT__cpu__DOT__ir__DOT__instruction),4);
    bufp->fullCData(oldp+13,(vlSelf->top__DOT__cpu__DOT__mar__DOT__address),4);
    bufp->fullCData(oldp+14,(vlSelf->top__DOT__cpu__DOT__ram__DOT__out_ir),8);
    bufp->fullCData(oldp+15,(vlSelf->top__DOT__cpu__DOT__to_a),8);
    bufp->fullCData(oldp+16,((((IData)(vlSelf->top__DOT__cpu__DOT__out_b)
                                ? 0xffU : 0U) & (((IData)(vlSelf->top__DOT__cpu__DOT__out_b)
                                                   ? (IData)(vlSelf->top__DOT__cpu__DOT__ram__DOT__out_reg)
                                                   : 0U) 
                                                 & ((IData)(vlSelf->top__DOT__cpu__DOT__out_b)
                                                     ? 0xffU
                                                     : 0U)))),8);
    bufp->fullCData(oldp+17,(vlSelf->top__DOT__cpu__DOT__to_acc),8);
    bufp->fullCData(oldp+18,(vlSelf->top__DOT__cpu__DOT__ir__DOT__address),4);
    bufp->fullCData(oldp+19,(vlSelf->top__DOT__cpu__DOT__alu__DOT__out),8);
    bufp->fullCData(oldp+20,(vlSelf->top__DOT__cpu__DOT__control__DOT__stagecount),3);
    bufp->fullCData(oldp+21,(vlSelf->top__DOT__cpu__DOT__counter__DOT__pc),4);
    bufp->fullWData(oldp+22,(vlSelf->top__DOT__cpu__DOT__ram__DOT__mem),129);
    bufp->fullCData(oldp+27,(vlSelf->top__DOT__cpu__DOT__ram__DOT__index_ir),8);
    bufp->fullCData(oldp+28,(vlSelf->top__DOT__cpu__DOT__ram__DOT__index_reg),8);
    bufp->fullCData(oldp+29,(vlSelf->top__DOT__cpu__DOT__ram__DOT__out_reg),8);
    bufp->fullCData(oldp+30,(vlSelf->top__DOT__cpu__DOT__areg__DOT__areg),8);
    bufp->fullCData(oldp+31,(vlSelf->top__DOT__cpu__DOT__breg__DOT__areg),8);
    bufp->fullCData(oldp+32,(vlSelf->top__DOT__cpu__DOT__accumulator__DOT__areg),8);
    bufp->fullCData(oldp+33,(vlSelf->led_1),8);
    bufp->fullCData(oldp+34,(vlSelf->led_2),8);
    bufp->fullBit(oldp+35,(vlSelf->clk));
    bufp->fullBit(oldp+36,(vlSelf->reset));
    bufp->fullBit(oldp+37,(1U));
    bufp->fullBit(oldp+38,(0U));
    bufp->fullCData(oldp+39,(8U),4);
    bufp->fullCData(oldp+40,(4U),4);
    bufp->fullCData(oldp+41,(2U),4);
    bufp->fullCData(oldp+42,(1U),4);
    bufp->fullCData(oldp+43,(9U),4);
    bufp->fullCData(oldp+44,(0xfU),4);
    bufp->fullCData(oldp+45,(0xaU),4);
    bufp->fullCData(oldp+46,(vlSelf->top__DOT__cpu__DOT__mar__DOT__offset),4);
}
