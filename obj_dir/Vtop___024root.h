// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"

class Vtop__Syms;

class Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_OUT8(bus_i,7,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ top__DOT__pc_a;
    CData/*0:0*/ top__DOT__mar_a;
    CData/*0:0*/ top__DOT__ir_a;
    CData/*0:0*/ top__DOT__in_a;
    CData/*0:0*/ top__DOT__out_a;
    CData/*3:0*/ top__DOT__ir_i;
    CData/*7:0*/ top__DOT__to_a;
    CData/*2:0*/ top__DOT__control__DOT__stagecount;
    CData/*3:0*/ top__DOT__counter__DOT__pc;
    CData/*3:0*/ top__DOT__mar__DOT__address;
    CData/*7:0*/ top__DOT__ram__DOT__index;
    CData/*7:0*/ top__DOT__ram__DOT__out;
    CData/*3:0*/ top__DOT__ir__DOT__instruction;
    CData/*3:0*/ top__DOT__ir__DOT__address;
    CData/*7:0*/ top__DOT__areg__DOT__areg;
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*0:0*/ __VactContinue;
    VlWide<5>/*128:0*/ top__DOT__ram__DOT__mem;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
