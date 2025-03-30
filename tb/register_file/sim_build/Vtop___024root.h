// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(write_enable,0,0);
    VL_IN8(rs1,4,0);
    VL_IN8(rs2,4,0);
    VL_IN8(rd,4,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ register_file__DOT__clk;
    CData/*0:0*/ register_file__DOT__write_enable;
    CData/*4:0*/ register_file__DOT__rs1;
    CData/*4:0*/ register_file__DOT__rs2;
    CData/*4:0*/ register_file__DOT__rd;
    CData/*0:0*/ register_file__DOT__reset;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactContinue;
    VL_IN(reg_data_in,31,0);
    VL_OUT(reg_data_out_1,31,0);
    VL_OUT(reg_data_out_2,31,0);
    IData/*31:0*/ register_file__DOT__reg_data_in;
    IData/*31:0*/ register_file__DOT__reg_data_out_1;
    IData/*31:0*/ register_file__DOT__reg_data_out_2;
    IData/*31:0*/ register_file__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 32> register_file__DOT__registers;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr IData/*31:0*/ register_file__DOT__DATA_WIDTH = 0x00000020U;
    static constexpr IData/*31:0*/ register_file__DOT__ADDR_WIDTH = 5U;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
