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

extern const VlUnpacked<SData/*13:0*/, 128> Vtop__ConstPool__TABLE_h16c13ed9_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_h475e91d9_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_h457cfaa9_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_hf50ae941_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_h54989714_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_h84979dde_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_h6777cfaa_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_hea5d3dbc_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_hf7130cbb_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_h143eadb9_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_hc050989b_0;
extern const VlUnpacked<CData/*2:0*/, 128> Vtop__ConstPool__TABLE_hb0b65a72_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_h8aca4226_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_h93c9a84f_0;

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ led_1__en0;
    led_1__en0 = 0;
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    if (vlSelf->top__DOT__cpu__DOT__out_b) {
        vlSelf->top__DOT__cpu__DOT__breg__DOT__areg 
            = (((IData)(vlSelf->top__DOT__cpu__DOT__out_b)
                 ? 0xffU : 0U) & (((IData)(vlSelf->top__DOT__cpu__DOT__out_b)
                                    ? (IData)(vlSelf->top__DOT__cpu__DOT__ram__DOT__out_reg)
                                    : 0U) & ((IData)(vlSelf->top__DOT__cpu__DOT__out_b)
                                              ? 0xffU
                                              : 0U)));
    }
    vlSelf->top__DOT__cpu__DOT__accumulator__DOT__areg 
        = vlSelf->top__DOT__cpu__DOT__alu__DOT__out;
    if (vlSelf->top__DOT__cpu__DOT__out_a) {
        vlSelf->top__DOT__cpu__DOT__areg__DOT__areg 
            = vlSelf->top__DOT__cpu__DOT__to_a;
    }
    __Vtableidx1 = (((IData)(vlSelf->top__DOT__cpu__DOT__control__DOT__stagecount) 
                     << 4U) | (IData)(vlSelf->top__DOT__cpu__DOT__ir__DOT__instruction));
    if ((1U & Vtop__ConstPool__TABLE_h16c13ed9_0[__Vtableidx1])) {
        vlSelf->top__DOT__cpu__DOT__pc_a = Vtop__ConstPool__TABLE_h475e91d9_0
            [__Vtableidx1];
    }
    if ((2U & Vtop__ConstPool__TABLE_h16c13ed9_0[__Vtableidx1])) {
        vlSelf->top__DOT__cpu__DOT__mar_a = Vtop__ConstPool__TABLE_h457cfaa9_0
            [__Vtableidx1];
    }
    if ((4U & Vtop__ConstPool__TABLE_h16c13ed9_0[__Vtableidx1])) {
        vlSelf->top__DOT__cpu__DOT__ir_a = Vtop__ConstPool__TABLE_hf50ae941_0
            [__Vtableidx1];
    }
    if ((8U & Vtop__ConstPool__TABLE_h16c13ed9_0[__Vtableidx1])) {
        vlSelf->top__DOT__cpu__DOT__in_a = Vtop__ConstPool__TABLE_h54989714_0
            [__Vtableidx1];
    }
    if ((0x10U & Vtop__ConstPool__TABLE_h16c13ed9_0
         [__Vtableidx1])) {
        vlSelf->top__DOT__cpu__DOT__out_a = Vtop__ConstPool__TABLE_h84979dde_0
            [__Vtableidx1];
    }
    if ((0x20U & Vtop__ConstPool__TABLE_h16c13ed9_0
         [__Vtableidx1])) {
        vlSelf->top__DOT__cpu__DOT__in_b = Vtop__ConstPool__TABLE_h54989714_0
            [__Vtableidx1];
    }
    if ((0x40U & Vtop__ConstPool__TABLE_h16c13ed9_0
         [__Vtableidx1])) {
        vlSelf->top__DOT__cpu__DOT__out_b = Vtop__ConstPool__TABLE_h6777cfaa_0
            [__Vtableidx1];
    }
    if ((0x80U & Vtop__ConstPool__TABLE_h16c13ed9_0
         [__Vtableidx1])) {
        vlSelf->top__DOT__cpu__DOT__ad = Vtop__ConstPool__TABLE_hea5d3dbc_0
            [__Vtableidx1];
    }
    if ((0x100U & Vtop__ConstPool__TABLE_h16c13ed9_0
         [__Vtableidx1])) {
        vlSelf->top__DOT__cpu__DOT__sb = Vtop__ConstPool__TABLE_hf7130cbb_0
            [__Vtableidx1];
    }
    if ((0x200U & Vtop__ConstPool__TABLE_h16c13ed9_0
         [__Vtableidx1])) {
        vlSelf->top__DOT__cpu__DOT__jmp = Vtop__ConstPool__TABLE_h143eadb9_0
            [__Vtableidx1];
    }
    if ((0x400U & Vtop__ConstPool__TABLE_h16c13ed9_0
         [__Vtableidx1])) {
        vlSelf->top__DOT__cpu__DOT__acc_out = Vtop__ConstPool__TABLE_hc050989b_0
            [__Vtableidx1];
    }
    if ((0x800U & Vtop__ConstPool__TABLE_h16c13ed9_0
         [__Vtableidx1])) {
        vlSelf->top__DOT__cpu__DOT__control__DOT__stagecount 
            = Vtop__ConstPool__TABLE_hb0b65a72_0[__Vtableidx1];
    }
    if ((0x1000U & Vtop__ConstPool__TABLE_h16c13ed9_0
         [__Vtableidx1])) {
        vlSelf->top__DOT__cpu__DOT__a_out = Vtop__ConstPool__TABLE_h8aca4226_0
            [__Vtableidx1];
    }
    if ((0x2000U & Vtop__ConstPool__TABLE_h16c13ed9_0
         [__Vtableidx1])) {
        vlSelf->top__DOT__cpu__DOT__b_out = Vtop__ConstPool__TABLE_h93c9a84f_0
            [__Vtableidx1];
    }
    led_1__en0 = (((IData)(vlSelf->top__DOT__cpu__DOT__a_out)
                    ? 0xffU : 0U) | ((IData)(vlSelf->top__DOT__cpu__DOT__b_out)
                                      ? 0xffU : 0U));
    vlSelf->led_1 = ((IData)(led_1__en0) & ((((IData)(vlSelf->top__DOT__cpu__DOT__a_out)
                                               ? 0xffU
                                               : 0U) 
                                             & (((IData)(vlSelf->top__DOT__cpu__DOT__a_out)
                                                  ? (IData)(vlSelf->top__DOT__cpu__DOT__areg__DOT__areg)
                                                  : 0U) 
                                                & ((IData)(vlSelf->top__DOT__cpu__DOT__a_out)
                                                    ? 0xffU
                                                    : 0U))) 
                                            | (((IData)(vlSelf->top__DOT__cpu__DOT__b_out)
                                                 ? 0xffU
                                                 : 0U) 
                                               & (((IData)(vlSelf->top__DOT__cpu__DOT__b_out)
                                                    ? (IData)(vlSelf->top__DOT__cpu__DOT__breg__DOT__areg)
                                                    : 0U) 
                                                  & ((IData)(vlSelf->top__DOT__cpu__DOT__b_out)
                                                      ? 0xffU
                                                      : 0U)))));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*3:0*/ __Vdly__top__DOT__cpu__DOT__counter__DOT__pc;
    __Vdly__top__DOT__cpu__DOT__counter__DOT__pc = 0;
    CData/*7:0*/ __Vdly__top__DOT__cpu__DOT__ram__DOT__out_ir;
    __Vdly__top__DOT__cpu__DOT__ram__DOT__out_ir = 0;
    // Body
    __Vdly__top__DOT__cpu__DOT__counter__DOT__pc = vlSelf->top__DOT__cpu__DOT__counter__DOT__pc;
    __Vdly__top__DOT__cpu__DOT__ram__DOT__out_ir = vlSelf->top__DOT__cpu__DOT__ram__DOT__out_ir;
    if (vlSelf->reset) {
        __Vdly__top__DOT__cpu__DOT__counter__DOT__pc = 0U;
        vlSelf->top__DOT__cpu__DOT__ir__DOT__instruction = 0U;
    } else {
        if (vlSelf->top__DOT__cpu__DOT__pc_a) {
            __Vdly__top__DOT__cpu__DOT__counter__DOT__pc 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->top__DOT__cpu__DOT__counter__DOT__pc)));
        } else if (vlSelf->top__DOT__cpu__DOT__jmp) {
            __Vdly__top__DOT__cpu__DOT__counter__DOT__pc 
                = (0xfU & ((IData)(vlSelf->top__DOT__cpu__DOT__ir__DOT__address) 
                           - (IData)(1U)));
        }
        if (vlSelf->top__DOT__cpu__DOT__ir_a) {
            vlSelf->top__DOT__cpu__DOT__ir__DOT__instruction 
                = (0xfU & ((IData)(vlSelf->top__DOT__cpu__DOT__ram__DOT__out_ir) 
                           >> 4U));
        }
    }
    if (vlSelf->top__DOT__cpu__DOT__pc_a) {
        vlSelf->top__DOT__cpu__DOT__bus_i__out__strong__out23 
            = vlSelf->top__DOT__cpu__DOT__counter__DOT__pc;
    }
    __Vdly__top__DOT__cpu__DOT__ram__DOT__out_ir = 
        ((0x80U >= (IData)(vlSelf->top__DOT__cpu__DOT__ram__DOT__index_ir))
          ? (0xffU & (((0U == (0x1fU & (IData)(vlSelf->top__DOT__cpu__DOT__ram__DOT__index_ir)))
                        ? 0U : (vlSelf->top__DOT__cpu__DOT__ram__DOT__mem[
                                (((IData)(7U) + (IData)(vlSelf->top__DOT__cpu__DOT__ram__DOT__index_ir)) 
                                 >> 5U)] << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & (IData)(vlSelf->top__DOT__cpu__DOT__ram__DOT__index_ir))))) 
                      | (vlSelf->top__DOT__cpu__DOT__ram__DOT__mem[
                         ((IData)(vlSelf->top__DOT__cpu__DOT__ram__DOT__index_ir) 
                          >> 5U)] >> (0x1fU & (IData)(vlSelf->top__DOT__cpu__DOT__ram__DOT__index_ir)))))
          : 0U);
    vlSelf->top__DOT__cpu__DOT__ram__DOT__out_reg = 
        ((0x80U >= (IData)(vlSelf->top__DOT__cpu__DOT__ram__DOT__index_reg))
          ? (0xffU & (((0U == (0x1fU & (IData)(vlSelf->top__DOT__cpu__DOT__ram__DOT__index_reg)))
                        ? 0U : (vlSelf->top__DOT__cpu__DOT__ram__DOT__mem[
                                (((IData)(7U) + (IData)(vlSelf->top__DOT__cpu__DOT__ram__DOT__index_reg)) 
                                 >> 5U)] << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & (IData)(vlSelf->top__DOT__cpu__DOT__ram__DOT__index_reg))))) 
                      | (vlSelf->top__DOT__cpu__DOT__ram__DOT__mem[
                         ((IData)(vlSelf->top__DOT__cpu__DOT__ram__DOT__index_reg) 
                          >> 5U)] >> (0x1fU & (IData)(vlSelf->top__DOT__cpu__DOT__ram__DOT__index_reg)))))
          : 0U);
    if (vlSelf->top__DOT__cpu__DOT__ad) {
        vlSelf->top__DOT__cpu__DOT__alu__DOT__out = 
            (0xffU & ((IData)(vlSelf->top__DOT__cpu__DOT__areg__DOT__areg) 
                      + (IData)(vlSelf->top__DOT__cpu__DOT__breg__DOT__areg)));
    }
    if (vlSelf->top__DOT__cpu__DOT__sb) {
        vlSelf->top__DOT__cpu__DOT__alu__DOT__out = 
            (0xffU & ((IData)(vlSelf->top__DOT__cpu__DOT__areg__DOT__areg) 
                      - (IData)(vlSelf->top__DOT__cpu__DOT__breg__DOT__areg)));
    }
    vlSelf->top__DOT__cpu__DOT__counter__DOT__pc = __Vdly__top__DOT__cpu__DOT__counter__DOT__pc;
    vlSelf->top__DOT__cpu__DOT__ram__DOT__index_reg 
        = (0x78U & ((IData)(vlSelf->top__DOT__cpu__DOT__ram__DOT__out_ir) 
                    << 3U));
    vlSelf->top__DOT__cpu__DOT__ram__DOT__index_ir 
        = (0xffU & ((IData)(vlSelf->top__DOT__cpu__DOT__mar__DOT__address) 
                    << 3U));
    vlSelf->top__DOT__cpu__DOT__ram__DOT__mem[0U] = 0x21458604U;
    vlSelf->top__DOT__cpu__DOT__ram__DOT__mem[1U] = 0x860c0e97U;
    vlSelf->top__DOT__cpu__DOT__ram__DOT__mem[2U] = 0xbf8fa686U;
    vlSelf->top__DOT__cpu__DOT__ram__DOT__mem[3U] = 
        (0xffU | (0xffffff00U & vlSelf->top__DOT__cpu__DOT__ram__DOT__mem[3U]));
    if (vlSelf->top__DOT__cpu__DOT__mar_a) {
        vlSelf->top__DOT__cpu__DOT__mar__DOT__address 
            = (0xfU & (IData)(vlSelf->led_2));
    } else if (vlSelf->top__DOT__cpu__DOT__jmp) {
        vlSelf->top__DOT__cpu__DOT__mar__DOT__address 
            = vlSelf->top__DOT__cpu__DOT__ir__DOT__address;
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->top__DOT__cpu__DOT__acc_out) {
            vlSelf->top__DOT__cpu__DOT__ram__DOT__mem[3U] 
                = ((0xffffffU & vlSelf->top__DOT__cpu__DOT__ram__DOT__mem[3U]) 
                   | ((IData)(vlSelf->top__DOT__cpu__DOT__accumulator__DOT__areg) 
                      << 0x18U));
        } else if (vlSelf->top__DOT__cpu__DOT__in_a) {
            vlSelf->top__DOT__cpu__DOT__ram__DOT__mem[3U] 
                = ((0xff00ffffU & vlSelf->top__DOT__cpu__DOT__ram__DOT__mem[3U]) 
                   | ((IData)(vlSelf->top__DOT__cpu__DOT__to_a) 
                      << 0x10U));
        }
        if (vlSelf->top__DOT__cpu__DOT__ir_a) {
            vlSelf->top__DOT__cpu__DOT__ir__DOT__address 
                = (0xfU & (IData)(vlSelf->top__DOT__cpu__DOT__ram__DOT__out_ir));
        }
    }
    vlSelf->led_2 = vlSelf->top__DOT__cpu__DOT__bus_i__out__strong__out23;
    vlSelf->top__DOT__cpu__DOT__ram__DOT__out_ir = __Vdly__top__DOT__cpu__DOT__ram__DOT__out_ir;
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__cpu__DOT__to_a = (((IData)(vlSelf->top__DOT__cpu__DOT__out_a)
                                          ? 0xffU : 0U) 
                                        & (((IData)(vlSelf->top__DOT__cpu__DOT__out_a)
                                             ? (IData)(vlSelf->top__DOT__cpu__DOT__ram__DOT__out_reg)
                                             : 0U) 
                                           & ((IData)(vlSelf->top__DOT__cpu__DOT__out_a)
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
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U))) {
        Vtop___024root___nba_comb__TOP__0(vlSelf);
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
    VlTriggerVec<2> __VpreTriggered;
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
                    VL_FATAL_MT("cpuf.v", 612, "", "Active region did not converge.");
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
                VL_FATAL_MT("cpuf.v", 612, "", "NBA region did not converge.");
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
