// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop__pch.h"
#include "Vtop.h"
#include "Vtop___024root.h"

// FUNCTIONS
Vtop__Syms::~Vtop__Syms()
{

    // Tear down scope hierarchy
    __Vhier.remove(0, &__Vscope_cpu);
    __Vhier.remove(&__Vscope_cpu, &__Vscope_cpu__alu);
    __Vhier.remove(&__Vscope_cpu, &__Vscope_cpu__alu_mux_1);
    __Vhier.remove(&__Vscope_cpu, &__Vscope_cpu__alu_mux_2);
    __Vhier.remove(&__Vscope_cpu, &__Vscope_cpu__controller);
    __Vhier.remove(&__Vscope_cpu, &__Vscope_cpu__flash);
    __Vhier.remove(&__Vscope_cpu, &__Vscope_cpu__instruction_decoder);
    __Vhier.remove(&__Vscope_cpu, &__Vscope_cpu__mux_1);
    __Vhier.remove(&__Vscope_cpu, &__Vscope_cpu__mux_2);
    __Vhier.remove(&__Vscope_cpu, &__Vscope_cpu__reg_data_mux);
    __Vhier.remove(&__Vscope_cpu, &__Vscope_cpu__register_file);
    __Vhier.remove(&__Vscope_cpu, &__Vscope_cpu__rom);
    __Vhier.remove(&__Vscope_cpu, &__Vscope_cpu__sign_extender);
    __Vhier.remove(&__Vscope_cpu__register_file, &__Vscope_cpu__register_file__unnamedblk1);

}

