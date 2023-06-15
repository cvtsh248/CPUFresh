// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->top__DOT__pc_a));
        bufp->chgBit(oldp+1,(vlSelf->top__DOT__mar_a));
        bufp->chgBit(oldp+2,(vlSelf->top__DOT__ir_a));
        bufp->chgCData(oldp+3,(((((IData)(vlSelf->top__DOT__ir_a)
                                   ? (IData)(vlSelf->top__DOT__ir__DOT__instruction)
                                   : 0U) & ((IData)(vlSelf->top__DOT__ir_a)
                                             ? 0xfU
                                             : 0U)) 
                                & ((IData)(vlSelf->top__DOT__ir_a)
                                    ? 0xfU : 0U))),4);
        bufp->chgCData(oldp+4,((((IData)(vlSelf->top__DOT__mar_a)
                                  ? 0xfU : 0U) & (((IData)(vlSelf->top__DOT__mar_a)
                                                    ? (IData)(vlSelf->top__DOT__mar__DOT__address)
                                                    : 0U) 
                                                  & ((IData)(vlSelf->top__DOT__mar_a)
                                                      ? 0xfU
                                                      : 0U)))),4);
        bufp->chgCData(oldp+5,(vlSelf->top__DOT__ram__DOT__out),8);
        bufp->chgCData(oldp+6,(vlSelf->top__DOT__control__DOT__stagecount),3);
        bufp->chgCData(oldp+7,(vlSelf->top__DOT__counter__DOT__pc),4);
        bufp->chgCData(oldp+8,(vlSelf->top__DOT__ir__DOT__instruction),4);
        bufp->chgCData(oldp+9,(vlSelf->top__DOT__mar__DOT__address),4);
        bufp->chgWData(oldp+10,(vlSelf->top__DOT__ram__DOT__mem),129);
        bufp->chgCData(oldp+15,(vlSelf->top__DOT__ram__DOT__index),8);
    }
    bufp->chgCData(oldp+16,(vlSelf->bus_i),8);
    bufp->chgBit(oldp+17,(vlSelf->clk));
    bufp->chgBit(oldp+18,(vlSelf->reset));
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
