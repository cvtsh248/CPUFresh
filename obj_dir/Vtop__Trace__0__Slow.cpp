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
    tracep->declBus(c+37,"led_1", false,-1, 7,0);
    tracep->declBus(c+38,"led_2", false,-1, 7,0);
    tracep->declBit(c+39,"clk", false,-1);
    tracep->declBit(c+40,"reset", false,-1);
    tracep->pushNamePrefix("top ");
    tracep->declBus(c+37,"led_1", false,-1, 7,0);
    tracep->declBus(c+38,"led_2", false,-1, 7,0);
    tracep->declBit(c+39,"clk", false,-1);
    tracep->declBit(c+40,"reset", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBus(c+38,"bus_i", false,-1, 7,0);
    tracep->declBus(c+37,"bus_d", false,-1, 7,0);
    tracep->declBit(c+39,"clk", false,-1);
    tracep->declBit(c+40,"reset", false,-1);
    tracep->declBit(c+1,"pc_a", false,-1);
    tracep->declBit(c+2,"mar_a", false,-1);
    tracep->declBit(c+3,"ir_a", false,-1);
    tracep->declBit(c+4,"jmp", false,-1);
    tracep->declBit(c+5,"in_b", false,-1);
    tracep->declBit(c+6,"out_b", false,-1);
    tracep->declBit(c+7,"in_a", false,-1);
    tracep->declBit(c+8,"out_a", false,-1);
    tracep->declBit(c+43,"c_out_acc", false,-1);
    tracep->declBit(c+9,"acc_out", false,-1);
    tracep->declBit(c+10,"ad", false,-1);
    tracep->declBit(c+11,"sb", false,-1);
    tracep->declBit(c+12,"a_out", false,-1);
    tracep->declBit(c+13,"b_out", false,-1);
    tracep->declBit(c+44,"out_bus", false,-1);
    tracep->declBus(c+21,"ir_i", false,-1, 3,0);
    tracep->declBit(c+22,"c_f", false,-1);
    tracep->declBit(c+14,"c_e", false,-1);
    tracep->declBit(c+15,"c_g", false,-1);
    tracep->declBit(c+16,"c_l", false,-1);
    tracep->declBus(c+23,"to_ram", false,-1, 3,0);
    tracep->declBus(c+24,"to_ir", false,-1, 7,0);
    tracep->declBus(c+41,"to_a", false,-1, 7,0);
    tracep->declBus(c+42,"to_b", false,-1, 7,0);
    tracep->declBus(c+25,"to_acc", false,-1, 7,0);
    tracep->declBus(c+17,"a_calc", false,-1, 7,0);
    tracep->declBus(c+18,"b_calc", false,-1, 7,0);
    tracep->declBus(c+19,"c_calc", false,-1, 7,0);
    tracep->declBus(c+26,"address_ir", false,-1, 3,0);
    tracep->pushNamePrefix("accumulator ");
    tracep->declBus(c+19,"to_out", false,-1, 7,0);
    tracep->declBus(c+37,"bus_d", false,-1, 7,0);
    tracep->declBus(c+25,"from_inp", false,-1, 7,0);
    tracep->declBit(c+39,"clk", false,-1);
    tracep->declBit(c+43,"inp_in", false,-1);
    tracep->declBit(c+9,"out_o", false,-1);
    tracep->declBit(c+44,"out_b", false,-1);
    tracep->declBus(c+19,"areg", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("alu ");
    tracep->declBus(c+25,"to_acc", false,-1, 7,0);
    tracep->declBit(c+22,"c_f", false,-1);
    tracep->declBus(c+37,"bus_d", false,-1, 7,0);
    tracep->declBus(c+17,"from_a", false,-1, 7,0);
    tracep->declBus(c+18,"from_b", false,-1, 7,0);
    tracep->declBit(c+39,"clk", false,-1);
    tracep->declBit(c+10,"ad", false,-1);
    tracep->declBit(c+11,"sub", false,-1);
    tracep->declBit(c+14,"c_e", false,-1);
    tracep->declBit(c+15,"c_g", false,-1);
    tracep->declBit(c+16,"c_l", false,-1);
    tracep->declBus(c+25,"out", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("areg ");
    tracep->declBus(c+17,"to_out", false,-1, 7,0);
    tracep->declBus(c+37,"bus_d", false,-1, 7,0);
    tracep->declBus(c+41,"from_inp", false,-1, 7,0);
    tracep->declBit(c+39,"clk", false,-1);
    tracep->declBit(c+8,"inp_in", false,-1);
    tracep->declBit(c+44,"out_o", false,-1);
    tracep->declBit(c+12,"out_b", false,-1);
    tracep->declBus(c+17,"areg", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("breg ");
    tracep->declBus(c+18,"to_out", false,-1, 7,0);
    tracep->declBus(c+37,"bus_d", false,-1, 7,0);
    tracep->declBus(c+42,"from_inp", false,-1, 7,0);
    tracep->declBit(c+39,"clk", false,-1);
    tracep->declBit(c+6,"inp_in", false,-1);
    tracep->declBit(c+44,"out_o", false,-1);
    tracep->declBit(c+13,"out_b", false,-1);
    tracep->declBus(c+18,"areg", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("control ");
    tracep->declBus(c+38,"bus_i", false,-1, 7,0);
    tracep->declBus(c+37,"bus_d", false,-1, 7,0);
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
    tracep->declBit(c+12,"a_out_bus", false,-1);
    tracep->declBit(c+13,"b_out_bus", false,-1);
    tracep->declBit(c+14,"c_e", false,-1);
    tracep->declBit(c+15,"c_g", false,-1);
    tracep->declBit(c+16,"c_l", false,-1);
    tracep->declBit(c+22,"c_f", false,-1);
    tracep->declBus(c+21,"ir_i", false,-1, 3,0);
    tracep->declBit(c+39,"clk", false,-1);
    tracep->declBit(c+40,"reset", false,-1);
    tracep->declBus(c+20,"stagecount", false,-1, 2,0);
    tracep->declBit(c+44,"aflag", false,-1);
    tracep->declBus(c+45,"OP_LDA", false,-1, 3,0);
    tracep->declBus(c+46,"OP_LDB", false,-1, 3,0);
    tracep->declBus(c+47,"OP_ADD", false,-1, 3,0);
    tracep->declBus(c+48,"OP_SUB", false,-1, 3,0);
    tracep->declBus(c+49,"OP_JMP", false,-1, 3,0);
    tracep->declBus(c+50,"OP_HLT", false,-1, 3,0);
    tracep->declBus(c+51,"OP_WRT", false,-1, 3,0);
    tracep->declBus(c+52,"OP_DMA", false,-1, 3,0);
    tracep->declBus(c+53,"OP_DMB", false,-1, 3,0);
    tracep->declBus(c+54,"OP_CME", false,-1, 3,0);
    tracep->declBus(c+55,"OP_CMG", false,-1, 3,0);
    tracep->declBus(c+56,"OP_CML", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("counter ");
    tracep->declBus(c+27,"bus_i", false,-1, 7,0);
    tracep->declBit(c+39,"clk", false,-1);
    tracep->declBit(c+40,"reset", false,-1);
    tracep->declBit(c+1,"pc_a", false,-1);
    tracep->declBus(c+26,"from_ir", false,-1, 3,0);
    tracep->declBit(c+4,"jmp", false,-1);
    tracep->declBus(c+28,"pc", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ir ");
    tracep->declBus(c+38,"bus_i", false,-1, 7,0);
    tracep->declBus(c+24,"from_ram", false,-1, 7,0);
    tracep->declBus(c+21,"to_ctrl", false,-1, 3,0);
    tracep->declBus(c+26,"to_ram", false,-1, 3,0);
    tracep->declBit(c+39,"clk", false,-1);
    tracep->declBit(c+40,"reset", false,-1);
    tracep->declBit(c+3,"ir_a", false,-1);
    tracep->declBus(c+21,"instruction", false,-1, 3,0);
    tracep->declBus(c+26,"address", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mar ");
    tracep->declBus(c+38,"bus_i", false,-1, 7,0);
    tracep->declBus(c+23,"to_ram", false,-1, 3,0);
    tracep->declBus(c+26,"from_ir", false,-1, 3,0);
    tracep->declBit(c+39,"clk", false,-1);
    tracep->declBit(c+40,"reset", false,-1);
    tracep->declBit(c+2,"mar_a", false,-1);
    tracep->declBit(c+4,"jmp", false,-1);
    tracep->declBus(c+23,"address", false,-1, 3,0);
    tracep->declBus(c+57,"offset", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ram ");
    tracep->declBus(c+24,"to_ir", false,-1, 7,0);
    tracep->declBus(c+41,"to_a", false,-1, 7,0);
    tracep->declBus(c+42,"to_b", false,-1, 7,0);
    tracep->declBus(c+19,"to_c", false,-1, 7,0);
    tracep->declBus(c+23,"mar_in", false,-1, 3,0);
    tracep->declBus(c+26,"address_ir", false,-1, 3,0);
    tracep->declBit(c+9,"in_c", false,-1);
    tracep->declBit(c+5,"in_b", false,-1);
    tracep->declBit(c+6,"out_b", false,-1);
    tracep->declBit(c+7,"in_a", false,-1);
    tracep->declBit(c+8,"out_a", false,-1);
    tracep->declBit(c+39,"clk", false,-1);
    tracep->declBit(c+40,"reset", false,-1);
    tracep->declArray(c+29,"mem", false,-1, 128,0);
    tracep->declBus(c+34,"index_ir", false,-1, 7,0);
    tracep->declBus(c+35,"index_reg", false,-1, 7,0);
    tracep->declBus(c+36,"out_reg", false,-1, 7,0);
    tracep->declBus(c+24,"out_ir", false,-1, 7,0);
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
    bufp->fullBit(oldp+12,(vlSelf->top__DOT__cpu__DOT__a_out));
    bufp->fullBit(oldp+13,(vlSelf->top__DOT__cpu__DOT__b_out));
    bufp->fullBit(oldp+14,(vlSelf->top__DOT__cpu__DOT__c_e));
    bufp->fullBit(oldp+15,(vlSelf->top__DOT__cpu__DOT__c_g));
    bufp->fullBit(oldp+16,(vlSelf->top__DOT__cpu__DOT__c_l));
    bufp->fullCData(oldp+17,(vlSelf->top__DOT__cpu__DOT__areg__DOT__areg),8);
    bufp->fullCData(oldp+18,(vlSelf->top__DOT__cpu__DOT__breg__DOT__areg),8);
    bufp->fullCData(oldp+19,(vlSelf->top__DOT__cpu__DOT__accumulator__DOT__areg),8);
    bufp->fullCData(oldp+20,(vlSelf->top__DOT__cpu__DOT__control__DOT__stagecount),3);
    bufp->fullCData(oldp+21,(vlSelf->top__DOT__cpu__DOT__ir__DOT__instruction),4);
    bufp->fullBit(oldp+22,(vlSelf->top__DOT__cpu__DOT__c_f));
    bufp->fullCData(oldp+23,(vlSelf->top__DOT__cpu__DOT__mar__DOT__address),4);
    bufp->fullCData(oldp+24,(vlSelf->top__DOT__cpu__DOT__ram__DOT__out_ir),8);
    bufp->fullCData(oldp+25,(vlSelf->top__DOT__cpu__DOT__alu__DOT__out),8);
    bufp->fullCData(oldp+26,(vlSelf->top__DOT__cpu__DOT__ir__DOT__address),4);
    bufp->fullCData(oldp+27,(vlSelf->top__DOT__cpu__DOT__bus_i__out__strong__out23),8);
    bufp->fullCData(oldp+28,(vlSelf->top__DOT__cpu__DOT__counter__DOT__pc),4);
    bufp->fullWData(oldp+29,(vlSelf->top__DOT__cpu__DOT__ram__DOT__mem),129);
    bufp->fullCData(oldp+34,(vlSelf->top__DOT__cpu__DOT__ram__DOT__index_ir),8);
    bufp->fullCData(oldp+35,(vlSelf->top__DOT__cpu__DOT__ram__DOT__index_reg),8);
    bufp->fullCData(oldp+36,(vlSelf->top__DOT__cpu__DOT__ram__DOT__out_reg),8);
    bufp->fullCData(oldp+37,(vlSelf->led_1),8);
    bufp->fullCData(oldp+38,(vlSelf->led_2),8);
    bufp->fullBit(oldp+39,(vlSelf->clk));
    bufp->fullBit(oldp+40,(vlSelf->reset));
    bufp->fullCData(oldp+41,(vlSelf->top__DOT__cpu__DOT__to_a),8);
    bufp->fullCData(oldp+42,((((IData)(vlSelf->top__DOT__cpu__DOT__out_b)
                                ? 0xffU : 0U) & (((IData)(vlSelf->top__DOT__cpu__DOT__out_b)
                                                   ? (IData)(vlSelf->top__DOT__cpu__DOT__ram__DOT__out_reg)
                                                   : 0U) 
                                                 & ((IData)(vlSelf->top__DOT__cpu__DOT__out_b)
                                                     ? 0xffU
                                                     : 0U)))),8);
    bufp->fullBit(oldp+43,(1U));
    bufp->fullBit(oldp+44,(0U));
    bufp->fullCData(oldp+45,(8U),4);
    bufp->fullCData(oldp+46,(4U),4);
    bufp->fullCData(oldp+47,(2U),4);
    bufp->fullCData(oldp+48,(1U),4);
    bufp->fullCData(oldp+49,(9U),4);
    bufp->fullCData(oldp+50,(0xfU),4);
    bufp->fullCData(oldp+51,(0xaU),4);
    bufp->fullCData(oldp+52,(0xbU),4);
    bufp->fullCData(oldp+53,(0xdU),4);
    bufp->fullCData(oldp+54,(5U),4);
    bufp->fullCData(oldp+55,(7U),4);
    bufp->fullCData(oldp+56,(3U),4);
    bufp->fullCData(oldp+57,(vlSelf->top__DOT__cpu__DOT__mar__DOT__offset),4);
}
