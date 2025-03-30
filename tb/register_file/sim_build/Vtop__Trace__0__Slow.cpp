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
    tracep->declBit(c+2,0,"write_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+4,0,"rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+5,0,"rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+6,0,"reg_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+7,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+8,0,"reg_data_out_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"reg_data_out_2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("register_file", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+52,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+53,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+10,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"write_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+12,0,"rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+13,0,"rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+14,0,"rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+15,0,"reg_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+16,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17,0,"reg_data_out_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+18,0,"reg_data_out_2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("registers", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+19+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+51,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
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
    bufp->fullIData(oldp+52,(0x20U),32);
    bufp->fullIData(oldp+53,(5U),32);
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
    bufp->fullBit(oldp+2,(vlSelfRef.write_enable));
    bufp->fullCData(oldp+3,(vlSelfRef.rs1),5);
    bufp->fullCData(oldp+4,(vlSelfRef.rs2),5);
    bufp->fullCData(oldp+5,(vlSelfRef.rd),5);
    bufp->fullIData(oldp+6,(vlSelfRef.reg_data_in),32);
    bufp->fullBit(oldp+7,(vlSelfRef.reset));
    bufp->fullIData(oldp+8,(vlSelfRef.reg_data_out_1),32);
    bufp->fullIData(oldp+9,(vlSelfRef.reg_data_out_2),32);
    bufp->fullBit(oldp+10,(vlSelfRef.register_file__DOT__clk));
    bufp->fullBit(oldp+11,(vlSelfRef.register_file__DOT__write_enable));
    bufp->fullCData(oldp+12,(vlSelfRef.register_file__DOT__rs1),5);
    bufp->fullCData(oldp+13,(vlSelfRef.register_file__DOT__rs2),5);
    bufp->fullCData(oldp+14,(vlSelfRef.register_file__DOT__rd),5);
    bufp->fullIData(oldp+15,(vlSelfRef.register_file__DOT__reg_data_in),32);
    bufp->fullBit(oldp+16,(vlSelfRef.register_file__DOT__reset));
    bufp->fullIData(oldp+17,(vlSelfRef.register_file__DOT__reg_data_out_1),32);
    bufp->fullIData(oldp+18,(vlSelfRef.register_file__DOT__reg_data_out_2),32);
    bufp->fullIData(oldp+19,(vlSelfRef.register_file__DOT__registers[0]),32);
    bufp->fullIData(oldp+20,(vlSelfRef.register_file__DOT__registers[1]),32);
    bufp->fullIData(oldp+21,(vlSelfRef.register_file__DOT__registers[2]),32);
    bufp->fullIData(oldp+22,(vlSelfRef.register_file__DOT__registers[3]),32);
    bufp->fullIData(oldp+23,(vlSelfRef.register_file__DOT__registers[4]),32);
    bufp->fullIData(oldp+24,(vlSelfRef.register_file__DOT__registers[5]),32);
    bufp->fullIData(oldp+25,(vlSelfRef.register_file__DOT__registers[6]),32);
    bufp->fullIData(oldp+26,(vlSelfRef.register_file__DOT__registers[7]),32);
    bufp->fullIData(oldp+27,(vlSelfRef.register_file__DOT__registers[8]),32);
    bufp->fullIData(oldp+28,(vlSelfRef.register_file__DOT__registers[9]),32);
    bufp->fullIData(oldp+29,(vlSelfRef.register_file__DOT__registers[10]),32);
    bufp->fullIData(oldp+30,(vlSelfRef.register_file__DOT__registers[11]),32);
    bufp->fullIData(oldp+31,(vlSelfRef.register_file__DOT__registers[12]),32);
    bufp->fullIData(oldp+32,(vlSelfRef.register_file__DOT__registers[13]),32);
    bufp->fullIData(oldp+33,(vlSelfRef.register_file__DOT__registers[14]),32);
    bufp->fullIData(oldp+34,(vlSelfRef.register_file__DOT__registers[15]),32);
    bufp->fullIData(oldp+35,(vlSelfRef.register_file__DOT__registers[16]),32);
    bufp->fullIData(oldp+36,(vlSelfRef.register_file__DOT__registers[17]),32);
    bufp->fullIData(oldp+37,(vlSelfRef.register_file__DOT__registers[18]),32);
    bufp->fullIData(oldp+38,(vlSelfRef.register_file__DOT__registers[19]),32);
    bufp->fullIData(oldp+39,(vlSelfRef.register_file__DOT__registers[20]),32);
    bufp->fullIData(oldp+40,(vlSelfRef.register_file__DOT__registers[21]),32);
    bufp->fullIData(oldp+41,(vlSelfRef.register_file__DOT__registers[22]),32);
    bufp->fullIData(oldp+42,(vlSelfRef.register_file__DOT__registers[23]),32);
    bufp->fullIData(oldp+43,(vlSelfRef.register_file__DOT__registers[24]),32);
    bufp->fullIData(oldp+44,(vlSelfRef.register_file__DOT__registers[25]),32);
    bufp->fullIData(oldp+45,(vlSelfRef.register_file__DOT__registers[26]),32);
    bufp->fullIData(oldp+46,(vlSelfRef.register_file__DOT__registers[27]),32);
    bufp->fullIData(oldp+47,(vlSelfRef.register_file__DOT__registers[28]),32);
    bufp->fullIData(oldp+48,(vlSelfRef.register_file__DOT__registers[29]),32);
    bufp->fullIData(oldp+49,(vlSelfRef.register_file__DOT__registers[30]),32);
    bufp->fullIData(oldp+50,(vlSelfRef.register_file__DOT__registers[31]),32);
    bufp->fullIData(oldp+51,(vlSelfRef.register_file__DOT__unnamedblk1__DOT__i),32);
}
