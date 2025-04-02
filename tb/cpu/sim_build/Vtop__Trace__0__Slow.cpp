// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("cpu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+3,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"instruction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"pc_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+9,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+10,0,"rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+11,0,"rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+12,0,"reg_data_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,0,"reg_data_out_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+14,0,"reg_data_out_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+16,0,"funct7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+17,0,"immi_source",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+18,0,"alu_control",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+19,0,"alu_a_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"alu_b_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+21,0,"operand1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+22,0,"operand2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+23,0,"alu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+24,0,"pc_alu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+25,0,"pc_next_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+26,0,"mem_clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"pc_alu_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"pc_next_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"pc_clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+30,0,"imm_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+31,0,"reg_data_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+32,0,"zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"last_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"data_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+144,0,"reg_clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+145,0,"data_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("alu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+35,0,"alu_control",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+36,0,"operand1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,0,"operand2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,0,"shamt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+39,0,"alu_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+40,0,"zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"last_bit",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("alu_mux_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+42,0,"i0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+43,0,"i1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+44,0,"a0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+45,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("alu_mux_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+46,0,"i0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+47,0,"i1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+48,0,"a0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+49,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("controller", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+50,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+52,0,"opcode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+53,0,"funct3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+54,0,"funct7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+55,0,"zero",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+56,0,"alu_control",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+57,0,"alu_a_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"alu_b_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"mem_clk",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"pc_alu_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"pc_next_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"pc_clk",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+63,0,"reg_data_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+64,0,"alu_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("flash", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+146,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+147,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+148,0,"NVM_INIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+65,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"write_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+67,0,"address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+68,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+69,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+70,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("instruction_decoder", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+71,0,"instruction",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+72,0,"opcode",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+73,0,"rs1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+74,0,"rs2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+75,0,"rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+76,0,"funct3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+77,0,"funct7",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+78,0,"immi_source",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->popPrefix();
    tracep->pushPrefix("mux_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+79,0,"i0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+80,0,"i1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+81,0,"a0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+82,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("mux_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+83,0,"i0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+84,0,"i1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+85,0,"a0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+86,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("reg_data_mux", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+87,0,"i0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+88,0,"i1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+89,0,"i2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+90,0,"i3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+91,0,"a0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+92,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("register_file", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+146,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+150,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+93,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+94,0,"write_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+95,0,"rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+96,0,"rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+97,0,"rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+98,0,"reg_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+99,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+100,0,"reg_data_out_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+101,0,"reg_data_out_2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("registers", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+102+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+134,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("rom", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+146,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+147,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+151,0,"NVM_INIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 55,0);
    tracep->declBit(c+135,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+136,0,"write_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+137,0,"address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+138,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+139,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+140,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("sign_extender", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+141,0,"immi_source",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+142,0,"opcode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+143,0,"imm_x",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtop___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtop___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtop___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_const_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_const_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+144,(vlSelfRef.cpu__DOT__reg_clk));
    bufp->fullBit(oldp+145,(vlSelfRef.cpu__DOT__data_write));
    bufp->fullIData(oldp+146,(0x20U),32);
    bufp->fullIData(oldp+147,(6U),32);
    bufp->fullQData(oldp+148,(0x646174612e747874ULL),64);
    bufp->fullIData(oldp+150,(5U),32);
    bufp->fullQData(oldp+151,(0x726f6d2e747874ULL),56);
}

VL_ATTR_COLD void Vtop___024root__trace_full_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.clk));
    bufp->fullBit(oldp+2,(vlSelfRef.reset));
    bufp->fullBit(oldp+3,(vlSelfRef.cpu__DOT__clk));
    bufp->fullBit(oldp+4,(vlSelfRef.cpu__DOT__reset));
    bufp->fullIData(oldp+5,(vlSelfRef.cpu__DOT__pc),32);
    bufp->fullIData(oldp+6,(vlSelfRef.cpu__DOT__instruction),32);
    bufp->fullIData(oldp+7,(vlSelfRef.cpu__DOT__pc_next),32);
    bufp->fullCData(oldp+8,(vlSelfRef.cpu__DOT__opcode),7);
    bufp->fullCData(oldp+9,(vlSelfRef.cpu__DOT__rs1),5);
    bufp->fullCData(oldp+10,(vlSelfRef.cpu__DOT__rs2),5);
    bufp->fullCData(oldp+11,(vlSelfRef.cpu__DOT__rd),5);
    bufp->fullIData(oldp+12,(vlSelfRef.cpu__DOT__reg_data_in),32);
    bufp->fullIData(oldp+13,(vlSelfRef.cpu__DOT__reg_data_out_1),32);
    bufp->fullIData(oldp+14,(vlSelfRef.cpu__DOT__reg_data_out_2),32);
    bufp->fullCData(oldp+15,(vlSelfRef.cpu__DOT__funct3),3);
    bufp->fullCData(oldp+16,(vlSelfRef.cpu__DOT__funct7),7);
    bufp->fullIData(oldp+17,(vlSelfRef.cpu__DOT__immi_source),25);
    bufp->fullIData(oldp+18,(vlSelfRef.cpu__DOT__alu_control),32);
    bufp->fullBit(oldp+19,(vlSelfRef.cpu__DOT__alu_a_sel));
    bufp->fullBit(oldp+20,(vlSelfRef.cpu__DOT__alu_b_sel));
    bufp->fullIData(oldp+21,(vlSelfRef.cpu__DOT__operand1),32);
    bufp->fullIData(oldp+22,(vlSelfRef.cpu__DOT__operand2),32);
    bufp->fullBit(oldp+23,(vlSelfRef.cpu__DOT__alu_result));
    bufp->fullIData(oldp+24,(vlSelfRef.cpu__DOT__pc_alu_result),32);
    bufp->fullIData(oldp+25,(vlSelfRef.cpu__DOT__pc_next_result),32);
    bufp->fullBit(oldp+26,(vlSelfRef.cpu__DOT__mem_clk));
    bufp->fullBit(oldp+27,(vlSelfRef.cpu__DOT__pc_alu_sel));
    bufp->fullBit(oldp+28,(vlSelfRef.cpu__DOT__pc_next_sel));
    bufp->fullBit(oldp+29,(vlSelfRef.cpu__DOT__pc_clk));
    bufp->fullIData(oldp+30,(vlSelfRef.cpu__DOT__imm_x),32);
    bufp->fullCData(oldp+31,(vlSelfRef.cpu__DOT__reg_data_sel),2);
    bufp->fullBit(oldp+32,(vlSelfRef.cpu__DOT__zero));
    bufp->fullBit(oldp+33,(vlSelfRef.cpu__DOT__last_bit));
    bufp->fullBit(oldp+34,(vlSelfRef.cpu__DOT__data_read));
    bufp->fullIData(oldp+35,(vlSelfRef.cpu__DOT__alu__DOT__alu_control),32);
    bufp->fullIData(oldp+36,(vlSelfRef.cpu__DOT__alu__DOT__operand1),32);
    bufp->fullIData(oldp+37,(vlSelfRef.cpu__DOT__alu__DOT__operand2),32);
    bufp->fullCData(oldp+38,(vlSelfRef.cpu__DOT__alu__DOT__shamt),5);
    bufp->fullIData(oldp+39,(vlSelfRef.cpu__DOT__alu__DOT__alu_result),32);
    bufp->fullBit(oldp+40,(vlSelfRef.cpu__DOT__alu__DOT__zero));
    bufp->fullBit(oldp+41,(vlSelfRef.cpu__DOT__alu__DOT__last_bit));
    bufp->fullIData(oldp+42,(vlSelfRef.cpu__DOT__alu_mux_1__DOT__i0),32);
    bufp->fullIData(oldp+43,(vlSelfRef.cpu__DOT__alu_mux_1__DOT__i1),32);
    bufp->fullBit(oldp+44,(vlSelfRef.cpu__DOT__alu_mux_1__DOT__a0));
    bufp->fullIData(oldp+45,(vlSelfRef.cpu__DOT__alu_mux_1__DOT__q),32);
    bufp->fullIData(oldp+46,(vlSelfRef.cpu__DOT__alu_mux_2__DOT__i0),32);
    bufp->fullIData(oldp+47,(vlSelfRef.cpu__DOT__alu_mux_2__DOT__i1),32);
    bufp->fullBit(oldp+48,(vlSelfRef.cpu__DOT__alu_mux_2__DOT__a0));
    bufp->fullIData(oldp+49,(vlSelfRef.cpu__DOT__alu_mux_2__DOT__q),32);
    bufp->fullBit(oldp+50,(vlSelfRef.cpu__DOT__controller__DOT__clock));
    bufp->fullBit(oldp+51,(vlSelfRef.cpu__DOT__controller__DOT__reset));
    bufp->fullCData(oldp+52,(vlSelfRef.cpu__DOT__controller__DOT__opcode),7);
    bufp->fullCData(oldp+53,(vlSelfRef.cpu__DOT__controller__DOT__funct3),3);
    bufp->fullCData(oldp+54,(vlSelfRef.cpu__DOT__controller__DOT__funct7),7);
    bufp->fullBit(oldp+55,(vlSelfRef.cpu__DOT__controller__DOT__zero));
    bufp->fullIData(oldp+56,(vlSelfRef.cpu__DOT__controller__DOT__alu_control),32);
    bufp->fullBit(oldp+57,(vlSelfRef.cpu__DOT__controller__DOT__alu_a_sel));
    bufp->fullBit(oldp+58,(vlSelfRef.cpu__DOT__controller__DOT__alu_b_sel));
    bufp->fullBit(oldp+59,(vlSelfRef.cpu__DOT__controller__DOT__mem_clk));
    bufp->fullBit(oldp+60,(vlSelfRef.cpu__DOT__controller__DOT__pc_alu_sel));
    bufp->fullBit(oldp+61,(vlSelfRef.cpu__DOT__controller__DOT__pc_next_sel));
    bufp->fullBit(oldp+62,(vlSelfRef.cpu__DOT__controller__DOT__pc_clk));
    bufp->fullCData(oldp+63,(vlSelfRef.cpu__DOT__controller__DOT__reg_data_sel),2);
    bufp->fullCData(oldp+64,(vlSelfRef.cpu__DOT__controller__DOT__alu_state),2);
    bufp->fullBit(oldp+65,(vlSelfRef.cpu__DOT__flash__DOT__clk));
    bufp->fullBit(oldp+66,(vlSelfRef.cpu__DOT__flash__DOT__write_enable));
    bufp->fullCData(oldp+67,(vlSelfRef.cpu__DOT__flash__DOT__address),6);
    bufp->fullIData(oldp+68,(vlSelfRef.cpu__DOT__flash__DOT__data_in),32);
    bufp->fullBit(oldp+69,(vlSelfRef.cpu__DOT__flash__DOT__reset));
    bufp->fullIData(oldp+70,(vlSelfRef.cpu__DOT__flash__DOT__data_out),32);
    bufp->fullIData(oldp+71,(vlSelfRef.cpu__DOT__instruction_decoder__DOT__instruction),32);
    bufp->fullCData(oldp+72,(vlSelfRef.cpu__DOT__instruction_decoder__DOT__opcode),7);
    bufp->fullCData(oldp+73,(vlSelfRef.cpu__DOT__instruction_decoder__DOT__rs1),5);
    bufp->fullCData(oldp+74,(vlSelfRef.cpu__DOT__instruction_decoder__DOT__rs2),5);
    bufp->fullCData(oldp+75,(vlSelfRef.cpu__DOT__instruction_decoder__DOT__rd),5);
    bufp->fullCData(oldp+76,(vlSelfRef.cpu__DOT__instruction_decoder__DOT__funct3),3);
    bufp->fullCData(oldp+77,(vlSelfRef.cpu__DOT__instruction_decoder__DOT__funct7),7);
    bufp->fullIData(oldp+78,(vlSelfRef.cpu__DOT__instruction_decoder__DOT__immi_source),25);
    bufp->fullIData(oldp+79,(vlSelfRef.cpu__DOT__mux_1__DOT__i0),32);
    bufp->fullIData(oldp+80,(vlSelfRef.cpu__DOT__mux_1__DOT__i1),32);
    bufp->fullBit(oldp+81,(vlSelfRef.cpu__DOT__mux_1__DOT__a0));
    bufp->fullIData(oldp+82,(vlSelfRef.cpu__DOT__mux_1__DOT__q),32);
    bufp->fullIData(oldp+83,(vlSelfRef.cpu__DOT__mux_2__DOT__i0),32);
    bufp->fullIData(oldp+84,(vlSelfRef.cpu__DOT__mux_2__DOT__i1),32);
    bufp->fullBit(oldp+85,(vlSelfRef.cpu__DOT__mux_2__DOT__a0));
    bufp->fullIData(oldp+86,(vlSelfRef.cpu__DOT__mux_2__DOT__q),32);
    bufp->fullIData(oldp+87,(vlSelfRef.cpu__DOT__reg_data_mux__DOT__i0),32);
    bufp->fullIData(oldp+88,(vlSelfRef.cpu__DOT__reg_data_mux__DOT__i1),32);
    bufp->fullIData(oldp+89,(vlSelfRef.cpu__DOT__reg_data_mux__DOT__i2),32);
    bufp->fullIData(oldp+90,(vlSelfRef.cpu__DOT__reg_data_mux__DOT__i3),32);
    bufp->fullCData(oldp+91,(vlSelfRef.cpu__DOT__reg_data_mux__DOT__a0),2);
    bufp->fullIData(oldp+92,(vlSelfRef.cpu__DOT__reg_data_mux__DOT__q),32);
    bufp->fullBit(oldp+93,(vlSelfRef.cpu__DOT__register_file__DOT__clk));
    bufp->fullBit(oldp+94,(vlSelfRef.cpu__DOT__register_file__DOT__write_enable));
    bufp->fullCData(oldp+95,(vlSelfRef.cpu__DOT__register_file__DOT__rs1),5);
    bufp->fullCData(oldp+96,(vlSelfRef.cpu__DOT__register_file__DOT__rs2),5);
    bufp->fullCData(oldp+97,(vlSelfRef.cpu__DOT__register_file__DOT__rd),5);
    bufp->fullIData(oldp+98,(vlSelfRef.cpu__DOT__register_file__DOT__reg_data_in),32);
    bufp->fullBit(oldp+99,(vlSelfRef.cpu__DOT__register_file__DOT__reset));
    bufp->fullIData(oldp+100,(vlSelfRef.cpu__DOT__register_file__DOT__reg_data_out_1),32);
    bufp->fullIData(oldp+101,(vlSelfRef.cpu__DOT__register_file__DOT__reg_data_out_2),32);
    bufp->fullIData(oldp+102,(vlSelfRef.cpu__DOT__register_file__DOT__registers[0]),32);
    bufp->fullIData(oldp+103,(vlSelfRef.cpu__DOT__register_file__DOT__registers[1]),32);
    bufp->fullIData(oldp+104,(vlSelfRef.cpu__DOT__register_file__DOT__registers[2]),32);
    bufp->fullIData(oldp+105,(vlSelfRef.cpu__DOT__register_file__DOT__registers[3]),32);
    bufp->fullIData(oldp+106,(vlSelfRef.cpu__DOT__register_file__DOT__registers[4]),32);
    bufp->fullIData(oldp+107,(vlSelfRef.cpu__DOT__register_file__DOT__registers[5]),32);
    bufp->fullIData(oldp+108,(vlSelfRef.cpu__DOT__register_file__DOT__registers[6]),32);
    bufp->fullIData(oldp+109,(vlSelfRef.cpu__DOT__register_file__DOT__registers[7]),32);
    bufp->fullIData(oldp+110,(vlSelfRef.cpu__DOT__register_file__DOT__registers[8]),32);
    bufp->fullIData(oldp+111,(vlSelfRef.cpu__DOT__register_file__DOT__registers[9]),32);
    bufp->fullIData(oldp+112,(vlSelfRef.cpu__DOT__register_file__DOT__registers[10]),32);
    bufp->fullIData(oldp+113,(vlSelfRef.cpu__DOT__register_file__DOT__registers[11]),32);
    bufp->fullIData(oldp+114,(vlSelfRef.cpu__DOT__register_file__DOT__registers[12]),32);
    bufp->fullIData(oldp+115,(vlSelfRef.cpu__DOT__register_file__DOT__registers[13]),32);
    bufp->fullIData(oldp+116,(vlSelfRef.cpu__DOT__register_file__DOT__registers[14]),32);
    bufp->fullIData(oldp+117,(vlSelfRef.cpu__DOT__register_file__DOT__registers[15]),32);
    bufp->fullIData(oldp+118,(vlSelfRef.cpu__DOT__register_file__DOT__registers[16]),32);
    bufp->fullIData(oldp+119,(vlSelfRef.cpu__DOT__register_file__DOT__registers[17]),32);
    bufp->fullIData(oldp+120,(vlSelfRef.cpu__DOT__register_file__DOT__registers[18]),32);
    bufp->fullIData(oldp+121,(vlSelfRef.cpu__DOT__register_file__DOT__registers[19]),32);
    bufp->fullIData(oldp+122,(vlSelfRef.cpu__DOT__register_file__DOT__registers[20]),32);
    bufp->fullIData(oldp+123,(vlSelfRef.cpu__DOT__register_file__DOT__registers[21]),32);
    bufp->fullIData(oldp+124,(vlSelfRef.cpu__DOT__register_file__DOT__registers[22]),32);
    bufp->fullIData(oldp+125,(vlSelfRef.cpu__DOT__register_file__DOT__registers[23]),32);
    bufp->fullIData(oldp+126,(vlSelfRef.cpu__DOT__register_file__DOT__registers[24]),32);
    bufp->fullIData(oldp+127,(vlSelfRef.cpu__DOT__register_file__DOT__registers[25]),32);
    bufp->fullIData(oldp+128,(vlSelfRef.cpu__DOT__register_file__DOT__registers[26]),32);
    bufp->fullIData(oldp+129,(vlSelfRef.cpu__DOT__register_file__DOT__registers[27]),32);
    bufp->fullIData(oldp+130,(vlSelfRef.cpu__DOT__register_file__DOT__registers[28]),32);
    bufp->fullIData(oldp+131,(vlSelfRef.cpu__DOT__register_file__DOT__registers[29]),32);
    bufp->fullIData(oldp+132,(vlSelfRef.cpu__DOT__register_file__DOT__registers[30]),32);
    bufp->fullIData(oldp+133,(vlSelfRef.cpu__DOT__register_file__DOT__registers[31]),32);
    bufp->fullIData(oldp+134,(vlSelfRef.cpu__DOT__register_file__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+135,(vlSelfRef.cpu__DOT__rom__DOT__clk));
    bufp->fullBit(oldp+136,(vlSelfRef.cpu__DOT__rom__DOT__write_enable));
    bufp->fullCData(oldp+137,(vlSelfRef.cpu__DOT__rom__DOT__address),6);
    bufp->fullIData(oldp+138,(vlSelfRef.cpu__DOT__rom__DOT__data_in),32);
    bufp->fullBit(oldp+139,(vlSelfRef.cpu__DOT__rom__DOT__reset));
    bufp->fullIData(oldp+140,(vlSelfRef.cpu__DOT__rom__DOT__data_out),32);
    bufp->fullIData(oldp+141,(vlSelfRef.cpu__DOT__sign_extender__DOT__immi_source),25);
    bufp->fullCData(oldp+142,(vlSelfRef.cpu__DOT__sign_extender__DOT__opcode),7);
    bufp->fullIData(oldp+143,(vlSelfRef.cpu__DOT__sign_extender__DOT__imm_x),32);
}
