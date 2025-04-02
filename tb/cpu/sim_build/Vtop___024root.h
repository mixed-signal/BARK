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
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        CData/*0:0*/ cpu__DOT__pc_clk;
        VL_IN8(reset,0,0);
        CData/*0:0*/ cpu__DOT__clk;
        CData/*0:0*/ cpu__DOT__reset;
        CData/*6:0*/ cpu__DOT__opcode;
        CData/*4:0*/ cpu__DOT__rs1;
        CData/*4:0*/ cpu__DOT__rs2;
        CData/*4:0*/ cpu__DOT__rd;
        CData/*2:0*/ cpu__DOT__funct3;
        CData/*6:0*/ cpu__DOT__funct7;
        CData/*0:0*/ cpu__DOT__alu_a_sel;
        CData/*0:0*/ cpu__DOT__alu_b_sel;
        CData/*0:0*/ cpu__DOT__alu_result;
        CData/*0:0*/ cpu__DOT__mem_clk;
        CData/*0:0*/ cpu__DOT__pc_alu_sel;
        CData/*0:0*/ cpu__DOT__pc_next_sel;
        CData/*1:0*/ cpu__DOT__reg_data_sel;
        CData/*0:0*/ cpu__DOT__zero;
        CData/*0:0*/ cpu__DOT__last_bit;
        CData/*0:0*/ cpu__DOT__data_read;
        CData/*0:0*/ cpu__DOT__reg_clk;
        CData/*0:0*/ cpu__DOT__data_write;
        CData/*0:0*/ cpu__DOT__mux_1__DOT__a0;
        CData/*0:0*/ cpu__DOT__mux_2__DOT__a0;
        CData/*0:0*/ cpu__DOT__rom__DOT__clk;
        CData/*0:0*/ cpu__DOT__rom__DOT__write_enable;
        CData/*5:0*/ cpu__DOT__rom__DOT__address;
        CData/*0:0*/ cpu__DOT__rom__DOT__reset;
        CData/*6:0*/ cpu__DOT__instruction_decoder__DOT__opcode;
        CData/*4:0*/ cpu__DOT__instruction_decoder__DOT__rs1;
        CData/*4:0*/ cpu__DOT__instruction_decoder__DOT__rs2;
        CData/*4:0*/ cpu__DOT__instruction_decoder__DOT__rd;
        CData/*2:0*/ cpu__DOT__instruction_decoder__DOT__funct3;
        CData/*6:0*/ cpu__DOT__instruction_decoder__DOT__funct7;
        CData/*0:0*/ cpu__DOT__controller__DOT__clock;
        CData/*0:0*/ cpu__DOT__controller__DOT__reset;
        CData/*6:0*/ cpu__DOT__controller__DOT__opcode;
        CData/*2:0*/ cpu__DOT__controller__DOT__funct3;
        CData/*6:0*/ cpu__DOT__controller__DOT__funct7;
        CData/*0:0*/ cpu__DOT__controller__DOT__zero;
        CData/*0:0*/ cpu__DOT__controller__DOT__alu_a_sel;
        CData/*0:0*/ cpu__DOT__controller__DOT__alu_b_sel;
        CData/*0:0*/ cpu__DOT__controller__DOT__mem_clk;
        CData/*0:0*/ cpu__DOT__controller__DOT__pc_alu_sel;
        CData/*0:0*/ cpu__DOT__controller__DOT__pc_next_sel;
        CData/*0:0*/ cpu__DOT__controller__DOT__pc_clk;
        CData/*1:0*/ cpu__DOT__controller__DOT__reg_data_sel;
        CData/*1:0*/ cpu__DOT__controller__DOT__alu_state;
        CData/*1:0*/ cpu__DOT__reg_data_mux__DOT__a0;
        CData/*0:0*/ cpu__DOT__register_file__DOT__clk;
        CData/*0:0*/ cpu__DOT__register_file__DOT__write_enable;
        CData/*4:0*/ cpu__DOT__register_file__DOT__rs1;
        CData/*4:0*/ cpu__DOT__register_file__DOT__rs2;
        CData/*4:0*/ cpu__DOT__register_file__DOT__rd;
        CData/*0:0*/ cpu__DOT__register_file__DOT__reset;
        CData/*6:0*/ cpu__DOT__sign_extender__DOT__opcode;
        CData/*0:0*/ cpu__DOT__alu_mux_1__DOT__a0;
        CData/*0:0*/ cpu__DOT__alu_mux_2__DOT__a0;
        CData/*4:0*/ cpu__DOT__alu__DOT__shamt;
        CData/*0:0*/ cpu__DOT__alu__DOT__zero;
        CData/*0:0*/ cpu__DOT__alu__DOT__last_bit;
        CData/*0:0*/ cpu__DOT__flash__DOT__clk;
        CData/*0:0*/ cpu__DOT__flash__DOT__write_enable;
    };
    struct {
        CData/*5:0*/ cpu__DOT__flash__DOT__address;
        CData/*0:0*/ cpu__DOT__flash__DOT__reset;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__cpu__DOT__pc_clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __VactContinue;
        IData/*31:0*/ cpu__DOT__pc;
        IData/*31:0*/ cpu__DOT__instruction;
        IData/*31:0*/ cpu__DOT__pc_next;
        IData/*31:0*/ cpu__DOT__reg_data_in;
        IData/*31:0*/ cpu__DOT__reg_data_out_1;
        IData/*31:0*/ cpu__DOT__reg_data_out_2;
        IData/*24:0*/ cpu__DOT__immi_source;
        IData/*31:0*/ cpu__DOT__alu_control;
        IData/*31:0*/ cpu__DOT__operand1;
        IData/*31:0*/ cpu__DOT__operand2;
        IData/*31:0*/ cpu__DOT__pc_alu_result;
        IData/*31:0*/ cpu__DOT__pc_next_result;
        IData/*31:0*/ cpu__DOT__imm_x;
        IData/*31:0*/ cpu__DOT__mux_1__DOT__i0;
        IData/*31:0*/ cpu__DOT__mux_1__DOT__i1;
        IData/*31:0*/ cpu__DOT__mux_1__DOT__q;
        IData/*31:0*/ cpu__DOT__mux_2__DOT__i0;
        IData/*31:0*/ cpu__DOT__mux_2__DOT__i1;
        IData/*31:0*/ cpu__DOT__mux_2__DOT__q;
        IData/*31:0*/ cpu__DOT__rom__DOT__data_in;
        IData/*31:0*/ cpu__DOT__rom__DOT__data_out;
        IData/*31:0*/ cpu__DOT__instruction_decoder__DOT__instruction;
        IData/*24:0*/ cpu__DOT__instruction_decoder__DOT__immi_source;
        IData/*31:0*/ cpu__DOT__controller__DOT__alu_control;
        IData/*31:0*/ cpu__DOT__reg_data_mux__DOT__i0;
        IData/*31:0*/ cpu__DOT__reg_data_mux__DOT__i1;
        IData/*31:0*/ cpu__DOT__reg_data_mux__DOT__i2;
        IData/*31:0*/ cpu__DOT__reg_data_mux__DOT__i3;
        IData/*31:0*/ cpu__DOT__reg_data_mux__DOT__q;
        IData/*31:0*/ cpu__DOT__register_file__DOT__reg_data_in;
        IData/*31:0*/ cpu__DOT__register_file__DOT__reg_data_out_1;
        IData/*31:0*/ cpu__DOT__register_file__DOT__reg_data_out_2;
        IData/*31:0*/ cpu__DOT__register_file__DOT__unnamedblk1__DOT__i;
        IData/*24:0*/ cpu__DOT__sign_extender__DOT__immi_source;
        IData/*31:0*/ cpu__DOT__sign_extender__DOT__imm_x;
        IData/*31:0*/ cpu__DOT__alu_mux_1__DOT__i0;
        IData/*31:0*/ cpu__DOT__alu_mux_1__DOT__i1;
        IData/*31:0*/ cpu__DOT__alu_mux_1__DOT__q;
        IData/*31:0*/ cpu__DOT__alu_mux_2__DOT__i0;
        IData/*31:0*/ cpu__DOT__alu_mux_2__DOT__i1;
        IData/*31:0*/ cpu__DOT__alu_mux_2__DOT__q;
        IData/*31:0*/ cpu__DOT__alu__DOT__alu_control;
        IData/*31:0*/ cpu__DOT__alu__DOT__operand1;
        IData/*31:0*/ cpu__DOT__alu__DOT__operand2;
        IData/*31:0*/ cpu__DOT__alu__DOT__alu_result;
        IData/*31:0*/ cpu__DOT__flash__DOT__data_in;
        IData/*31:0*/ cpu__DOT__flash__DOT__data_out;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<IData/*31:0*/, 64> cpu__DOT__rom__DOT__array_reg;
        VlUnpacked<IData/*31:0*/, 32> cpu__DOT__register_file__DOT__registers;
        VlUnpacked<IData/*31:0*/, 64> cpu__DOT__flash__DOT__array_reg;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr IData/*31:0*/ cpu__DOT__rom__DOT__DATA_WIDTH = 0x00000020U;
    static constexpr IData/*31:0*/ cpu__DOT__rom__DOT__ADDR_WIDTH = 6U;
    static constexpr IData/*31:0*/ cpu__DOT__register_file__DOT__DATA_WIDTH = 0x00000020U;
    static constexpr IData/*31:0*/ cpu__DOT__register_file__DOT__ADDR_WIDTH = 5U;
    static constexpr IData/*31:0*/ cpu__DOT__flash__DOT__DATA_WIDTH = 0x00000020U;
    static constexpr IData/*31:0*/ cpu__DOT__flash__DOT__ADDR_WIDTH = 6U;
    static constexpr QData/*55:0*/ cpu__DOT__rom__DOT__NVM_INIT = 0x00726f6d2e747874ULL;
    static constexpr QData/*63:0*/ cpu__DOT__flash__DOT__NVM_INIT = 0x646174612e747874ULL;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
