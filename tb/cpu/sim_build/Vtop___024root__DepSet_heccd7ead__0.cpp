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

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*5:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelfRef.cpu__DOT__pc_clk = vlSelfRef.cpu__DOT__controller__DOT__pc_clk;
    vlSelfRef.cpu__DOT__rom__DOT__address = (0x3fU 
                                             & (vlSelfRef.cpu__DOT__pc 
                                                >> 0U));
    vlSelfRef.cpu__DOT__alu_mux_1__DOT__i1 = vlSelfRef.cpu__DOT__pc;
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
void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf);

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VdlyVal__cpu__DOT__register_file__DOT__registers__v0;
    __VdlyVal__cpu__DOT__register_file__DOT__registers__v0 = 0;
    CData/*4:0*/ __VdlyDim0__cpu__DOT__register_file__DOT__registers__v0;
    __VdlyDim0__cpu__DOT__register_file__DOT__registers__v0 = 0;
    CData/*0:0*/ __VdlySet__cpu__DOT__register_file__DOT__registers__v0;
    __VdlySet__cpu__DOT__register_file__DOT__registers__v0 = 0;
    CData/*0:0*/ __VdlySet__cpu__DOT__register_file__DOT__registers__v1;
    __VdlySet__cpu__DOT__register_file__DOT__registers__v1 = 0;
    IData/*31:0*/ __VdlyVal__cpu__DOT__flash__DOT__array_reg__v0;
    __VdlyVal__cpu__DOT__flash__DOT__array_reg__v0 = 0;
    CData/*5:0*/ __VdlyDim0__cpu__DOT__flash__DOT__array_reg__v0;
    __VdlyDim0__cpu__DOT__flash__DOT__array_reg__v0 = 0;
    CData/*0:0*/ __VdlySet__cpu__DOT__flash__DOT__array_reg__v0;
    __VdlySet__cpu__DOT__flash__DOT__array_reg__v0 = 0;
    // Body
    __VdlySet__cpu__DOT__flash__DOT__array_reg__v0 = 0U;
    __VdlySet__cpu__DOT__register_file__DOT__registers__v0 = 0U;
    __VdlySet__cpu__DOT__register_file__DOT__registers__v1 = 0U;
    if ((1U & (~ (IData)(vlSelfRef.reset)))) {
        vlSelfRef.cpu__DOT__register_file__DOT__unnamedblk1__DOT__i = 1U;
        vlSelfRef.cpu__DOT__register_file__DOT__unnamedblk1__DOT__i = 2U;
        vlSelfRef.cpu__DOT__register_file__DOT__unnamedblk1__DOT__i = 3U;
        vlSelfRef.cpu__DOT__register_file__DOT__unnamedblk1__DOT__i = 4U;
        vlSelfRef.cpu__DOT__register_file__DOT__unnamedblk1__DOT__i = 5U;
        vlSelfRef.cpu__DOT__register_file__DOT__unnamedblk1__DOT__i = 6U;
        vlSelfRef.cpu__DOT__register_file__DOT__unnamedblk1__DOT__i = 7U;
        vlSelfRef.cpu__DOT__register_file__DOT__unnamedblk1__DOT__i = 8U;
        vlSelfRef.cpu__DOT__register_file__DOT__unnamedblk1__DOT__i = 9U;
        vlSelfRef.cpu__DOT__register_file__DOT__unnamedblk1__DOT__i = 0xaU;
        vlSelfRef.cpu__DOT__register_file__DOT__unnamedblk1__DOT__i = 0xbU;
        vlSelfRef.cpu__DOT__register_file__DOT__unnamedblk1__DOT__i = 0xcU;
        vlSelfRef.cpu__DOT__register_file__DOT__unnamedblk1__DOT__i = 0xdU;
        vlSelfRef.cpu__DOT__register_file__DOT__unnamedblk1__DOT__i = 0xeU;
        vlSelfRef.cpu__DOT__register_file__DOT__unnamedblk1__DOT__i = 0xfU;
        vlSelfRef.cpu__DOT__register_file__DOT__unnamedblk1__DOT__i = 0x10U;
        vlSelfRef.cpu__DOT__register_file__DOT__unnamedblk1__DOT__i = 0x11U;
        vlSelfRef.cpu__DOT__register_file__DOT__unnamedblk1__DOT__i = 0x12U;
        vlSelfRef.cpu__DOT__register_file__DOT__unnamedblk1__DOT__i = 0x13U;
        vlSelfRef.cpu__DOT__register_file__DOT__unnamedblk1__DOT__i = 0x14U;
        vlSelfRef.cpu__DOT__register_file__DOT__unnamedblk1__DOT__i = 0x15U;
        vlSelfRef.cpu__DOT__register_file__DOT__unnamedblk1__DOT__i = 0x16U;
        vlSelfRef.cpu__DOT__register_file__DOT__unnamedblk1__DOT__i = 0x17U;
        vlSelfRef.cpu__DOT__register_file__DOT__unnamedblk1__DOT__i = 0x18U;
        vlSelfRef.cpu__DOT__register_file__DOT__unnamedblk1__DOT__i = 0x19U;
        vlSelfRef.cpu__DOT__register_file__DOT__unnamedblk1__DOT__i = 0x1aU;
        vlSelfRef.cpu__DOT__register_file__DOT__unnamedblk1__DOT__i = 0x1bU;
        vlSelfRef.cpu__DOT__register_file__DOT__unnamedblk1__DOT__i = 0x1cU;
        vlSelfRef.cpu__DOT__register_file__DOT__unnamedblk1__DOT__i = 0x1dU;
        vlSelfRef.cpu__DOT__register_file__DOT__unnamedblk1__DOT__i = 0x1eU;
        vlSelfRef.cpu__DOT__register_file__DOT__unnamedblk1__DOT__i = 0x1fU;
        vlSelfRef.cpu__DOT__register_file__DOT__unnamedblk1__DOT__i = 0x20U;
    }
    if (vlSelfRef.cpu__DOT__mem_clk) {
        __VdlyVal__cpu__DOT__flash__DOT__array_reg__v0 
            = vlSelfRef.cpu__DOT__data_write;
        __VdlyDim0__cpu__DOT__flash__DOT__array_reg__v0 
            = vlSelfRef.cpu__DOT__alu__DOT__last_bit;
        __VdlySet__cpu__DOT__flash__DOT__array_reg__v0 = 1U;
    }
    if (vlSelfRef.reset) {
        if (vlSelfRef.cpu__DOT__reg_clk) {
            __VdlyVal__cpu__DOT__register_file__DOT__registers__v0 
                = vlSelfRef.cpu__DOT__reg_data_in;
            __VdlyDim0__cpu__DOT__register_file__DOT__registers__v0 
                = vlSelfRef.cpu__DOT__rd;
            __VdlySet__cpu__DOT__register_file__DOT__registers__v0 = 1U;
        }
    } else {
        __VdlySet__cpu__DOT__register_file__DOT__registers__v1 = 1U;
    }
    if (__VdlySet__cpu__DOT__flash__DOT__array_reg__v0) {
        vlSelfRef.cpu__DOT__flash__DOT__array_reg[__VdlyDim0__cpu__DOT__flash__DOT__array_reg__v0] 
            = __VdlyVal__cpu__DOT__flash__DOT__array_reg__v0;
    }
    if (__VdlySet__cpu__DOT__register_file__DOT__registers__v0) {
        vlSelfRef.cpu__DOT__register_file__DOT__registers[__VdlyDim0__cpu__DOT__register_file__DOT__registers__v0] 
            = __VdlyVal__cpu__DOT__register_file__DOT__registers__v0;
    }
    if (__VdlySet__cpu__DOT__register_file__DOT__registers__v1) {
        vlSelfRef.cpu__DOT__register_file__DOT__registers[0U] = 0U;
        vlSelfRef.cpu__DOT__register_file__DOT__registers[1U] = 0U;
        vlSelfRef.cpu__DOT__register_file__DOT__registers[2U] = 0U;
        vlSelfRef.cpu__DOT__register_file__DOT__registers[3U] = 0U;
        vlSelfRef.cpu__DOT__register_file__DOT__registers[4U] = 0U;
        vlSelfRef.cpu__DOT__register_file__DOT__registers[5U] = 0U;
        vlSelfRef.cpu__DOT__register_file__DOT__registers[6U] = 0U;
        vlSelfRef.cpu__DOT__register_file__DOT__registers[7U] = 0U;
        vlSelfRef.cpu__DOT__register_file__DOT__registers[8U] = 0U;
        vlSelfRef.cpu__DOT__register_file__DOT__registers[9U] = 0U;
        vlSelfRef.cpu__DOT__register_file__DOT__registers[0xaU] = 0U;
        vlSelfRef.cpu__DOT__register_file__DOT__registers[0xbU] = 0U;
        vlSelfRef.cpu__DOT__register_file__DOT__registers[0xcU] = 0U;
        vlSelfRef.cpu__DOT__register_file__DOT__registers[0xdU] = 0U;
        vlSelfRef.cpu__DOT__register_file__DOT__registers[0xeU] = 0U;
        vlSelfRef.cpu__DOT__register_file__DOT__registers[0xfU] = 0U;
        vlSelfRef.cpu__DOT__register_file__DOT__registers[0x10U] = 0U;
        vlSelfRef.cpu__DOT__register_file__DOT__registers[0x11U] = 0U;
        vlSelfRef.cpu__DOT__register_file__DOT__registers[0x12U] = 0U;
        vlSelfRef.cpu__DOT__register_file__DOT__registers[0x13U] = 0U;
        vlSelfRef.cpu__DOT__register_file__DOT__registers[0x14U] = 0U;
        vlSelfRef.cpu__DOT__register_file__DOT__registers[0x15U] = 0U;
        vlSelfRef.cpu__DOT__register_file__DOT__registers[0x16U] = 0U;
        vlSelfRef.cpu__DOT__register_file__DOT__registers[0x17U] = 0U;
        vlSelfRef.cpu__DOT__register_file__DOT__registers[0x18U] = 0U;
        vlSelfRef.cpu__DOT__register_file__DOT__registers[0x19U] = 0U;
        vlSelfRef.cpu__DOT__register_file__DOT__registers[0x1aU] = 0U;
        vlSelfRef.cpu__DOT__register_file__DOT__registers[0x1bU] = 0U;
        vlSelfRef.cpu__DOT__register_file__DOT__registers[0x1cU] = 0U;
        vlSelfRef.cpu__DOT__register_file__DOT__registers[0x1dU] = 0U;
        vlSelfRef.cpu__DOT__register_file__DOT__registers[0x1eU] = 0U;
        vlSelfRef.cpu__DOT__register_file__DOT__registers[0x1fU] = 0U;
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*5:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelfRef.cpu__DOT__pc = ((IData)(vlSelfRef.reset)
                               ? vlSelfRef.cpu__DOT__pc_next_result
                               : 0U);
    vlSelfRef.cpu__DOT__rom__DOT__address = (0x3fU 
                                             & (vlSelfRef.cpu__DOT__pc 
                                                >> 0U));
    vlSelfRef.cpu__DOT__alu_mux_1__DOT__i1 = vlSelfRef.cpu__DOT__pc;
    vlSelfRef.cpu__DOT__rom__DOT__data_out = vlSelfRef.cpu__DOT__rom__DOT__array_reg
        [(0x3fU & vlSelfRef.cpu__DOT__pc)];
    vlSelfRef.cpu__DOT__instruction = vlSelfRef.cpu__DOT__rom__DOT__array_reg
        [(0x3fU & vlSelfRef.cpu__DOT__pc)];
    vlSelfRef.cpu__DOT__rd = (0x1fU & (vlSelfRef.cpu__DOT__rom__DOT__array_reg
                                       [(0x3fU & vlSelfRef.cpu__DOT__pc)] 
                                       >> 7U));
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
    vlSelfRef.cpu__DOT__instruction_decoder__DOT__instruction 
        = vlSelfRef.cpu__DOT__instruction;
    vlSelfRef.cpu__DOT__register_file__DOT__rd = vlSelfRef.cpu__DOT__rd;
    vlSelfRef.cpu__DOT__instruction_decoder__DOT__rd 
        = vlSelfRef.cpu__DOT__rd;
    vlSelfRef.cpu__DOT__controller__DOT__funct7 = vlSelfRef.cpu__DOT__funct7;
    vlSelfRef.cpu__DOT__instruction_decoder__DOT__funct7 
        = vlSelfRef.cpu__DOT__funct7;
    vlSelfRef.cpu__DOT__register_file__DOT__rs1 = vlSelfRef.cpu__DOT__rs1;
    vlSelfRef.cpu__DOT__instruction_decoder__DOT__rs1 
        = vlSelfRef.cpu__DOT__rs1;
    vlSelfRef.cpu__DOT__register_file__DOT__rs2 = vlSelfRef.cpu__DOT__rs2;
    vlSelfRef.cpu__DOT__instruction_decoder__DOT__rs2 
        = vlSelfRef.cpu__DOT__rs2;
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
    vlSelfRef.cpu__DOT__alu__DOT__shamt = (0x1fU & 
                                           (vlSelfRef.cpu__DOT__sign_extender__DOT__imm_x 
                                            >> 0U));
    vlSelfRef.cpu__DOT__imm_x = vlSelfRef.cpu__DOT__sign_extender__DOT__imm_x;
    vlSelfRef.cpu__DOT__reg_data_sel = vlSelfRef.cpu__DOT__controller__DOT__reg_data_sel;
    vlSelfRef.cpu__DOT__alu_a_sel = vlSelfRef.cpu__DOT__controller__DOT__alu_a_sel;
    vlSelfRef.cpu__DOT__alu_b_sel = vlSelfRef.cpu__DOT__controller__DOT__alu_b_sel;
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
    vlSelfRef.cpu__DOT__alu_mux_2__DOT__a0 = vlSelfRef.cpu__DOT__alu_b_sel;
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
    vlSelfRef.cpu__DOT__mux_2__DOT__i0 = vlSelfRef.cpu__DOT__pc_next;
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cpu__DOT__register_file__DOT__reg_data_out_1 
        = vlSelfRef.cpu__DOT__register_file__DOT__registers
        [vlSelfRef.cpu__DOT__rs1];
    vlSelfRef.cpu__DOT__reg_data_out_1 = vlSelfRef.cpu__DOT__register_file__DOT__registers
        [vlSelfRef.cpu__DOT__rs1];
    vlSelfRef.cpu__DOT__register_file__DOT__reg_data_out_2 
        = vlSelfRef.cpu__DOT__register_file__DOT__registers
        [vlSelfRef.cpu__DOT__rs2];
    vlSelfRef.cpu__DOT__reg_data_out_2 = vlSelfRef.cpu__DOT__register_file__DOT__registers
        [vlSelfRef.cpu__DOT__rs2];
    vlSelfRef.cpu__DOT__operand1 = ((IData)(vlSelfRef.cpu__DOT__controller__DOT__alu_a_sel)
                                     ? vlSelfRef.cpu__DOT__pc
                                     : vlSelfRef.cpu__DOT__register_file__DOT__registers
                                    [vlSelfRef.cpu__DOT__rs1]);
    vlSelfRef.cpu__DOT__operand2 = ((IData)(vlSelfRef.cpu__DOT__controller__DOT__alu_b_sel)
                                     ? vlSelfRef.cpu__DOT__sign_extender__DOT__imm_x
                                     : vlSelfRef.cpu__DOT__register_file__DOT__registers
                                    [vlSelfRef.cpu__DOT__rs2]);
    vlSelfRef.cpu__DOT__alu_mux_1__DOT__i0 = vlSelfRef.cpu__DOT__reg_data_out_1;
    vlSelfRef.cpu__DOT__alu_mux_2__DOT__i0 = vlSelfRef.cpu__DOT__reg_data_out_2;
    vlSelfRef.cpu__DOT__alu__DOT__operand1 = vlSelfRef.cpu__DOT__operand1;
    vlSelfRef.cpu__DOT__alu_mux_1__DOT__q = vlSelfRef.cpu__DOT__operand1;
    vlSelfRef.cpu__DOT__alu__DOT__operand2 = vlSelfRef.cpu__DOT__operand2;
    vlSelfRef.cpu__DOT__alu_mux_2__DOT__q = vlSelfRef.cpu__DOT__operand2;
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

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
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
            VL_FATAL_MT("/foss/designs/tb/cpu/../../design/cpu.sv", 3, "", "Input combinational region did not converge.");
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
            VL_FATAL_MT("/foss/designs/tb/cpu/../../design/cpu.sv", 3, "", "NBA region did not converge.");
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
                VL_FATAL_MT("/foss/designs/tb/cpu/../../design/cpu.sv", 3, "", "Active region did not converge.");
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
    if (VL_UNLIKELY((vlSelfRef.reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
