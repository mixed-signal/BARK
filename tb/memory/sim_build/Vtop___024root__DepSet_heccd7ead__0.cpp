// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.memory__DOT__clk = vlSelfRef.clk;
    vlSelfRef.memory__DOT__write_enable = vlSelfRef.write_enable;
    vlSelfRef.memory__DOT__address = vlSelfRef.address;
    vlSelfRef.memory__DOT__data_in = vlSelfRef.data_in;
    vlSelfRef.memory__DOT__reset = vlSelfRef.reset;
    vlSelfRef.data_out = vlSelfRef.memory__DOT__array_reg
        [vlSelfRef.address];
    vlSelfRef.memory__DOT__data_out = vlSelfRef.memory__DOT__array_reg
        [vlSelfRef.address];
}

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtop___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vtop___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf);

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VdlyVal__memory__DOT__array_reg__v0;
    __VdlyVal__memory__DOT__array_reg__v0 = 0;
    CData/*5:0*/ __VdlyDim0__memory__DOT__array_reg__v0;
    __VdlyDim0__memory__DOT__array_reg__v0 = 0;
    CData/*0:0*/ __VdlySet__memory__DOT__array_reg__v0;
    __VdlySet__memory__DOT__array_reg__v0 = 0;
    CData/*0:0*/ __VdlySet__memory__DOT__array_reg__v1;
    __VdlySet__memory__DOT__array_reg__v1 = 0;
    // Body
    __VdlySet__memory__DOT__array_reg__v0 = 0U;
    __VdlySet__memory__DOT__array_reg__v1 = 0U;
    if ((1U & (~ (IData)(vlSelfRef.reset)))) {
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 1U;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 2U;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 3U;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 4U;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 5U;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 6U;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 7U;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 8U;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 9U;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 0xaU;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 0xbU;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 0xcU;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 0xdU;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 0xeU;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 0xfU;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 0x10U;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 0x11U;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 0x12U;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 0x13U;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 0x14U;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 0x15U;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 0x16U;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 0x17U;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 0x18U;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 0x19U;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 0x1aU;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 0x1bU;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 0x1cU;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 0x1dU;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 0x1eU;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 0x1fU;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 0x20U;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 0x21U;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 0x22U;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 0x23U;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 0x24U;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 0x25U;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 0x26U;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 0x27U;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 0x28U;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 0x29U;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 0x2aU;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 0x2bU;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 0x2cU;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 0x2dU;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 0x2eU;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 0x2fU;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 0x30U;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 0x31U;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 0x32U;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 0x33U;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 0x34U;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 0x35U;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 0x36U;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 0x37U;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 0x38U;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 0x39U;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 0x3aU;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 0x3bU;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 0x3cU;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 0x3dU;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 0x3eU;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 0x3fU;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 0x40U;
    }
    if (vlSelfRef.reset) {
        if (vlSelfRef.write_enable) {
            __VdlyVal__memory__DOT__array_reg__v0 = vlSelfRef.data_in;
            __VdlyDim0__memory__DOT__array_reg__v0 
                = vlSelfRef.address;
            __VdlySet__memory__DOT__array_reg__v0 = 1U;
        }
    } else {
        __VdlySet__memory__DOT__array_reg__v1 = 1U;
    }
    if (__VdlySet__memory__DOT__array_reg__v0) {
        vlSelfRef.memory__DOT__array_reg[__VdlyDim0__memory__DOT__array_reg__v0] 
            = __VdlyVal__memory__DOT__array_reg__v0;
    }
    if (__VdlySet__memory__DOT__array_reg__v1) {
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x3fU)) {
            vlSelfRef.memory__DOT__array_reg[__Vilp1] = 0U;
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
    }
    vlSelfRef.data_out = vlSelfRef.memory__DOT__array_reg
        [vlSelfRef.address];
    vlSelfRef.memory__DOT__data_out = vlSelfRef.memory__DOT__array_reg
        [vlSelfRef.address];
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtop___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtop___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("/foss/designs/tb/memory/../../design/memory.sv", 3, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vtop___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/foss/designs/tb/memory/../../design/memory.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/foss/designs/tb/memory/../../design/memory.sv", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtop___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtop___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelfRef.write_enable & 0xfeU))) {
        Verilated::overWidthError("write_enable");}
    if (VL_UNLIKELY((vlSelfRef.address & 0xc0U))) {
        Verilated::overWidthError("address");}
    if (VL_UNLIKELY((vlSelfRef.reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
