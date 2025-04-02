// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

// Parameter definitions for Vtop___024root
constexpr IData/*31:0*/ Vtop___024root::cpu__DOT__rom__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::cpu__DOT__rom__DOT__ADDR_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::cpu__DOT__register_file__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::cpu__DOT__register_file__DOT__ADDR_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::cpu__DOT__flash__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::cpu__DOT__flash__DOT__ADDR_WIDTH;
constexpr QData/*55:0*/ Vtop___024root::cpu__DOT__rom__DOT__NVM_INIT;
constexpr QData/*63:0*/ Vtop___024root::cpu__DOT__flash__DOT__NVM_INIT;


void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf);

Vtop___024root::Vtop___024root(Vtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop___024root___ctor_var_reset(this);
}

void Vtop___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtop___024root::~Vtop___024root() {
}
