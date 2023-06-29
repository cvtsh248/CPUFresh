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
        bufp->chgBit(oldp+0,(vlSelf->top__DOT__cpu__DOT__pc_a));
        bufp->chgBit(oldp+1,(vlSelf->top__DOT__cpu__DOT__mar_a));
        bufp->chgBit(oldp+2,(vlSelf->top__DOT__cpu__DOT__ir_a));
        bufp->chgBit(oldp+3,(vlSelf->top__DOT__cpu__DOT__jmp));
        bufp->chgBit(oldp+4,(vlSelf->top__DOT__cpu__DOT__in_b));
        bufp->chgBit(oldp+5,(vlSelf->top__DOT__cpu__DOT__out_b));
        bufp->chgBit(oldp+6,(vlSelf->top__DOT__cpu__DOT__in_a));
        bufp->chgBit(oldp+7,(vlSelf->top__DOT__cpu__DOT__out_a));
        bufp->chgBit(oldp+8,(vlSelf->top__DOT__cpu__DOT__acc_out));
        bufp->chgBit(oldp+9,(vlSelf->top__DOT__cpu__DOT__ad));
        bufp->chgBit(oldp+10,(vlSelf->top__DOT__cpu__DOT__sb));
        bufp->chgCData(oldp+11,(vlSelf->top__DOT__cpu__DOT__ir__DOT__instruction),4);
        bufp->chgCData(oldp+12,(vlSelf->top__DOT__cpu__DOT__mar__DOT__address),4);
        bufp->chgCData(oldp+13,(vlSelf->top__DOT__cpu__DOT__ram__DOT__out_ir),8);
        bufp->chgCData(oldp+14,(vlSelf->top__DOT__cpu__DOT__to_a),8);
        bufp->chgCData(oldp+15,((((IData)(vlSelf->top__DOT__cpu__DOT__out_b)
                                   ? 0xffU : 0U) & 
                                 (((IData)(vlSelf->top__DOT__cpu__DOT__out_b)
                                    ? (IData)(vlSelf->top__DOT__cpu__DOT__ram__DOT__out_reg)
                                    : 0U) & ((IData)(vlSelf->top__DOT__cpu__DOT__out_b)
                                              ? 0xffU
                                              : 0U)))),8);
        bufp->chgCData(oldp+16,(vlSelf->top__DOT__cpu__DOT__to_acc),8);
        bufp->chgCData(oldp+17,(vlSelf->top__DOT__cpu__DOT__ir__DOT__address),4);
        bufp->chgCData(oldp+18,(vlSelf->top__DOT__cpu__DOT__alu__DOT__out),8);
        bufp->chgCData(oldp+19,(vlSelf->top__DOT__cpu__DOT__control__DOT__stagecount),3);
        bufp->chgCData(oldp+20,(vlSelf->top__DOT__cpu__DOT__counter__DOT__pc),4);
        bufp->chgWData(oldp+21,(vlSelf->top__DOT__cpu__DOT__ram__DOT__mem),129);
        bufp->chgCData(oldp+26,(vlSelf->top__DOT__cpu__DOT__ram__DOT__index_ir),8);
        bufp->chgCData(oldp+27,(vlSelf->top__DOT__cpu__DOT__ram__DOT__index_reg),8);
        bufp->chgCData(oldp+28,(vlSelf->top__DOT__cpu__DOT__ram__DOT__out_reg),8);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgCData(oldp+29,(vlSelf->top__DOT__cpu__DOT__areg__DOT__areg),8);
        bufp->chgCData(oldp+30,(vlSelf->top__DOT__cpu__DOT__breg__DOT__areg),8);
        bufp->chgCData(oldp+31,(vlSelf->top__DOT__cpu__DOT__accumulator__DOT__areg),8);
    }
    bufp->chgCData(oldp+32,(vlSelf->led_1),8);
    bufp->chgCData(oldp+33,(vlSelf->led_2),8);
    bufp->chgBit(oldp+34,(vlSelf->clk));
    bufp->chgBit(oldp+35,(vlSelf->reset));
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
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
