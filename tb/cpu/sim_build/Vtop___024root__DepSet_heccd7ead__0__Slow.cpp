// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vtop___024root___eval_static__TOP(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static__TOP\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cpu__DOT__pc = 0U;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__cpu__DOT__pc_clk__0 
        = vlSelfRef.cpu__DOT__pc_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_READMEM_N(true, 32, 64, 0, std::string{"rom.txt"}
                 ,  &(vlSelfRef.cpu__DOT__rom__DOT__array_reg)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 32, 64, 0, std::string{"data.txt"}
                 ,  &(vlSelfRef.cpu__DOT__flash__DOT__array_reg)
                 , 0, ~0ULL);
    vlSelfRef.cpu__DOT__mux_1__DOT__i1 = 4U;
    vlSelfRef.cpu__DOT__rom__DOT__write_enable = 0U;
    vlSelfRef.cpu__DOT__rom__DOT__data_in = 0U;
    vlSelfRef.cpu__DOT__rom__DOT__reset = 1U;
    vlSelfRef.cpu__DOT__reg_data_mux__DOT__i2 = 0U;
    vlSelfRef.cpu__DOT__flash__DOT__reset = 1U;
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/foss/designs/tb/cpu/../../design/cpu.sv", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtop___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
    }
}

extern const VlUnpacked<CData/*5:0*/, 128> Vtop__ConstPool__TABLE_h28e2e1f9_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_h48115a8a_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_hb0896d1c_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_hb738164d_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_h58a94684_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vtop__ConstPool__TABLE_h38d0ce65_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vtop__ConstPool__TABLE_h97587248_0;
extern const VlUnpacked<CData/*1:0*/, 64> Vtop__ConstPool__TABLE_he3855978_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtop__ConstPool__TABLE_hd950d6d8_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtop__ConstPool__TABLE_hc62f7ad7_0;

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*5:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelfRef.cpu__DOT__rom__DOT__address = (0x3fU 
                                             & (vlSelfRef.cpu__DOT__pc 
                                                >> 0U));
    vlSelfRef.cpu__DOT__register_file__DOT__write_enable 
        = vlSelfRef.cpu__DOT__reg_clk;
    vlSelfRef.cpu__DOT__alu_mux_1__DOT__i1 = vlSelfRef.cpu__DOT__pc;
    vlSelfRef.cpu__DOT__flash__DOT__data_in = vlSelfRef.cpu__DOT__data_write;
    vlSelfRef.cpu__DOT__pc_clk = vlSelfRef.cpu__DOT__controller__DOT__pc_clk;
    vlSelfRef.cpu__DOT__rom__DOT__data_out = vlSelfRef.cpu__DOT__rom__DOT__array_reg
        [(0x3fU & vlSelfRef.cpu__DOT__pc)];
    vlSelfRef.cpu__DOT__mem_clk = vlSelfRef.cpu__DOT__controller__DOT__mem_clk;
    vlSelfRef.cpu__DOT__instruction = vlSelfRef.cpu__DOT__rom__DOT__array_reg
        [(0x3fU & vlSelfRef.cpu__DOT__pc)];
    vlSelfRef.cpu__DOT__reset = vlSelfRef.reset;
    vlSelfRef.cpu__DOT__rd = (0x1fU & (vlSelfRef.cpu__DOT__rom__DOT__array_reg
                                       [(0x3fU & vlSelfRef.cpu__DOT__pc)] 
                                       >> 7U));
    vlSelfRef.cpu__DOT__clk = vlSelfRef.clk;
    vlSelfRef.cpu__DOT__funct7 = (vlSelfRef.cpu__DOT__rom__DOT__array_reg
                                  [(0x3fU & vlSelfRef.cpu__DOT__pc)] 
                                  >> 0x19U);
    vlSelfRef.cpu__DOT__rs1 = (0x1fU & (vlSelfRef.cpu__DOT__rom__DOT__array_reg
                                        [(0x3fU & vlSelfRef.cpu__DOT__pc)] 
                                        >> 0xfU));
    vlSelfRef.cpu__DOT__rs2 = (0x1fU & (vlSelfRef.cpu__DOT__rom__DOT__array_reg
                                        [(0x3fU & vlSelfRef.cpu__DOT__pc)] 
                                        >> 0x14U));
    vlSelfRef.cpu__DOT__funct3 = (7U & (vlSelfRef.cpu__DOT__rom__DOT__array_reg
                                        [(0x3fU & vlSelfRef.cpu__DOT__pc)] 
                                        >> 0xcU));
    vlSelfRef.cpu__DOT__immi_source = (vlSelfRef.cpu__DOT__rom__DOT__array_reg
                                       [(0x3fU & vlSelfRef.cpu__DOT__pc)] 
                                       >> 7U);
    vlSelfRef.cpu__DOT__opcode = (0x7fU & vlSelfRef.cpu__DOT__rom__DOT__array_reg
                                  [(0x3fU & vlSelfRef.cpu__DOT__pc)]);
    vlSelfRef.cpu__DOT__flash__DOT__write_enable = vlSelfRef.cpu__DOT__mem_clk;
    vlSelfRef.cpu__DOT__instruction_decoder__DOT__instruction 
        = vlSelfRef.cpu__DOT__instruction;
    vlSelfRef.cpu__DOT__controller__DOT__reset = vlSelfRef.cpu__DOT__reset;
    vlSelfRef.cpu__DOT__register_file__DOT__reset = vlSelfRef.cpu__DOT__reset;
    vlSelfRef.cpu__DOT__register_file__DOT__rd = vlSelfRef.cpu__DOT__rd;
    vlSelfRef.cpu__DOT__instruction_decoder__DOT__rd 
        = vlSelfRef.cpu__DOT__rd;
    vlSelfRef.cpu__DOT__rom__DOT__clk = vlSelfRef.cpu__DOT__clk;
    vlSelfRef.cpu__DOT__controller__DOT__clock = vlSelfRef.cpu__DOT__clk;
    vlSelfRef.cpu__DOT__register_file__DOT__clk = vlSelfRef.cpu__DOT__clk;
    vlSelfRef.cpu__DOT__flash__DOT__clk = vlSelfRef.cpu__DOT__clk;
    vlSelfRef.cpu__DOT__controller__DOT__funct7 = vlSelfRef.cpu__DOT__funct7;
    vlSelfRef.cpu__DOT__instruction_decoder__DOT__funct7 
        = vlSelfRef.cpu__DOT__funct7;
    vlSelfRef.cpu__DOT__register_file__DOT__rs1 = vlSelfRef.cpu__DOT__rs1;
    vlSelfRef.cpu__DOT__instruction_decoder__DOT__rs1 
        = vlSelfRef.cpu__DOT__rs1;
    vlSelfRef.cpu__DOT__register_file__DOT__reg_data_out_1 
        = vlSelfRef.cpu__DOT__register_file__DOT__registers
        [vlSelfRef.cpu__DOT__rs1];
    vlSelfRef.cpu__DOT__reg_data_out_1 = vlSelfRef.cpu__DOT__register_file__DOT__registers
        [vlSelfRef.cpu__DOT__rs1];
    vlSelfRef.cpu__DOT__register_file__DOT__rs2 = vlSelfRef.cpu__DOT__rs2;
    vlSelfRef.cpu__DOT__instruction_decoder__DOT__rs2 
        = vlSelfRef.cpu__DOT__rs2;
    vlSelfRef.cpu__DOT__register_file__DOT__reg_data_out_2 
        = vlSelfRef.cpu__DOT__register_file__DOT__registers
        [vlSelfRef.cpu__DOT__rs2];
    vlSelfRef.cpu__DOT__reg_data_out_2 = vlSelfRef.cpu__DOT__register_file__DOT__registers
        [vlSelfRef.cpu__DOT__rs2];
    vlSelfRef.cpu__DOT__controller__DOT__funct3 = vlSelfRef.cpu__DOT__funct3;
    vlSelfRef.cpu__DOT__instruction_decoder__DOT__funct3 
        = vlSelfRef.cpu__DOT__funct3;
    vlSelfRef.cpu__DOT__sign_extender__DOT__immi_source 
        = vlSelfRef.cpu__DOT__immi_source;
    vlSelfRef.cpu__DOT__instruction_decoder__DOT__immi_source 
        = vlSelfRef.cpu__DOT__immi_source;
    vlSelfRef.cpu__DOT__controller__DOT__opcode = vlSelfRef.cpu__DOT__opcode;
    vlSelfRef.cpu__DOT__sign_extender__DOT__opcode 
        = vlSelfRef.cpu__DOT__opcode;
    vlSelfRef.cpu__DOT__instruction_decoder__DOT__opcode 
        = vlSelfRef.cpu__DOT__opcode;
    if ((3U == (IData)(vlSelfRef.cpu__DOT__opcode))) {
        vlSelfRef.cpu__DOT__sign_extender__DOT__imm_x 
            = (((- (IData)((1U & (vlSelfRef.cpu__DOT__immi_source 
                                  >> 0x18U)))) << 0xcU) 
               | (0xfffU & (vlSelfRef.cpu__DOT__immi_source 
                            >> 0xdU)));
    } else if (((0x37U == (IData)(vlSelfRef.cpu__DOT__opcode)) 
                || (0x17U == (IData)(vlSelfRef.cpu__DOT__opcode)))) {
        vlSelfRef.cpu__DOT__sign_extender__DOT__imm_x 
            = (0xfffff000U & (vlSelfRef.cpu__DOT__immi_source 
                              << 7U));
    } else if ((0x63U == (IData)(vlSelfRef.cpu__DOT__opcode))) {
        vlSelfRef.cpu__DOT__sign_extender__DOT__imm_x 
            = (((- (IData)((1U & (vlSelfRef.cpu__DOT__immi_source 
                                  >> 0x18U)))) << 0xcU) 
               | ((0x800U & (vlSelfRef.cpu__DOT__immi_source 
                             << 0xbU)) | ((0x7e0U & 
                                           (vlSelfRef.cpu__DOT__immi_source 
                                            >> 0xdU)) 
                                          | (0x1eU 
                                             & vlSelfRef.cpu__DOT__immi_source))));
    }
    __Vtableidx1 = vlSelfRef.cpu__DOT__opcode;
    if ((1U & Vtop__ConstPool__TABLE_h28e2e1f9_0[__Vtableidx1])) {
        vlSelfRef.cpu__DOT__controller__DOT__pc_alu_sel 
            = Vtop__ConstPool__TABLE_h48115a8a_0[__Vtableidx1];
    }
    if ((2U & Vtop__ConstPool__TABLE_h28e2e1f9_0[__Vtableidx1])) {
        vlSelfRef.cpu__DOT__controller__DOT__pc_next_sel 
            = Vtop__ConstPool__TABLE_hb0896d1c_0[__Vtableidx1];
    }
    if ((4U & Vtop__ConstPool__TABLE_h28e2e1f9_0[__Vtableidx1])) {
        vlSelfRef.cpu__DOT__controller__DOT__alu_a_sel 
            = Vtop__ConstPool__TABLE_hb738164d_0[__Vtableidx1];
    }
    if ((8U & Vtop__ConstPool__TABLE_h28e2e1f9_0[__Vtableidx1])) {
        vlSelfRef.cpu__DOT__controller__DOT__alu_b_sel 
            = Vtop__ConstPool__TABLE_h58a94684_0[__Vtableidx1];
    }
    if ((0x10U & Vtop__ConstPool__TABLE_h28e2e1f9_0
         [__Vtableidx1])) {
        vlSelfRef.cpu__DOT__controller__DOT__reg_data_sel 
            = Vtop__ConstPool__TABLE_h38d0ce65_0[__Vtableidx1];
    }
    if ((0x20U & Vtop__ConstPool__TABLE_h28e2e1f9_0
         [__Vtableidx1])) {
        vlSelfRef.cpu__DOT__controller__DOT__alu_state 
            = Vtop__ConstPool__TABLE_h97587248_0[__Vtableidx1];
    }
    vlSelfRef.cpu__DOT__alu_mux_1__DOT__i0 = vlSelfRef.cpu__DOT__reg_data_out_1;
    vlSelfRef.cpu__DOT__alu_mux_2__DOT__i0 = vlSelfRef.cpu__DOT__reg_data_out_2;
    vlSelfRef.cpu__DOT__alu__DOT__shamt = (0x1fU & 
                                           (vlSelfRef.cpu__DOT__sign_extender__DOT__imm_x 
                                            >> 0U));
    vlSelfRef.cpu__DOT__imm_x = vlSelfRef.cpu__DOT__sign_extender__DOT__imm_x;
    vlSelfRef.cpu__DOT__reg_data_sel = vlSelfRef.cpu__DOT__controller__DOT__reg_data_sel;
    if (vlSelfRef.cpu__DOT__controller__DOT__alu_a_sel) {
        vlSelfRef.cpu__DOT__alu_a_sel = 1U;
        vlSelfRef.cpu__DOT__operand1 = vlSelfRef.cpu__DOT__pc;
    } else {
        vlSelfRef.cpu__DOT__alu_a_sel = 0U;
        vlSelfRef.cpu__DOT__operand1 = vlSelfRef.cpu__DOT__register_file__DOT__registers
            [vlSelfRef.cpu__DOT__rs1];
    }
    if (vlSelfRef.cpu__DOT__controller__DOT__alu_b_sel) {
        vlSelfRef.cpu__DOT__alu_b_sel = 1U;
        vlSelfRef.cpu__DOT__operand2 = vlSelfRef.cpu__DOT__sign_extender__DOT__imm_x;
    } else {
        vlSelfRef.cpu__DOT__alu_b_sel = 0U;
        vlSelfRef.cpu__DOT__operand2 = vlSelfRef.cpu__DOT__register_file__DOT__registers
            [vlSelfRef.cpu__DOT__rs2];
    }
    __Vtableidx2 = (((IData)(vlSelfRef.cpu__DOT__controller__DOT__zero) 
                     << 5U) | (((IData)(vlSelfRef.cpu__DOT__funct3) 
                                << 2U) | (IData)(vlSelfRef.cpu__DOT__controller__DOT__alu_state)));
    if ((1U & Vtop__ConstPool__TABLE_he3855978_0[__Vtableidx2])) {
        vlSelfRef.cpu__DOT__controller__DOT__pc_alu_sel 
            = Vtop__ConstPool__TABLE_hd950d6d8_0[__Vtableidx2];
    }
    if ((2U & Vtop__ConstPool__TABLE_he3855978_0[__Vtableidx2])) {
        vlSelfRef.cpu__DOT__controller__DOT__pc_next_sel 
            = Vtop__ConstPool__TABLE_hc62f7ad7_0[__Vtableidx2];
    }
    if ((0U == (IData)(vlSelfRef.cpu__DOT__controller__DOT__alu_state))) {
        if (((0x37U == (IData)(vlSelfRef.cpu__DOT__opcode)) 
             | (0x17U == (IData)(vlSelfRef.cpu__DOT__opcode)))) {
            vlSelfRef.cpu__DOT__controller__DOT__alu_control = 0U;
        } else if ((0U == (IData)(vlSelfRef.cpu__DOT__funct3))) {
            vlSelfRef.cpu__DOT__controller__DOT__alu_control 
                = ((0x33U == (IData)(vlSelfRef.cpu__DOT__opcode))
                    ? ((0x20U & (IData)(vlSelfRef.cpu__DOT__funct7))
                        ? 1U : 0U) : 0U);
        } else if ((7U == (IData)(vlSelfRef.cpu__DOT__funct3))) {
            vlSelfRef.cpu__DOT__controller__DOT__alu_control = 2U;
        }
    } else if ((1U == (IData)(vlSelfRef.cpu__DOT__controller__DOT__alu_state))) {
        if (((0U == (IData)(vlSelfRef.cpu__DOT__funct3)) 
             || (1U == (IData)(vlSelfRef.cpu__DOT__funct3)))) {
            vlSelfRef.cpu__DOT__controller__DOT__alu_control = 1U;
        } else if (((4U == (IData)(vlSelfRef.cpu__DOT__funct3)) 
                    || (5U == (IData)(vlSelfRef.cpu__DOT__funct3)))) {
            vlSelfRef.cpu__DOT__controller__DOT__alu_control = 5U;
        } else if (((6U == (IData)(vlSelfRef.cpu__DOT__funct3)) 
                    || (7U == (IData)(vlSelfRef.cpu__DOT__funct3)))) {
            vlSelfRef.cpu__DOT__controller__DOT__alu_control = 6U;
        }
    }
    vlSelfRef.cpu__DOT__mux_1__DOT__i0 = vlSelfRef.cpu__DOT__imm_x;
    vlSelfRef.cpu__DOT__alu_mux_2__DOT__i1 = vlSelfRef.cpu__DOT__imm_x;
    vlSelfRef.cpu__DOT__reg_data_mux__DOT__a0 = vlSelfRef.cpu__DOT__reg_data_sel;
    vlSelfRef.cpu__DOT__alu_mux_1__DOT__a0 = vlSelfRef.cpu__DOT__alu_a_sel;
    vlSelfRef.cpu__DOT__alu__DOT__operand1 = vlSelfRef.cpu__DOT__operand1;
    vlSelfRef.cpu__DOT__alu_mux_1__DOT__q = vlSelfRef.cpu__DOT__operand1;
    vlSelfRef.cpu__DOT__alu_mux_2__DOT__a0 = vlSelfRef.cpu__DOT__alu_b_sel;
    vlSelfRef.cpu__DOT__alu__DOT__operand2 = vlSelfRef.cpu__DOT__operand2;
    vlSelfRef.cpu__DOT__alu_mux_2__DOT__q = vlSelfRef.cpu__DOT__operand2;
    vlSelfRef.cpu__DOT__pc_next_sel = vlSelfRef.cpu__DOT__controller__DOT__pc_next_sel;
    if (vlSelfRef.cpu__DOT__controller__DOT__pc_alu_sel) {
        vlSelfRef.cpu__DOT__pc_alu_sel = 1U;
        vlSelfRef.cpu__DOT__pc_alu_result = 4U;
    } else {
        vlSelfRef.cpu__DOT__pc_alu_sel = 0U;
        vlSelfRef.cpu__DOT__pc_alu_result = vlSelfRef.cpu__DOT__sign_extender__DOT__imm_x;
    }
    vlSelfRef.cpu__DOT__alu_control = vlSelfRef.cpu__DOT__controller__DOT__alu_control;
    vlSelfRef.cpu__DOT__mux_2__DOT__a0 = vlSelfRef.cpu__DOT__pc_next_sel;
    vlSelfRef.cpu__DOT__mux_1__DOT__a0 = vlSelfRef.cpu__DOT__pc_alu_sel;
    vlSelfRef.cpu__DOT__reg_data_mux__DOT__i0 = vlSelfRef.cpu__DOT__pc_alu_result;
    vlSelfRef.cpu__DOT__mux_1__DOT__q = vlSelfRef.cpu__DOT__pc_alu_result;
    vlSelfRef.cpu__DOT__pc_next = (vlSelfRef.cpu__DOT__pc 
                                   + vlSelfRef.cpu__DOT__pc_alu_result);
    vlSelfRef.cpu__DOT__alu__DOT__alu_control = vlSelfRef.cpu__DOT__alu_control;
    vlSelfRef.cpu__DOT__alu__DOT__alu_result = ((((
                                                   (((((0U 
                                                        == vlSelfRef.cpu__DOT__alu_control) 
                                                       | (1U 
                                                          == vlSelfRef.cpu__DOT__alu_control)) 
                                                      | (2U 
                                                         == vlSelfRef.cpu__DOT__alu_control)) 
                                                     | (3U 
                                                        == vlSelfRef.cpu__DOT__alu_control)) 
                                                    | (4U 
                                                       == vlSelfRef.cpu__DOT__alu_control)) 
                                                   | (5U 
                                                      == vlSelfRef.cpu__DOT__alu_control)) 
                                                  | (6U 
                                                     == vlSelfRef.cpu__DOT__alu_control)) 
                                                 | (7U 
                                                    == vlSelfRef.cpu__DOT__alu_control))
                                                 ? 
                                                ((0U 
                                                  == vlSelfRef.cpu__DOT__alu_control)
                                                  ? 
                                                 (vlSelfRef.cpu__DOT__operand1 
                                                  + vlSelfRef.cpu__DOT__operand2)
                                                  : 
                                                 ((1U 
                                                   == vlSelfRef.cpu__DOT__alu_control)
                                                   ? 
                                                  ((IData)(1U) 
                                                   + 
                                                   (vlSelfRef.cpu__DOT__operand1 
                                                    + 
                                                    (~ vlSelfRef.cpu__DOT__operand2)))
                                                   : 
                                                  ((2U 
                                                    == vlSelfRef.cpu__DOT__alu_control)
                                                    ? 
                                                   (vlSelfRef.cpu__DOT__operand1 
                                                    & vlSelfRef.cpu__DOT__operand2)
                                                    : 
                                                   ((3U 
                                                     == vlSelfRef.cpu__DOT__alu_control)
                                                     ? 
                                                    (vlSelfRef.cpu__DOT__operand1 
                                                     | vlSelfRef.cpu__DOT__operand2)
                                                     : 
                                                    ((4U 
                                                      == vlSelfRef.cpu__DOT__alu_control)
                                                      ? 
                                                     (vlSelfRef.cpu__DOT__operand1 
                                                      ^ vlSelfRef.cpu__DOT__operand2)
                                                      : 
                                                     ((5U 
                                                       == vlSelfRef.cpu__DOT__alu_control)
                                                       ? 
                                                      VL_LTS_III(32, vlSelfRef.cpu__DOT__operand1, vlSelfRef.cpu__DOT__operand2)
                                                       : 
                                                      ((6U 
                                                        == vlSelfRef.cpu__DOT__alu_control)
                                                        ? 
                                                       (vlSelfRef.cpu__DOT__operand1 
                                                        < vlSelfRef.cpu__DOT__operand2)
                                                        : 
                                                       (vlSelfRef.cpu__DOT__operand1 
                                                        << 
                                                        (0x1fU 
                                                         & vlSelfRef.cpu__DOT__sign_extender__DOT__imm_x)))))))))
                                                 : 
                                                ((8U 
                                                  == vlSelfRef.cpu__DOT__alu_control)
                                                  ? 
                                                 (vlSelfRef.cpu__DOT__operand1 
                                                  >> 
                                                  (0x1fU 
                                                   & vlSelfRef.cpu__DOT__sign_extender__DOT__imm_x))
                                                  : 
                                                 ((9U 
                                                   == vlSelfRef.cpu__DOT__alu_control)
                                                   ? 
                                                  VL_SHIFTRS_III(32,32,5, vlSelfRef.cpu__DOT__operand1, 
                                                                 (0x1fU 
                                                                  & vlSelfRef.cpu__DOT__sign_extender__DOT__imm_x))
                                                   : 0U)));
    vlSelfRef.cpu__DOT__mux_2__DOT__i0 = vlSelfRef.cpu__DOT__pc_next;
    vlSelfRef.cpu__DOT__alu__DOT__zero = (0U == vlSelfRef.cpu__DOT__alu__DOT__alu_result);
    vlSelfRef.cpu__DOT__alu__DOT__last_bit = (1U & vlSelfRef.cpu__DOT__alu__DOT__alu_result);
    vlSelfRef.cpu__DOT__zero = vlSelfRef.cpu__DOT__alu__DOT__zero;
    vlSelfRef.cpu__DOT__mux_2__DOT__i1 = vlSelfRef.cpu__DOT__alu__DOT__last_bit;
    vlSelfRef.cpu__DOT__reg_data_mux__DOT__i1 = vlSelfRef.cpu__DOT__alu__DOT__last_bit;
    vlSelfRef.cpu__DOT__flash__DOT__address = vlSelfRef.cpu__DOT__alu__DOT__last_bit;
    vlSelfRef.cpu__DOT__alu_result = vlSelfRef.cpu__DOT__alu__DOT__last_bit;
    vlSelfRef.cpu__DOT__last_bit = vlSelfRef.cpu__DOT__alu__DOT__last_bit;
    vlSelfRef.cpu__DOT__flash__DOT__data_out = vlSelfRef.cpu__DOT__flash__DOT__array_reg
        [vlSelfRef.cpu__DOT__alu__DOT__last_bit];
    vlSelfRef.cpu__DOT__pc_next_result = ((IData)(vlSelfRef.cpu__DOT__controller__DOT__pc_next_sel)
                                           ? (IData)(vlSelfRef.cpu__DOT__alu__DOT__last_bit)
                                           : vlSelfRef.cpu__DOT__pc_next);
    vlSelfRef.cpu__DOT__data_read = (1U & vlSelfRef.cpu__DOT__flash__DOT__array_reg
                                     [vlSelfRef.cpu__DOT__alu__DOT__last_bit]);
    vlSelfRef.cpu__DOT__mux_2__DOT__q = vlSelfRef.cpu__DOT__pc_next_result;
    vlSelfRef.cpu__DOT__reg_data_mux__DOT__i3 = vlSelfRef.cpu__DOT__data_read;
    vlSelfRef.cpu__DOT__reg_data_mux__DOT__q = ((2U 
                                                 & (IData)(vlSelfRef.cpu__DOT__reg_data_sel))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelfRef.cpu__DOT__reg_data_sel))
                                                  ? (IData)(vlSelfRef.cpu__DOT__data_read)
                                                  : 0U)
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelfRef.cpu__DOT__reg_data_sel))
                                                  ? (IData)(vlSelfRef.cpu__DOT__alu__DOT__last_bit)
                                                  : vlSelfRef.cpu__DOT__pc_alu_result));
    vlSelfRef.cpu__DOT__reg_data_in = vlSelfRef.cpu__DOT__reg_data_mux__DOT__q;
    vlSelfRef.cpu__DOT__register_file__DOT__reg_data_in 
        = vlSelfRef.cpu__DOT__reg_data_in;
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtop___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge cpu.pc_clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge cpu.pc_clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__instruction = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__pc_next = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__opcode = VL_RAND_RESET_I(7);
    vlSelf->cpu__DOT__rs1 = VL_RAND_RESET_I(5);
    vlSelf->cpu__DOT__rs2 = VL_RAND_RESET_I(5);
    vlSelf->cpu__DOT__rd = VL_RAND_RESET_I(5);
    vlSelf->cpu__DOT__reg_data_in = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__reg_data_out_1 = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__reg_data_out_2 = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__funct3 = VL_RAND_RESET_I(3);
    vlSelf->cpu__DOT__funct7 = VL_RAND_RESET_I(7);
    vlSelf->cpu__DOT__immi_source = VL_RAND_RESET_I(25);
    vlSelf->cpu__DOT__alu_control = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__alu_a_sel = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__alu_b_sel = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__operand1 = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__operand2 = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__alu_result = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__pc_alu_result = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__pc_next_result = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__mem_clk = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__pc_alu_sel = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__pc_next_sel = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__pc_clk = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__imm_x = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__reg_data_sel = VL_RAND_RESET_I(2);
    vlSelf->cpu__DOT__zero = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__last_bit = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__data_read = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__reg_clk = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__data_write = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__mux_1__DOT__i0 = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__mux_1__DOT__i1 = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__mux_1__DOT__a0 = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__mux_1__DOT__q = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__mux_2__DOT__i0 = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__mux_2__DOT__i1 = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__mux_2__DOT__a0 = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__mux_2__DOT__q = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__rom__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__rom__DOT__write_enable = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__rom__DOT__address = VL_RAND_RESET_I(6);
    vlSelf->cpu__DOT__rom__DOT__data_in = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__rom__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__rom__DOT__data_out = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->cpu__DOT__rom__DOT__array_reg[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->cpu__DOT__instruction_decoder__DOT__instruction = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__instruction_decoder__DOT__opcode = VL_RAND_RESET_I(7);
    vlSelf->cpu__DOT__instruction_decoder__DOT__rs1 = VL_RAND_RESET_I(5);
    vlSelf->cpu__DOT__instruction_decoder__DOT__rs2 = VL_RAND_RESET_I(5);
    vlSelf->cpu__DOT__instruction_decoder__DOT__rd = VL_RAND_RESET_I(5);
    vlSelf->cpu__DOT__instruction_decoder__DOT__funct3 = VL_RAND_RESET_I(3);
    vlSelf->cpu__DOT__instruction_decoder__DOT__funct7 = VL_RAND_RESET_I(7);
    vlSelf->cpu__DOT__instruction_decoder__DOT__immi_source = VL_RAND_RESET_I(25);
    vlSelf->cpu__DOT__controller__DOT__clock = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__controller__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__controller__DOT__opcode = VL_RAND_RESET_I(7);
    vlSelf->cpu__DOT__controller__DOT__funct3 = VL_RAND_RESET_I(3);
    vlSelf->cpu__DOT__controller__DOT__funct7 = VL_RAND_RESET_I(7);
    vlSelf->cpu__DOT__controller__DOT__zero = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__controller__DOT__alu_control = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__controller__DOT__alu_a_sel = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__controller__DOT__alu_b_sel = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__controller__DOT__mem_clk = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__controller__DOT__pc_alu_sel = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__controller__DOT__pc_next_sel = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__controller__DOT__pc_clk = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__controller__DOT__reg_data_sel = VL_RAND_RESET_I(2);
    vlSelf->cpu__DOT__controller__DOT__alu_state = VL_RAND_RESET_I(2);
    vlSelf->cpu__DOT__reg_data_mux__DOT__i0 = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__reg_data_mux__DOT__i1 = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__reg_data_mux__DOT__i2 = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__reg_data_mux__DOT__i3 = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__reg_data_mux__DOT__a0 = VL_RAND_RESET_I(2);
    vlSelf->cpu__DOT__reg_data_mux__DOT__q = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__register_file__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__register_file__DOT__write_enable = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__register_file__DOT__rs1 = VL_RAND_RESET_I(5);
    vlSelf->cpu__DOT__register_file__DOT__rs2 = VL_RAND_RESET_I(5);
    vlSelf->cpu__DOT__register_file__DOT__rd = VL_RAND_RESET_I(5);
    vlSelf->cpu__DOT__register_file__DOT__reg_data_in = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__register_file__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__register_file__DOT__reg_data_out_1 = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__register_file__DOT__reg_data_out_2 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->cpu__DOT__register_file__DOT__registers[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->cpu__DOT__register_file__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->cpu__DOT__sign_extender__DOT__immi_source = VL_RAND_RESET_I(25);
    vlSelf->cpu__DOT__sign_extender__DOT__opcode = VL_RAND_RESET_I(7);
    vlSelf->cpu__DOT__sign_extender__DOT__imm_x = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__alu_mux_1__DOT__i0 = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__alu_mux_1__DOT__i1 = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__alu_mux_1__DOT__a0 = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__alu_mux_1__DOT__q = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__alu_mux_2__DOT__i0 = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__alu_mux_2__DOT__i1 = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__alu_mux_2__DOT__a0 = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__alu_mux_2__DOT__q = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__alu__DOT__alu_control = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__alu__DOT__operand1 = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__alu__DOT__operand2 = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__alu__DOT__shamt = VL_RAND_RESET_I(5);
    vlSelf->cpu__DOT__alu__DOT__alu_result = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__alu__DOT__zero = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__alu__DOT__last_bit = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__flash__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__flash__DOT__write_enable = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__flash__DOT__address = VL_RAND_RESET_I(6);
    vlSelf->cpu__DOT__flash__DOT__data_in = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__flash__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__flash__DOT__data_out = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->cpu__DOT__flash__DOT__array_reg[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__Vtrigprevexpr___TOP__cpu__DOT__pc_clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
}
