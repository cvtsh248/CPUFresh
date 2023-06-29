// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    // Body
    Vtop___024root___eval_static__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtop___024root___eval_static__TOP(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->top__DOT__cpu__DOT__pc_a = 0U;
    vlSelf->top__DOT__cpu__DOT__mar_a = 0U;
    vlSelf->top__DOT__cpu__DOT__ir_a = 0U;
    vlSelf->top__DOT__cpu__DOT__jmp = 0U;
    vlSelf->top__DOT__cpu__DOT__in_b = 0U;
    vlSelf->top__DOT__cpu__DOT__out_b = 0U;
    vlSelf->top__DOT__cpu__DOT__in_a = 0U;
    vlSelf->top__DOT__cpu__DOT__out_a = 0U;
    vlSelf->top__DOT__cpu__DOT__acc_out = 0U;
    vlSelf->top__DOT__cpu__DOT__ad = 0U;
    vlSelf->top__DOT__cpu__DOT__sb = 0U;
    vlSelf->top__DOT__cpu__DOT__control__DOT__stagecount = 0U;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->led_1 = 0U;
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vtop___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("cpuf.v", 505, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vtop___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->led_2 = (((IData)(vlSelf->top__DOT__cpu__DOT__pc_a)
                       ? 0xfU : 0U) & (((IData)(vlSelf->top__DOT__cpu__DOT__pc_a)
                                         ? 0xfU : 0U) 
                                       & (((IData)(vlSelf->top__DOT__cpu__DOT__pc_a)
                                            ? 0xfU : 0U) 
                                          & (((IData)(vlSelf->top__DOT__cpu__DOT__pc_a)
                                               ? (IData)(vlSelf->top__DOT__cpu__DOT__counter__DOT__pc)
                                               : 0U) 
                                             & ((IData)(vlSelf->top__DOT__cpu__DOT__pc_a)
                                                 ? 0xfU
                                                 : 0U)))));
    vlSelf->top__DOT__cpu__DOT__to_a = (((IData)(vlSelf->top__DOT__cpu__DOT__out_a)
                                          ? 0xffU : 0U) 
                                        & (((IData)(vlSelf->top__DOT__cpu__DOT__out_a)
                                             ? (IData)(vlSelf->top__DOT__cpu__DOT__ram__DOT__out_reg)
                                             : 0U) 
                                           & ((IData)(vlSelf->top__DOT__cpu__DOT__out_a)
                                               ? 0xffU
                                               : 0U)));
}

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->led_1 = VL_RAND_RESET_I(8);
    vlSelf->led_2 = VL_RAND_RESET_I(8);
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__pc_a = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__mar_a = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ir_a = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__jmp = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__in_b = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__out_b = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__in_a = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__out_a = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__acc_out = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ad = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__sb = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__to_a = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__cpu__DOT__to_acc = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__cpu__DOT__control__DOT__stagecount = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__cpu__DOT__counter__DOT__pc = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__cpu__DOT__mar__DOT__address = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__cpu__DOT__mar__DOT__offset = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(129, vlSelf->top__DOT__cpu__DOT__ram__DOT__mem);
    vlSelf->top__DOT__cpu__DOT__ram__DOT__index_ir = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__cpu__DOT__ram__DOT__index_reg = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__cpu__DOT__ram__DOT__out_reg = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__cpu__DOT__ram__DOT__out_ir = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__cpu__DOT__ir__DOT__instruction = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__cpu__DOT__ir__DOT__address = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__cpu__DOT__areg__DOT__areg = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__cpu__DOT__breg__DOT__areg = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__cpu__DOT__accumulator__DOT__areg = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__cpu__DOT__alu__DOT__out = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
