// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelfRef.clk));
    bufp->chgBit(oldp+1,(vlSelfRef.reset));
    bufp->chgBit(oldp+2,(vlSelfRef.cpu__DOT__clk));
    bufp->chgBit(oldp+3,(vlSelfRef.cpu__DOT__reset));
    bufp->chgIData(oldp+4,(vlSelfRef.cpu__DOT__pc),32);
    bufp->chgIData(oldp+5,(vlSelfRef.cpu__DOT__instruction),32);
    bufp->chgIData(oldp+6,(vlSelfRef.cpu__DOT__pc_next),32);
    bufp->chgCData(oldp+7,(vlSelfRef.cpu__DOT__opcode),7);
    bufp->chgCData(oldp+8,(vlSelfRef.cpu__DOT__rs1),5);
    bufp->chgCData(oldp+9,(vlSelfRef.cpu__DOT__rs2),5);
    bufp->chgCData(oldp+10,(vlSelfRef.cpu__DOT__rd),5);
    bufp->chgIData(oldp+11,(vlSelfRef.cpu__DOT__reg_data_in),32);
    bufp->chgIData(oldp+12,(vlSelfRef.cpu__DOT__reg_data_out_1),32);
    bufp->chgIData(oldp+13,(vlSelfRef.cpu__DOT__reg_data_out_2),32);
    bufp->chgCData(oldp+14,(vlSelfRef.cpu__DOT__funct3),3);
    bufp->chgCData(oldp+15,(vlSelfRef.cpu__DOT__funct7),7);
    bufp->chgIData(oldp+16,(vlSelfRef.cpu__DOT__immi_source),25);
    bufp->chgIData(oldp+17,(vlSelfRef.cpu__DOT__alu_control),32);
    bufp->chgBit(oldp+18,(vlSelfRef.cpu__DOT__alu_a_sel));
    bufp->chgBit(oldp+19,(vlSelfRef.cpu__DOT__alu_b_sel));
    bufp->chgIData(oldp+20,(vlSelfRef.cpu__DOT__operand1),32);
    bufp->chgIData(oldp+21,(vlSelfRef.cpu__DOT__operand2),32);
    bufp->chgBit(oldp+22,(vlSelfRef.cpu__DOT__alu_result));
    bufp->chgIData(oldp+23,(vlSelfRef.cpu__DOT__pc_alu_result),32);
    bufp->chgIData(oldp+24,(vlSelfRef.cpu__DOT__pc_next_result),32);
    bufp->chgBit(oldp+25,(vlSelfRef.cpu__DOT__mem_clk));
    bufp->chgBit(oldp+26,(vlSelfRef.cpu__DOT__pc_alu_sel));
    bufp->chgBit(oldp+27,(vlSelfRef.cpu__DOT__pc_next_sel));
    bufp->chgBit(oldp+28,(vlSelfRef.cpu__DOT__pc_clk));
    bufp->chgIData(oldp+29,(vlSelfRef.cpu__DOT__imm_x),32);
    bufp->chgCData(oldp+30,(vlSelfRef.cpu__DOT__reg_data_sel),2);
    bufp->chgBit(oldp+31,(vlSelfRef.cpu__DOT__zero));
    bufp->chgBit(oldp+32,(vlSelfRef.cpu__DOT__last_bit));
    bufp->chgBit(oldp+33,(vlSelfRef.cpu__DOT__data_read));
    bufp->chgIData(oldp+34,(vlSelfRef.cpu__DOT__alu__DOT__alu_control),32);
    bufp->chgIData(oldp+35,(vlSelfRef.cpu__DOT__alu__DOT__operand1),32);
    bufp->chgIData(oldp+36,(vlSelfRef.cpu__DOT__alu__DOT__operand2),32);
    bufp->chgCData(oldp+37,(vlSelfRef.cpu__DOT__alu__DOT__shamt),5);
    bufp->chgIData(oldp+38,(vlSelfRef.cpu__DOT__alu__DOT__alu_result),32);
    bufp->chgBit(oldp+39,(vlSelfRef.cpu__DOT__alu__DOT__zero));
    bufp->chgBit(oldp+40,(vlSelfRef.cpu__DOT__alu__DOT__last_bit));
    bufp->chgIData(oldp+41,(vlSelfRef.cpu__DOT__alu_mux_1__DOT__i0),32);
    bufp->chgIData(oldp+42,(vlSelfRef.cpu__DOT__alu_mux_1__DOT__i1),32);
    bufp->chgBit(oldp+43,(vlSelfRef.cpu__DOT__alu_mux_1__DOT__a0));
    bufp->chgIData(oldp+44,(vlSelfRef.cpu__DOT__alu_mux_1__DOT__q),32);
    bufp->chgIData(oldp+45,(vlSelfRef.cpu__DOT__alu_mux_2__DOT__i0),32);
    bufp->chgIData(oldp+46,(vlSelfRef.cpu__DOT__alu_mux_2__DOT__i1),32);
    bufp->chgBit(oldp+47,(vlSelfRef.cpu__DOT__alu_mux_2__DOT__a0));
    bufp->chgIData(oldp+48,(vlSelfRef.cpu__DOT__alu_mux_2__DOT__q),32);
    bufp->chgBit(oldp+49,(vlSelfRef.cpu__DOT__controller__DOT__clock));
    bufp->chgBit(oldp+50,(vlSelfRef.cpu__DOT__controller__DOT__reset));
    bufp->chgCData(oldp+51,(vlSelfRef.cpu__DOT__controller__DOT__opcode),7);
    bufp->chgCData(oldp+52,(vlSelfRef.cpu__DOT__controller__DOT__funct3),3);
    bufp->chgCData(oldp+53,(vlSelfRef.cpu__DOT__controller__DOT__funct7),7);
    bufp->chgBit(oldp+54,(vlSelfRef.cpu__DOT__controller__DOT__zero));
    bufp->chgIData(oldp+55,(vlSelfRef.cpu__DOT__controller__DOT__alu_control),32);
    bufp->chgBit(oldp+56,(vlSelfRef.cpu__DOT__controller__DOT__alu_a_sel));
    bufp->chgBit(oldp+57,(vlSelfRef.cpu__DOT__controller__DOT__alu_b_sel));
    bufp->chgBit(oldp+58,(vlSelfRef.cpu__DOT__controller__DOT__mem_clk));
    bufp->chgBit(oldp+59,(vlSelfRef.cpu__DOT__controller__DOT__pc_alu_sel));
    bufp->chgBit(oldp+60,(vlSelfRef.cpu__DOT__controller__DOT__pc_next_sel));
    bufp->chgBit(oldp+61,(vlSelfRef.cpu__DOT__controller__DOT__pc_clk));
    bufp->chgCData(oldp+62,(vlSelfRef.cpu__DOT__controller__DOT__reg_data_sel),2);
    bufp->chgCData(oldp+63,(vlSelfRef.cpu__DOT__controller__DOT__alu_state),2);
    bufp->chgBit(oldp+64,(vlSelfRef.cpu__DOT__flash__DOT__clk));
    bufp->chgBit(oldp+65,(vlSelfRef.cpu__DOT__flash__DOT__write_enable));
    bufp->chgCData(oldp+66,(vlSelfRef.cpu__DOT__flash__DOT__address),6);
    bufp->chgIData(oldp+67,(vlSelfRef.cpu__DOT__flash__DOT__data_in),32);
    bufp->chgBit(oldp+68,(vlSelfRef.cpu__DOT__flash__DOT__reset));
    bufp->chgIData(oldp+69,(vlSelfRef.cpu__DOT__flash__DOT__data_out),32);
    bufp->chgIData(oldp+70,(vlSelfRef.cpu__DOT__instruction_decoder__DOT__instruction),32);
    bufp->chgCData(oldp+71,(vlSelfRef.cpu__DOT__instruction_decoder__DOT__opcode),7);
    bufp->chgCData(oldp+72,(vlSelfRef.cpu__DOT__instruction_decoder__DOT__rs1),5);
    bufp->chgCData(oldp+73,(vlSelfRef.cpu__DOT__instruction_decoder__DOT__rs2),5);
    bufp->chgCData(oldp+74,(vlSelfRef.cpu__DOT__instruction_decoder__DOT__rd),5);
    bufp->chgCData(oldp+75,(vlSelfRef.cpu__DOT__instruction_decoder__DOT__funct3),3);
    bufp->chgCData(oldp+76,(vlSelfRef.cpu__DOT__instruction_decoder__DOT__funct7),7);
    bufp->chgIData(oldp+77,(vlSelfRef.cpu__DOT__instruction_decoder__DOT__immi_source),25);
    bufp->chgIData(oldp+78,(vlSelfRef.cpu__DOT__mux_1__DOT__i0),32);
    bufp->chgIData(oldp+79,(vlSelfRef.cpu__DOT__mux_1__DOT__i1),32);
    bufp->chgBit(oldp+80,(vlSelfRef.cpu__DOT__mux_1__DOT__a0));
    bufp->chgIData(oldp+81,(vlSelfRef.cpu__DOT__mux_1__DOT__q),32);
    bufp->chgIData(oldp+82,(vlSelfRef.cpu__DOT__mux_2__DOT__i0),32);
    bufp->chgIData(oldp+83,(vlSelfRef.cpu__DOT__mux_2__DOT__i1),32);
    bufp->chgBit(oldp+84,(vlSelfRef.cpu__DOT__mux_2__DOT__a0));
    bufp->chgIData(oldp+85,(vlSelfRef.cpu__DOT__mux_2__DOT__q),32);
    bufp->chgIData(oldp+86,(vlSelfRef.cpu__DOT__reg_data_mux__DOT__i0),32);
    bufp->chgIData(oldp+87,(vlSelfRef.cpu__DOT__reg_data_mux__DOT__i1),32);
    bufp->chgIData(oldp+88,(vlSelfRef.cpu__DOT__reg_data_mux__DOT__i2),32);
    bufp->chgIData(oldp+89,(vlSelfRef.cpu__DOT__reg_data_mux__DOT__i3),32);
    bufp->chgCData(oldp+90,(vlSelfRef.cpu__DOT__reg_data_mux__DOT__a0),2);
    bufp->chgIData(oldp+91,(vlSelfRef.cpu__DOT__reg_data_mux__DOT__q),32);
    bufp->chgBit(oldp+92,(vlSelfRef.cpu__DOT__register_file__DOT__clk));
    bufp->chgBit(oldp+93,(vlSelfRef.cpu__DOT__register_file__DOT__write_enable));
    bufp->chgCData(oldp+94,(vlSelfRef.cpu__DOT__register_file__DOT__rs1),5);
    bufp->chgCData(oldp+95,(vlSelfRef.cpu__DOT__register_file__DOT__rs2),5);
    bufp->chgCData(oldp+96,(vlSelfRef.cpu__DOT__register_file__DOT__rd),5);
    bufp->chgIData(oldp+97,(vlSelfRef.cpu__DOT__register_file__DOT__reg_data_in),32);
    bufp->chgBit(oldp+98,(vlSelfRef.cpu__DOT__register_file__DOT__reset));
    bufp->chgIData(oldp+99,(vlSelfRef.cpu__DOT__register_file__DOT__reg_data_out_1),32);
    bufp->chgIData(oldp+100,(vlSelfRef.cpu__DOT__register_file__DOT__reg_data_out_2),32);
    bufp->chgIData(oldp+101,(vlSelfRef.cpu__DOT__register_file__DOT__registers[0]),32);
    bufp->chgIData(oldp+102,(vlSelfRef.cpu__DOT__register_file__DOT__registers[1]),32);
    bufp->chgIData(oldp+103,(vlSelfRef.cpu__DOT__register_file__DOT__registers[2]),32);
    bufp->chgIData(oldp+104,(vlSelfRef.cpu__DOT__register_file__DOT__registers[3]),32);
    bufp->chgIData(oldp+105,(vlSelfRef.cpu__DOT__register_file__DOT__registers[4]),32);
    bufp->chgIData(oldp+106,(vlSelfRef.cpu__DOT__register_file__DOT__registers[5]),32);
    bufp->chgIData(oldp+107,(vlSelfRef.cpu__DOT__register_file__DOT__registers[6]),32);
    bufp->chgIData(oldp+108,(vlSelfRef.cpu__DOT__register_file__DOT__registers[7]),32);
    bufp->chgIData(oldp+109,(vlSelfRef.cpu__DOT__register_file__DOT__registers[8]),32);
    bufp->chgIData(oldp+110,(vlSelfRef.cpu__DOT__register_file__DOT__registers[9]),32);
    bufp->chgIData(oldp+111,(vlSelfRef.cpu__DOT__register_file__DOT__registers[10]),32);
    bufp->chgIData(oldp+112,(vlSelfRef.cpu__DOT__register_file__DOT__registers[11]),32);
    bufp->chgIData(oldp+113,(vlSelfRef.cpu__DOT__register_file__DOT__registers[12]),32);
    bufp->chgIData(oldp+114,(vlSelfRef.cpu__DOT__register_file__DOT__registers[13]),32);
    bufp->chgIData(oldp+115,(vlSelfRef.cpu__DOT__register_file__DOT__registers[14]),32);
    bufp->chgIData(oldp+116,(vlSelfRef.cpu__DOT__register_file__DOT__registers[15]),32);
    bufp->chgIData(oldp+117,(vlSelfRef.cpu__DOT__register_file__DOT__registers[16]),32);
    bufp->chgIData(oldp+118,(vlSelfRef.cpu__DOT__register_file__DOT__registers[17]),32);
    bufp->chgIData(oldp+119,(vlSelfRef.cpu__DOT__register_file__DOT__registers[18]),32);
    bufp->chgIData(oldp+120,(vlSelfRef.cpu__DOT__register_file__DOT__registers[19]),32);
    bufp->chgIData(oldp+121,(vlSelfRef.cpu__DOT__register_file__DOT__registers[20]),32);
    bufp->chgIData(oldp+122,(vlSelfRef.cpu__DOT__register_file__DOT__registers[21]),32);
    bufp->chgIData(oldp+123,(vlSelfRef.cpu__DOT__register_file__DOT__registers[22]),32);
    bufp->chgIData(oldp+124,(vlSelfRef.cpu__DOT__register_file__DOT__registers[23]),32);
    bufp->chgIData(oldp+125,(vlSelfRef.cpu__DOT__register_file__DOT__registers[24]),32);
    bufp->chgIData(oldp+126,(vlSelfRef.cpu__DOT__register_file__DOT__registers[25]),32);
    bufp->chgIData(oldp+127,(vlSelfRef.cpu__DOT__register_file__DOT__registers[26]),32);
    bufp->chgIData(oldp+128,(vlSelfRef.cpu__DOT__register_file__DOT__registers[27]),32);
    bufp->chgIData(oldp+129,(vlSelfRef.cpu__DOT__register_file__DOT__registers[28]),32);
    bufp->chgIData(oldp+130,(vlSelfRef.cpu__DOT__register_file__DOT__registers[29]),32);
    bufp->chgIData(oldp+131,(vlSelfRef.cpu__DOT__register_file__DOT__registers[30]),32);
    bufp->chgIData(oldp+132,(vlSelfRef.cpu__DOT__register_file__DOT__registers[31]),32);
    bufp->chgIData(oldp+133,(vlSelfRef.cpu__DOT__register_file__DOT__unnamedblk1__DOT__i),32);
    bufp->chgBit(oldp+134,(vlSelfRef.cpu__DOT__rom__DOT__clk));
    bufp->chgBit(oldp+135,(vlSelfRef.cpu__DOT__rom__DOT__write_enable));
    bufp->chgCData(oldp+136,(vlSelfRef.cpu__DOT__rom__DOT__address),6);
    bufp->chgIData(oldp+137,(vlSelfRef.cpu__DOT__rom__DOT__data_in),32);
    bufp->chgBit(oldp+138,(vlSelfRef.cpu__DOT__rom__DOT__reset));
    bufp->chgIData(oldp+139,(vlSelfRef.cpu__DOT__rom__DOT__data_out),32);
    bufp->chgIData(oldp+140,(vlSelfRef.cpu__DOT__sign_extender__DOT__immi_source),25);
    bufp->chgCData(oldp+141,(vlSelfRef.cpu__DOT__sign_extender__DOT__opcode),7);
    bufp->chgIData(oldp+142,(vlSelfRef.cpu__DOT__sign_extender__DOT__imm_x),32);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
