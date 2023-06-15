// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*3:0*/ __Vdly__top__DOT__counter__DOT__pc;
    __Vdly__top__DOT__counter__DOT__pc = 0;
    CData/*3:0*/ __Vdly__top__DOT__mar__DOT__address;
    __Vdly__top__DOT__mar__DOT__address = 0;
    // Body
    __Vdly__top__DOT__counter__DOT__pc = vlSelf->top__DOT__counter__DOT__pc;
    __Vdly__top__DOT__mar__DOT__address = vlSelf->top__DOT__mar__DOT__address;
    vlSelf->top__DOT__control__DOT__stagecount = (7U 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__control__DOT__stagecount)));
    if ((6U == (IData)(vlSelf->top__DOT__control__DOT__stagecount))) {
        vlSelf->top__DOT__pc_a = 0U;
        vlSelf->top__DOT__mar_a = 0U;
        vlSelf->top__DOT__ir_a = 0U;
        vlSelf->top__DOT__in_a = 0U;
        vlSelf->top__DOT__out_a = 0U;
        vlSelf->top__DOT__control__DOT__stagecount = 0U;
    }
    if ((1U == (IData)(vlSelf->top__DOT__control__DOT__stagecount))) {
        vlSelf->top__DOT__pc_a = 1U;
        vlSelf->top__DOT__mar_a = 1U;
        vlSelf->top__DOT__ir_a = 0U;
        vlSelf->top__DOT__in_a = 0U;
        vlSelf->top__DOT__out_a = 0U;
    }
    if ((2U == (IData)(vlSelf->top__DOT__control__DOT__stagecount))) {
        vlSelf->top__DOT__pc_a = 0U;
        vlSelf->top__DOT__mar_a = 1U;
        vlSelf->top__DOT__ir_a = 0U;
        vlSelf->top__DOT__in_a = 0U;
        vlSelf->top__DOT__out_a = 0U;
    }
    if ((3U == (IData)(vlSelf->top__DOT__control__DOT__stagecount))) {
        vlSelf->top__DOT__pc_a = 0U;
        vlSelf->top__DOT__mar_a = 0U;
        vlSelf->top__DOT__ir_a = 1U;
        vlSelf->top__DOT__in_a = 0U;
        vlSelf->top__DOT__out_a = 0U;
    }
    if ((8U == (IData)(vlSelf->top__DOT__ir_i))) {
        if ((4U == (IData)(vlSelf->top__DOT__control__DOT__stagecount))) {
            vlSelf->top__DOT__pc_a = 0U;
            vlSelf->top__DOT__mar_a = 0U;
            vlSelf->top__DOT__ir_a = 0U;
            vlSelf->top__DOT__in_a = 0U;
            vlSelf->top__DOT__out_a = 1U;
        }
        if ((5U == (IData)(vlSelf->top__DOT__control__DOT__stagecount))) {
            vlSelf->top__DOT__pc_a = 0U;
            vlSelf->top__DOT__mar_a = 0U;
            vlSelf->top__DOT__ir_a = 0U;
            vlSelf->top__DOT__in_a = 0U;
            vlSelf->top__DOT__out_a = 0U;
        }
    }
    if (vlSelf->top__DOT__out_a) {
        vlSelf->top__DOT__areg__DOT__areg = vlSelf->top__DOT__to_a;
    }
    if (vlSelf->reset) {
        __Vdly__top__DOT__counter__DOT__pc = 0U;
        vlSelf->top__DOT__counter__DOT__pc = __Vdly__top__DOT__counter__DOT__pc;
        __Vdly__top__DOT__mar__DOT__address = 0U;
    } else {
        if (vlSelf->top__DOT__pc_a) {
            __Vdly__top__DOT__counter__DOT__pc = (0xfU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__counter__DOT__pc)));
        }
        vlSelf->top__DOT__counter__DOT__pc = __Vdly__top__DOT__counter__DOT__pc;
        __Vdly__top__DOT__mar__DOT__address = (0xfU 
                                               & ((IData)(vlSelf->top__DOT__mar_a)
                                                   ? (IData)(vlSelf->bus_i)
                                                   : (IData)(vlSelf->top__DOT__ir__DOT__address)));
    }
    vlSelf->bus_i = (((IData)(vlSelf->top__DOT__pc_a)
                       ? 0xfU : 0U) & (((IData)(vlSelf->top__DOT__pc_a)
                                         ? 0xfU : 0U) 
                                       & (((IData)(vlSelf->top__DOT__pc_a)
                                            ? (IData)(vlSelf->top__DOT__counter__DOT__pc)
                                            : 0U) & 
                                          ((IData)(vlSelf->top__DOT__pc_a)
                                            ? 0xfU : 0U))));
    vlSelf->top__DOT__ir__DOT__address = (0xfU & (IData)(vlSelf->top__DOT__ram__DOT__out));
    if (vlSelf->reset) {
        vlSelf->top__DOT__ir__DOT__instruction = 0U;
    } else if (vlSelf->top__DOT__ir_a) {
        vlSelf->top__DOT__ir__DOT__instruction = (0xfU 
                                                  & ((IData)(vlSelf->top__DOT__ram__DOT__out) 
                                                     >> 4U));
    }
    vlSelf->top__DOT__ir_i = ((((IData)(vlSelf->top__DOT__ir_a)
                                 ? (IData)(vlSelf->top__DOT__ir__DOT__instruction)
                                 : 0U) & ((IData)(vlSelf->top__DOT__ir_a)
                                           ? 0xfU : 0U)) 
                              & ((IData)(vlSelf->top__DOT__ir_a)
                                  ? 0xfU : 0U));
    if (vlSelf->reset) {
        vlSelf->top__DOT__ram__DOT__out = 0U;
    }
    vlSelf->top__DOT__ram__DOT__out = ((0x80U >= (IData)(vlSelf->top__DOT__ram__DOT__index))
                                        ? (0xffU & 
                                           (((0U == 
                                              (0x1fU 
                                               & (IData)(vlSelf->top__DOT__ram__DOT__index)))
                                              ? 0U : 
                                             (vlSelf->top__DOT__ram__DOT__mem[
                                              (((IData)(7U) 
                                                + (IData)(vlSelf->top__DOT__ram__DOT__index)) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & (IData)(vlSelf->top__DOT__ram__DOT__index))))) 
                                            | (vlSelf->top__DOT__ram__DOT__mem[
                                               ((IData)(vlSelf->top__DOT__ram__DOT__index) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & (IData)(vlSelf->top__DOT__ram__DOT__index)))))
                                        : 0U);
    if (vlSelf->reset) {
        vlSelf->top__DOT__ram__DOT__index = 0U;
    }
    vlSelf->top__DOT__ram__DOT__index = (0xffU & ((IData)(vlSelf->top__DOT__mar__DOT__address) 
                                                  << 3U));
    vlSelf->top__DOT__ram__DOT__mem[0U] = 0x26f8183U;
    vlSelf->top__DOT__ram__DOT__mem[1U] = (0x901U | 
                                           (0xffff0000U 
                                            & vlSelf->top__DOT__ram__DOT__mem[1U]));
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->top__DOT__in_a) {
            vlSelf->top__DOT__ram__DOT__mem[3U] = (
                                                   (0xff00ffffU 
                                                    & vlSelf->top__DOT__ram__DOT__mem[3U]) 
                                                   | ((IData)(vlSelf->top__DOT__to_a) 
                                                      << 0x10U));
        }
    }
    vlSelf->top__DOT__mar__DOT__address = __Vdly__top__DOT__mar__DOT__address;
    vlSelf->top__DOT__to_a = (((IData)(vlSelf->top__DOT__out_a)
                                ? 0xffU : 0U) & (((IData)(vlSelf->top__DOT__out_a)
                                                   ? (IData)(vlSelf->top__DOT__ram__DOT__out)
                                                   : 0U) 
                                                 & ((IData)(vlSelf->top__DOT__out_a)
                                                     ? 0xffU
                                                     : 0U)));
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vtop___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtop___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("cpuf.v", 215, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vtop___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("cpuf.v", 215, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtop___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
