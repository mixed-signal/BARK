import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, Timer

@cocotb.coroutine
async def reset_memory(dut):
    await RisingEdge(dut.clk)
    dut.reset.value = 0
    dut.write_enable.value = 0
    dut.address.value = 0
    dut.data_in.value = 0
    await RisingEdge(dut.clk)
    await RisingEdge(dut.clk)
    dut.reset.value = 1

    print("reset done !")

    # Assert all is 0 after reset
    for address in range(2 ** dut.ADDR_WIDTH.value):
        dut.address.value = address
        await Timer(1, units="ns")
        # just 32 zeroes, you can also use int()
        assert dut.data_out.value == "00000000000000000000000000000000"


@cocotb.test()
async def memory_data_test(dut):
    # INIT MEMORY
    cocotb.start_soon(Clock(dut.clk, 1, units="ns").start())
    await reset_memory(dut)
        
    # Test: Write and read back data
    test_data = [
        (0, 0xDEADBEEF),
        (4, 0xCAFEBABE),
        (8, 0x12345678),
        (12, 0xA5A5A5A5)
    ]


    for address, data in test_data:
        dut.address.value = address
        dut.data_in.value = data

        dut.write_enable.value = 1
        await RisingEdge(dut.clk)
        dut.write_enable.value = 0
        await RisingEdge(dut.clk)

        dut.address.value = address
        await RisingEdge(dut.clk)
        assert dut.data_out.value == data, f"Error at address {address}: expected {hex(data)}, got {hex(dut.data_out.value)}"

    for i in range(40,4):
        dut.address.value = i
        dut.data_in.value = i
        dut.write_enable.value = 1
        await RisingEdge(dut.clk)

    dut.write_enable.value = 0
    for i in range(40,4):
        dut.address.value = i
        await RisingEdge(dut.clk)
        expected_value = i
        assert dut.data_out.value == expected_value, f"Expected {expected_value}, got {dut.data_out.value} at address {i}"