Vtop__Syms::Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(63);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_TOP.configure(this, name(), "TOP", "TOP", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_cpu.configure(this, name(), "cpu", "cpu", "cpu", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_cpu__alu.configure(this, name(), "cpu.alu", "alu", "alu", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_cpu__alu_mux_1.configure(this, name(), "cpu.alu_mux_1", "alu_mux_1", "generic_mux", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_cpu__alu_mux_2.configure(this, name(), "cpu.alu_mux_2", "alu_mux_2", "generic_mux", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_cpu__controller.configure(this, name(), "cpu.controller", "controller", "controller", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_cpu__flash.configure(this, name(), "cpu.flash", "flash", "memory", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_cpu__instruction_decoder.configure(this, name(), "cpu.instruction_decoder", "instruction_decoder", "instruction_decoder", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_cpu__mux_1.configure(this, name(), "cpu.mux_1", "mux_1", "generic_mux", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_cpu__mux_2.configure(this, name(), "cpu.mux_2", "mux_2", "generic_mux", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_cpu__reg_data_mux.configure(this, name(), "cpu.reg_data_mux", "reg_data_mux", "generic_mux_two", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_cpu__register_file.configure(this, name(), "cpu.register_file", "register_file", "register_file", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_cpu__register_file__unnamedblk1.configure(this, name(), "cpu.register_file.unnamedblk1", "unnamedblk1", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_cpu__rom.configure(this, name(), "cpu.rom", "rom", "memory", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_cpu__sign_extender.configure(this, name(), "cpu.sign_extender", "sign_extender", "sign_extender", -9, VerilatedScope::SCOPE_MODULE);

    // Set up scope hierarchy
    __Vhier.add(0, &__Vscope_cpu);
    __Vhier.add(&__Vscope_cpu, &__Vscope_cpu__alu);
    __Vhier.add(&__Vscope_cpu, &__Vscope_cpu__alu_mux_1);
    __Vhier.add(&__Vscope_cpu, &__Vscope_cpu__alu_mux_2);
    __Vhier.add(&__Vscope_cpu, &__Vscope_cpu__controller);
    __Vhier.add(&__Vscope_cpu, &__Vscope_cpu__flash);
    __Vhier.add(&__Vscope_cpu, &__Vscope_cpu__instruction_decoder);
    __Vhier.add(&__Vscope_cpu, &__Vscope_cpu__mux_1);
    __Vhier.add(&__Vscope_cpu, &__Vscope_cpu__mux_2);
    __Vhier.add(&__Vscope_cpu, &__Vscope_cpu__reg_data_mux);
    __Vhier.add(&__Vscope_cpu, &__Vscope_cpu__register_file);
    __Vhier.add(&__Vscope_cpu, &__Vscope_cpu__rom);
    __Vhier.add(&__Vscope_cpu, &__Vscope_cpu__sign_extender);
    __Vhier.add(&__Vscope_cpu__register_file, &__Vscope_cpu__register_file__unnamedblk1);

    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_TOP.varInsert(__Vfinal,"clk", &(TOP.clk), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"reset", &(TOP.reset), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_cpu.varInsert(__Vfinal,"alu_a_sel", &(TOP.cpu__DOT__alu_a_sel), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cpu.varInsert(__Vfinal,"alu_b_sel", &(TOP.cpu__DOT__alu_b_sel), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cpu.varInsert(__Vfinal,"alu_control", &(TOP.cpu__DOT__alu_control), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cpu.varInsert(__Vfinal,"alu_result", &(TOP.cpu__DOT__alu_result), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cpu.varInsert(__Vfinal,"clk", &(TOP.cpu__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cpu.varInsert(__Vfinal,"funct3", &(TOP.cpu__DOT__funct3), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,2,0);
        __Vscope_cpu.varInsert(__Vfinal,"funct7", &(TOP.cpu__DOT__funct7), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,6,0);
        __Vscope_cpu.varInsert(__Vfinal,"imm_x", &(TOP.cpu__DOT__imm_x), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cpu.varInsert(__Vfinal,"immi_source", &(TOP.cpu__DOT__immi_source), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,24,0);
        __Vscope_cpu.varInsert(__Vfinal,"instruction", &(TOP.cpu__DOT__instruction), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cpu.varInsert(__Vfinal,"last_bit", &(TOP.cpu__DOT__last_bit), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cpu.varInsert(__Vfinal,"mem_clk", &(TOP.cpu__DOT__mem_clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cpu.varInsert(__Vfinal,"opcode", &(TOP.cpu__DOT__opcode), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,6,0);
        __Vscope_cpu.varInsert(__Vfinal,"operand1", &(TOP.cpu__DOT__operand1), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cpu.varInsert(__Vfinal,"operand2", &(TOP.cpu__DOT__operand2), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cpu.varInsert(__Vfinal,"pc", &(TOP.cpu__DOT__pc), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cpu.varInsert(__Vfinal,"pc_alu_result", &(TOP.cpu__DOT__pc_alu_result), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cpu.varInsert(__Vfinal,"pc_alu_sel", &(TOP.cpu__DOT__pc_alu_sel), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cpu.varInsert(__Vfinal,"pc_clk", &(TOP.cpu__DOT__pc_clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cpu.varInsert(__Vfinal,"pc_next", &(TOP.cpu__DOT__pc_next), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cpu.varInsert(__Vfinal,"pc_next_result", &(TOP.cpu__DOT__pc_next_result), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cpu.varInsert(__Vfinal,"pc_next_sel", &(TOP.cpu__DOT__pc_next_sel), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cpu.varInsert(__Vfinal,"rd", &(TOP.cpu__DOT__rd), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_cpu.varInsert(__Vfinal,"reg_data_in", &(TOP.cpu__DOT__reg_data_in), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cpu.varInsert(__Vfinal,"reg_data_out_1", &(TOP.cpu__DOT__reg_data_out_1), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cpu.varInsert(__Vfinal,"reg_data_out_2", &(TOP.cpu__DOT__reg_data_out_2), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cpu.varInsert(__Vfinal,"reg_data_sel", &(TOP.cpu__DOT__reg_data_sel), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,1,0);
        __Vscope_cpu.varInsert(__Vfinal,"reset", &(TOP.cpu__DOT__reset), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cpu.varInsert(__Vfinal,"rs1", &(TOP.cpu__DOT__rs1), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_cpu.varInsert(__Vfinal,"rs2", &(TOP.cpu__DOT__rs2), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_cpu.varInsert(__Vfinal,"zero", &(TOP.cpu__DOT__zero), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cpu__alu.varInsert(__Vfinal,"alu_control", &(TOP.cpu__DOT__alu__DOT__alu_control), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cpu__alu.varInsert(__Vfinal,"alu_result", &(TOP.cpu__DOT__alu__DOT__alu_result), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cpu__alu.varInsert(__Vfinal,"last_bit", &(TOP.cpu__DOT__alu__DOT__last_bit), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cpu__alu.varInsert(__Vfinal,"operand1", &(TOP.cpu__DOT__alu__DOT__operand1), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cpu__alu.varInsert(__Vfinal,"operand2", &(TOP.cpu__DOT__alu__DOT__operand2), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cpu__alu.varInsert(__Vfinal,"shamt", &(TOP.cpu__DOT__alu__DOT__shamt), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_cpu__alu.varInsert(__Vfinal,"zero", &(TOP.cpu__DOT__alu__DOT__zero), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cpu__alu_mux_1.varInsert(__Vfinal,"a0", &(TOP.cpu__DOT__alu_mux_1__DOT__a0), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cpu__alu_mux_1.varInsert(__Vfinal,"i0", &(TOP.cpu__DOT__alu_mux_1__DOT__i0), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cpu__alu_mux_1.varInsert(__Vfinal,"i1", &(TOP.cpu__DOT__alu_mux_1__DOT__i1), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cpu__alu_mux_1.varInsert(__Vfinal,"q", &(TOP.cpu__DOT__alu_mux_1__DOT__q), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cpu__alu_mux_2.varInsert(__Vfinal,"a0", &(TOP.cpu__DOT__alu_mux_2__DOT__a0), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cpu__alu_mux_2.varInsert(__Vfinal,"i0", &(TOP.cpu__DOT__alu_mux_2__DOT__i0), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cpu__alu_mux_2.varInsert(__Vfinal,"i1", &(TOP.cpu__DOT__alu_mux_2__DOT__i1), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cpu__alu_mux_2.varInsert(__Vfinal,"q", &(TOP.cpu__DOT__alu_mux_2__DOT__q), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cpu__controller.varInsert(__Vfinal,"alu_a_sel", &(TOP.cpu__DOT__controller__DOT__alu_a_sel), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cpu__controller.varInsert(__Vfinal,"alu_b_sel", &(TOP.cpu__DOT__controller__DOT__alu_b_sel), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cpu__controller.varInsert(__Vfinal,"alu_control", &(TOP.cpu__DOT__controller__DOT__alu_control), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cpu__controller.varInsert(__Vfinal,"alu_state", &(TOP.cpu__DOT__controller__DOT__alu_state), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,1,0);
        __Vscope_cpu__controller.varInsert(__Vfinal,"clock", &(TOP.cpu__DOT__controller__DOT__clock), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cpu__controller.varInsert(__Vfinal,"funct3", &(TOP.cpu__DOT__controller__DOT__funct3), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,2,0);
        __Vscope_cpu__controller.varInsert(__Vfinal,"funct7", &(TOP.cpu__DOT__controller__DOT__funct7), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,6,0);
        __Vscope_cpu__controller.varInsert(__Vfinal,"mem_clk", &(TOP.cpu__DOT__controller__DOT__mem_clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cpu__controller.varInsert(__Vfinal,"opcode", &(TOP.cpu__DOT__controller__DOT__opcode), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,6,0);
        __Vscope_cpu__controller.varInsert(__Vfinal,"pc_alu_sel", &(TOP.cpu__DOT__controller__DOT__pc_alu_sel), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cpu__controller.varInsert(__Vfinal,"pc_clk", &(TOP.cpu__DOT__controller__DOT__pc_clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cpu__controller.varInsert(__Vfinal,"pc_next_sel", &(TOP.cpu__DOT__controller__DOT__pc_next_sel), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cpu__controller.varInsert(__Vfinal,"reg_data_sel", &(TOP.cpu__DOT__controller__DOT__reg_data_sel), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,1,0);
        __Vscope_cpu__controller.varInsert(__Vfinal,"reset", &(TOP.cpu__DOT__controller__DOT__reset), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cpu__controller.varInsert(__Vfinal,"zero", &(TOP.cpu__DOT__controller__DOT__zero), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cpu__flash.varInsert(__Vfinal,"ADDR_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.cpu__DOT__flash__DOT__ADDR_WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cpu__flash.varInsert(__Vfinal,"DATA_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.cpu__DOT__flash__DOT__DATA_WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cpu__flash.varInsert(__Vfinal,"NVM_INIT", const_cast<void*>(static_cast<const void*>(&(TOP.cpu__DOT__flash__DOT__NVM_INIT))), true, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,1 ,63,0);
        __Vscope_cpu__flash.varInsert(__Vfinal,"address", &(TOP.cpu__DOT__flash__DOT__address), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,5,0);
        __Vscope_cpu__flash.varInsert(__Vfinal,"array_reg", &(TOP.cpu__DOT__flash__DOT__array_reg), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,0,63);
        __Vscope_cpu__flash.varInsert(__Vfinal,"clk", &(TOP.cpu__DOT__flash__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cpu__flash.varInsert(__Vfinal,"data_in", &(TOP.cpu__DOT__flash__DOT__data_in), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cpu__flash.varInsert(__Vfinal,"data_out", &(TOP.cpu__DOT__flash__DOT__data_out), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cpu__flash.varInsert(__Vfinal,"reset", &(TOP.cpu__DOT__flash__DOT__reset), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cpu__flash.varInsert(__Vfinal,"write_enable", &(TOP.cpu__DOT__flash__DOT__write_enable), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cpu__instruction_decoder.varInsert(__Vfinal,"funct3", &(TOP.cpu__DOT__instruction_decoder__DOT__funct3), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,2,0);
        __Vscope_cpu__instruction_decoder.varInsert(__Vfinal,"funct7", &(TOP.cpu__DOT__instruction_decoder__DOT__funct7), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,6,0);
        __Vscope_cpu__instruction_decoder.varInsert(__Vfinal,"immi_source", &(TOP.cpu__DOT__instruction_decoder__DOT__immi_source), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,24,0);
        __Vscope_cpu__instruction_decoder.varInsert(__Vfinal,"instruction", &(TOP.cpu__DOT__instruction_decoder__DOT__instruction), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cpu__instruction_decoder.varInsert(__Vfinal,"opcode", &(TOP.cpu__DOT__instruction_decoder__DOT__opcode), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,6,0);
        __Vscope_cpu__instruction_decoder.varInsert(__Vfinal,"rd", &(TOP.cpu__DOT__instruction_decoder__DOT__rd), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_cpu__instruction_decoder.varInsert(__Vfinal,"rs1", &(TOP.cpu__DOT__instruction_decoder__DOT__rs1), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_cpu__instruction_decoder.varInsert(__Vfinal,"rs2", &(TOP.cpu__DOT__instruction_decoder__DOT__rs2), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_cpu__mux_1.varInsert(__Vfinal,"a0", &(TOP.cpu__DOT__mux_1__DOT__a0), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cpu__mux_1.varInsert(__Vfinal,"i0", &(TOP.cpu__DOT__mux_1__DOT__i0), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cpu__mux_1.varInsert(__Vfinal,"i1", &(TOP.cpu__DOT__mux_1__DOT__i1), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cpu__mux_1.varInsert(__Vfinal,"q", &(TOP.cpu__DOT__mux_1__DOT__q), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cpu__mux_2.varInsert(__Vfinal,"a0", &(TOP.cpu__DOT__mux_2__DOT__a0), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cpu__mux_2.varInsert(__Vfinal,"i0", &(TOP.cpu__DOT__mux_2__DOT__i0), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cpu__mux_2.varInsert(__Vfinal,"i1", &(TOP.cpu__DOT__mux_2__DOT__i1), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cpu__mux_2.varInsert(__Vfinal,"q", &(TOP.cpu__DOT__mux_2__DOT__q), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cpu__reg_data_mux.varInsert(__Vfinal,"a0", &(TOP.cpu__DOT__reg_data_mux__DOT__a0), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,1,0);
        __Vscope_cpu__reg_data_mux.varInsert(__Vfinal,"i0", &(TOP.cpu__DOT__reg_data_mux__DOT__i0), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cpu__reg_data_mux.varInsert(__Vfinal,"i1", &(TOP.cpu__DOT__reg_data_mux__DOT__i1), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cpu__reg_data_mux.varInsert(__Vfinal,"i2", &(TOP.cpu__DOT__reg_data_mux__DOT__i2), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cpu__reg_data_mux.varInsert(__Vfinal,"i3", &(TOP.cpu__DOT__reg_data_mux__DOT__i3), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cpu__reg_data_mux.varInsert(__Vfinal,"q", &(TOP.cpu__DOT__reg_data_mux__DOT__q), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cpu__register_file.varInsert(__Vfinal,"ADDR_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.cpu__DOT__register_file__DOT__ADDR_WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cpu__register_file.varInsert(__Vfinal,"DATA_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.cpu__DOT__register_file__DOT__DATA_WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cpu__register_file.varInsert(__Vfinal,"clk", &(TOP.cpu__DOT__register_file__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cpu__register_file.varInsert(__Vfinal,"rd", &(TOP.cpu__DOT__register_file__DOT__rd), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_cpu__register_file.varInsert(__Vfinal,"reg_data_in", &(TOP.cpu__DOT__register_file__DOT__reg_data_in), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cpu__register_file.varInsert(__Vfinal,"reg_data_out_1", &(TOP.cpu__DOT__register_file__DOT__reg_data_out_1), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cpu__register_file.varInsert(__Vfinal,"reg_data_out_2", &(TOP.cpu__DOT__register_file__DOT__reg_data_out_2), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cpu__register_file.varInsert(__Vfinal,"registers", &(TOP.cpu__DOT__register_file__DOT__registers), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,0,31);
        __Vscope_cpu__register_file.varInsert(__Vfinal,"reset", &(TOP.cpu__DOT__register_file__DOT__reset), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cpu__register_file.varInsert(__Vfinal,"rs1", &(TOP.cpu__DOT__register_file__DOT__rs1), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_cpu__register_file.varInsert(__Vfinal,"rs2", &(TOP.cpu__DOT__register_file__DOT__rs2), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_cpu__register_file.varInsert(__Vfinal,"write_enable", &(TOP.cpu__DOT__register_file__DOT__write_enable), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cpu__register_file__unnamedblk1.varInsert(__Vfinal,"i", &(TOP.cpu__DOT__register_file__DOT__unnamedblk1__DOT__i), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
        __Vscope_cpu__rom.varInsert(__Vfinal,"ADDR_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.cpu__DOT__rom__DOT__ADDR_WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cpu__rom.varInsert(__Vfinal,"DATA_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.cpu__DOT__rom__DOT__DATA_WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cpu__rom.varInsert(__Vfinal,"NVM_INIT", const_cast<void*>(static_cast<const void*>(&(TOP.cpu__DOT__rom__DOT__NVM_INIT))), true, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,1 ,55,0);
        __Vscope_cpu__rom.varInsert(__Vfinal,"address", &(TOP.cpu__DOT__rom__DOT__address), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,5,0);
        __Vscope_cpu__rom.varInsert(__Vfinal,"array_reg", &(TOP.cpu__DOT__rom__DOT__array_reg), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,0,63);
        __Vscope_cpu__rom.varInsert(__Vfinal,"clk", &(TOP.cpu__DOT__rom__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cpu__rom.varInsert(__Vfinal,"data_in", &(TOP.cpu__DOT__rom__DOT__data_in), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cpu__rom.varInsert(__Vfinal,"data_out", &(TOP.cpu__DOT__rom__DOT__data_out), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cpu__rom.varInsert(__Vfinal,"reset", &(TOP.cpu__DOT__rom__DOT__reset), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cpu__rom.varInsert(__Vfinal,"write_enable", &(TOP.cpu__DOT__rom__DOT__write_enable), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cpu__sign_extender.varInsert(__Vfinal,"imm_x", &(TOP.cpu__DOT__sign_extender__DOT__imm_x), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cpu__sign_extender.varInsert(__Vfinal,"immi_source", &(TOP.cpu__DOT__sign_extender__DOT__immi_source), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,24,0);
        __Vscope_cpu__sign_extender.varInsert(__Vfinal,"opcode", &(TOP.cpu__DOT__sign_extender__DOT__opcode), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,6,0);
    }
}
