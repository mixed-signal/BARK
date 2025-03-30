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
    vlSelfRef.register_file__DOT__clk = vlSelfRef.clk;
    vlSelfRef.register_file__DOT__write_enable = vlSelfRef.write_enable;
    vlSelfRef.register_file__DOT__rs1 = vlSelfRef.rs1;
    vlSelfRef.register_file__DOT__rs2 = vlSelfRef.rs2;
    vlSelfRef.register_file__DOT__rd = vlSelfRef.rd;
    vlSelfRef.register_file__DOT__reg_data_in = vlSelfRef.reg_data_in;
    vlSelfRef.register_file__DOT__reset = vlSelfRef.reset;
    vlSelfRef.reg_data_out_1 = vlSelfRef.register_file__DOT__registers
        [vlSelfRef.rs1];
    vlSelfRef.reg_data_out_2 = vlSelfRef.register_file__DOT__registers
        [vlSelfRef.rs2];
    vlSelfRef.register_file__DOT__reg_data_out_1 = 
        vlSelfRef.register_file__DOT__registers[vlSelfRef.rs1];
    vlSelfRef.register_file__DOT__reg_data_out_2 = 
        vlSelfRef.register_file__DOT__registers[vlSelfRef.rs2];
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
    IData/*31:0*/ __VdlyVal__register_file__DOT__registers__v0;
    __VdlyVal__register_file__DOT__registers__v0 = 0;
    CData/*4:0*/ __VdlyDim0__register_file__DOT__registers__v0;
    __VdlyDim0__register_file__DOT__registers__v0 = 0;
    CData/*0:0*/ __VdlySet__register_file__DOT__registers__v0;
    __VdlySet__register_file__DOT__registers__v0 = 0;
    CData/*0:0*/ __VdlySet__register_file__DOT__registers__v1;
    __VdlySet__register_file__DOT__registers__v1 = 0;
    // Body
    __VdlySet__register_file__DOT__registers__v0 = 0U;
    __VdlySet__register_file__DOT__registers__v1 = 0U;
    if ((1U & (~ (IData)(vlSelfRef.reset)))) {
        vlSelfRef.register_file__DOT__unnamedblk1__DOT__i = 1U;
        vlSelfRef.register_file__DOT__unnamedblk1__DOT__i = 2U;
        vlSelfRef.register_file__DOT__unnamedblk1__DOT__i = 3U;
        vlSelfRef.register_file__DOT__unnamedblk1__DOT__i = 4U;
        vlSelfRef.register_file__DOT__unnamedblk1__DOT__i = 5U;
        vlSelfRef.register_file__DOT__unnamedblk1__DOT__i = 6U;
        vlSelfRef.register_file__DOT__unnamedblk1__DOT__i = 7U;
        vlSelfRef.register_file__DOT__unnamedblk1__DOT__i = 8U;
        vlSelfRef.register_file__DOT__unnamedblk1__DOT__i = 9U;
        vlSelfRef.register_file__DOT__unnamedblk1__DOT__i = 0xaU;
        vlSelfRef.register_file__DOT__unnamedblk1__DOT__i = 0xbU;
        vlSelfRef.register_file__DOT__unnamedblk1__DOT__i = 0xcU;
        vlSelfRef.register_file__DOT__unnamedblk1__DOT__i = 0xdU;
        vlSelfRef.register_file__DOT__unnamedblk1__DOT__i = 0xeU;
        vlSelfRef.register_file__DOT__unnamedblk1__DOT__i = 0xfU;
        vlSelfRef.register_file__DOT__unnamedblk1__DOT__i = 0x10U;
        vlSelfRef.register_file__DOT__unnamedblk1__DOT__i = 0x11U;
        vlSelfRef.register_file__DOT__unnamedblk1__DOT__i = 0x12U;
        vlSelfRef.register_file__DOT__unnamedblk1__DOT__i = 0x13U;
        vlSelfRef.register_file__DOT__unnamedblk1__DOT__i = 0x14U;
        vlSelfRef.register_file__DOT__unnamedblk1__DOT__i = 0x15U;
        vlSelfRef.register_file__DOT__unnamedblk1__DOT__i = 0x16U;
        vlSelfRef.register_file__DOT__unnamedblk1__DOT__i = 0x17U;
        vlSelfRef.register_file__DOT__unnamedblk1__DOT__i = 0x18U;
        vlSelfRef.register_file__DOT__unnamedblk1__DOT__i = 0x19U;
        vlSelfRef.register_file__DOT__unnamedblk1__DOT__i = 0x1aU;
        vlSelfRef.register_file__DOT__unnamedblk1__DOT__i = 0x1bU;
        vlSelfRef.register_file__DOT__unnamedblk1__DOT__i = 0x1cU;
        vlSelfRef.register_file__DOT__unnamedblk1__DOT__i = 0x1dU;
        vlSelfRef.register_file__DOT__unnamedblk1__DOT__i = 0x1eU;
        vlSelfRef.register_file__DOT__unnamedblk1__DOT__i = 0x1fU;
        vlSelfRef.register_file__DOT__unnamedblk1__DOT__i = 0x20U;
    }
    if (vlSelfRef.reset) {
        if (vlSelfRef.write_enable) {
            __VdlyVal__register_file__DOT__registers__v0 
                = vlSelfRef.reg_data_in;
            __VdlyDim0__register_file__DOT__registers__v0 
                = vlSelfRef.rd;
            __VdlySet__register_file__DOT__registers__v0 = 1U;
        }
    } else {
        __VdlySet__register_file__DOT__registers__v1 = 1U;
    }
    if (__VdlySet__register_file__DOT__registers__v0) {
        vlSelfRef.register_file__DOT__registers[__VdlyDim0__register_file__DOT__registers__v0] 
            = __VdlyVal__register_file__DOT__registers__v0;
    }
    if (__VdlySet__register_file__DOT__registers__v1) {
        vlSelfRef.register_file__DOT__registers[0U] = 0U;
        vlSelfRef.register_file__DOT__registers[1U] = 0U;
        vlSelfRef.register_file__DOT__registers[2U] = 0U;
        vlSelfRef.register_file__DOT__registers[3U] = 0U;
        vlSelfRef.register_file__DOT__registers[4U] = 0U;
        vlSelfRef.register_file__DOT__registers[5U] = 0U;
        vlSelfRef.register_file__DOT__registers[6U] = 0U;
        vlSelfRef.register_file__DOT__registers[7U] = 0U;
        vlSelfRef.register_file__DOT__registers[8U] = 0U;
        vlSelfRef.register_file__DOT__registers[9U] = 0U;
        vlSelfRef.register_file__DOT__registers[0xaU] = 0U;
        vlSelfRef.register_file__DOT__registers[0xbU] = 0U;
        vlSelfRef.register_file__DOT__registers[0xcU] = 0U;
        vlSelfRef.register_file__DOT__registers[0xdU] = 0U;
        vlSelfRef.register_file__DOT__registers[0xeU] = 0U;
        vlSelfRef.register_file__DOT__registers[0xfU] = 0U;
        vlSelfRef.register_file__DOT__registers[0x10U] = 0U;
        vlSelfRef.register_file__DOT__registers[0x11U] = 0U;
        vlSelfRef.register_file__DOT__registers[0x12U] = 0U;
        vlSelfRef.register_file__DOT__registers[0x13U] = 0U;
        vlSelfRef.register_file__DOT__registers[0x14U] = 0U;
        vlSelfRef.register_file__DOT__registers[0x15U] = 0U;
        vlSelfRef.register_file__DOT__registers[0x16U] = 0U;
        vlSelfRef.register_file__DOT__registers[0x17U] = 0U;
        vlSelfRef.register_file__DOT__registers[0x18U] = 0U;
        vlSelfRef.register_file__DOT__registers[0x19U] = 0U;
        vlSelfRef.register_file__DOT__registers[0x1aU] = 0U;
        vlSelfRef.register_file__DOT__registers[0x1bU] = 0U;
        vlSelfRef.register_file__DOT__registers[0x1cU] = 0U;
        vlSelfRef.register_file__DOT__registers[0x1dU] = 0U;
        vlSelfRef.register_file__DOT__registers[0x1eU] = 0U;
        vlSelfRef.register_file__DOT__registers[0x1fU] = 0U;
    }
    vlSelfRef.reg_data_out_1 = vlSelfRef.register_file__DOT__registers
        [vlSelfRef.rs1];
    vlSelfRef.reg_data_out_2 = vlSelfRef.register_file__DOT__registers
        [vlSelfRef.rs2];
    vlSelfRef.register_file__DOT__reg_data_out_1 = 
        vlSelfRef.register_file__DOT__registers[vlSelfRef.rs1];
    vlSelfRef.register_file__DOT__reg_data_out_2 = 
        vlSelfRef.register_file__DOT__registers[vlSelfRef.rs2];
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
            VL_FATAL_MT("/foss/designs/tb/register_file/../../design/register_file.sv", 1, "", "Input combinational region did not converge.");
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
            VL_FATAL_MT("/foss/designs/tb/register_file/../../design/register_file.sv", 1, "", "NBA region did not converge.");
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
                VL_FATAL_MT("/foss/designs/tb/register_file/../../design/register_file.sv", 1, "", "Active region did not converge.");
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
    if (VL_UNLIKELY((vlSelfRef.rs1 & 0xe0U))) {
        Verilated::overWidthError("rs1");}
    if (VL_UNLIKELY((vlSelfRef.rs2 & 0xe0U))) {
        Verilated::overWidthError("rs2");}
    if (VL_UNLIKELY((vlSelfRef.rd & 0xe0U))) {
        Verilated::overWidthError("rd");}
    if (VL_UNLIKELY((vlSelfRef.reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
