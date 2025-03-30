import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, Timer
import random
import numpy as np

@cocotb.test()
async def regfile_test(dut):
    # Start a 10 ns clock
    cocotb.start_soon(Clock(dut.clk, 10, units="ns").start())
    await RisingEdge(dut.clk)

    # Init and reset
    dut.reset.value = 0
    dut.write_enable.value = 0
    dut.rs1.value = 0
    dut.rs2.value = 0
    dut.rd.value = 0
    dut.reg_data_in.value = 0  

    await RisingEdge(dut.clk)   
    dut.reset.value = 1  # realease reset_n   
    await RisingEdge(dut.clk)    

    # fill a heorical state of the regs, all 0s for starters
    theorical_regs = [0 for _ in range(32)]

    # Loop to write and read random values, 1000 test shall be enough
    for _ in range(1000): 
        # Generate a random register address (1 to 31, skip 0)
        rs1 = random.randint(1, 31)
        rs2 = random.randint(1, 31)
        rd = random.randint(1, 31)
        write_value = random.randint(0, 0xFFFFFFFF)

        # perform reads
        await Timer(1, units="ns") # wait a ns to test async read
        dut.rs1.value = rs1
        dut.rs2.value = rs2
        await Timer(1, units="ns")
        assert dut.reg_data_out_1.value == theorical_regs[rs1]
        assert dut.reg_data_out_2.value == theorical_regs[rs2]

        # perform a random write
        dut.rd.value = rd
        dut.write_enable.value = 1
        dut.reg_data_in = write_value
        await RisingEdge(dut.clk)
        dut.write_enable.value = 0
        theorical_regs[rd] = write_value
        await Timer(1, units="ns")

    # try to write at 0 and check if it's still 0
    await Timer(1, units="ns")
    dut.rd.value = 0
    dut.write_enable.value = 0
    dut.reg_data_in = 0xAEAEAEAE
    await RisingEdge(dut.clk)
    dut.write_enable.value = 1
    theorical_regs[rd] = 0

    await Timer(1, units="ns") # wait a ns to test async read
    dut.rs1.value = 0
    await Timer(1, units="ns")
    print(dut.reg_data_out_1.value)
    assert int(dut.reg_data_out_1.value) == 0

    print("Random write/read test completed successfully.")