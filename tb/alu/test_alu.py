import cocotb
from cocotb.triggers import Timer
import random

def binary_to_hex(bin_str):
    # Convert binary string to hexadecimal
    hex_str = hex(int(str(bin_str), 2))[2:]
    hex_str = hex_str.zfill(8)
    return hex_str.upper()

@cocotb.test()
async def add_test(dut):
    await Timer(1, units="ns")
    dut.alu_control.value = 0b0000
    for _ in range(1000):
        operand1 = random.randint(0,0xFFFFFFFF)
        operand2 = random.randint(0,0xFFFFFFFF)
        dut.operand1.value = operand1
        dut.operand2.value = operand2
        expected = (operand1 + operand2) & 0xFFFFFFFF
        await Timer(1, units="ns")
        assert int(dut.alu_result.value) == expected

@cocotb.test()
async def and_test(dut):
    await Timer(1, units="ns")
    dut.alu_control.value = 0b0010
    for _ in range(1000):
        operand1 = random.randint(0,0xFFFFFFFF)
        operand2 = random.randint(0,0xFFFFFFFF)
        dut.operand1.value = operand1
        dut.operand2.value = operand2
        expected = operand1 & operand2
        await Timer(1, units="ns")
        assert int(dut.alu_result.value) == expected       

@cocotb.test()
async def or_test(dut):
    await Timer(1, units="ns")
    dut.alu_control.value = 0b0011
    for _ in range(1000):
        operand1 = random.randint(0,0xFFFFFFFF)
        operand2 = random.randint(0,0xFFFFFFFF)
        dut.operand1.value = operand1
        dut.operand2.value = operand2
        expected = operand1 | operand2
        await Timer(1, units="ns")
        assert int(dut.alu_result.value) == expected   

@cocotb.test()
async def sub_test(dut):
    await Timer(1, units="ns")
    dut.alu_control.value = 0b0001
    for _ in range(1000):
        operand1 = random.randint(0,0xFFFFFFFF)
        operand2 = random.randint(0,0xFFFFFFFF)
        # operand1 = random.randint(0,0xFF)
        # operand2 = random.randint(0,0xFF)
        # print(bin(operand1)[2:].zfill(8))
        # print(bin(operand2)[2:].zfill(8))
        # print(bin(operand1 - operand2)[2:].zfill(8))
        dut.operand1.value = operand1
        dut.operand2.value = operand2
        expected = (operand1 - operand2) & 0xFFFFFFFF

        await Timer(1, units="ns")

        assert str(dut.alu_result.value) == bin(expected)[2:].zfill(32)
        assert binary_to_hex(dut.alu_result.value) == hex(expected)[2:].zfill(8).upper()
        assert int(str(dut.alu_result.value),2) == expected

# @cocotb.test()
# async def slt_test(dut):
#     await Timer(1, units="ns")
#     dut.alu_control.value = 0b0101
#     for _ in range(1000):
#         operand1 = random.randint(0,0xFFFFFFFF)
#         operand2 = random.randint(0,0xFFFFFFFF)
#         dut.operand1.value = operand1
#         dut.operand2.value = operand2

#         await Timer(1, units="ns")

#         # if scr1 pos, operand2 pos
#         if operand1 >> 31 == 0 and operand2 >> 31 == 0:
#             expected = int(operand1 < operand2)
#         # if scr1 pos, operand2 neg
#         elif operand1 >> 31 == 0 and operand2 >> 31 == 1:
#             expected = int(operand1 < (operand2 - (1<<32)))
#         # if scr1 neg, operand2 pos
#         elif operand1 >> 31 == 1 and operand2 >> 31 == 0:
#             expected = int((operand1 - (1<<32)) < operand2)
#         # if scr1 neg, operand2 neg
#         elif operand1 >> 31 == 1 and operand2 >> 31 == 1:
#             expected = int((operand1 - (1<<32)) < (operand2 - (1<<32)))

#         assert int(dut.alu_result.value) == expected
#         assert dut.alu_result.value == 31*"0" + str(int(dut.alu_result.value))

# @cocotb.test()
# async def sltu_test(dut):
#     await Timer(1, units="ns")
#     dut.alu_control.value = 0b0111
#     for _ in range(1000):
#         operand1 = random.randint(0,0xFFFFFFFF)
#         operand2 = random.randint(0,0xFFFFFFFF)
#         dut.operand1.value = operand1
#         dut.operand2.value = operand2

#         await Timer(1, units="ns")
#         expected = int(operand1 < operand2)

#         assert dut.alu_result.value == 31*"0" + str(int(dut.alu_result.value))

@cocotb.test()
async def xor_test(dut):
    await Timer(1, units="ns")
    dut.alu_control.value = 0b0100 #xor
    for _ in range(1000):
        operand1 = random.randint(0,0xFFFFFFFF)
        operand2 = random.randint(0,0xFFFFFFFF)
        dut.operand1.value = operand1
        dut.operand2.value = operand2

        await Timer(1, units="ns")
        expected = operand1 ^ operand2

        assert int(dut.alu_result.value) ==  int(expected)

# @cocotb.test()
# async def sll_test(dut):
#     await Timer(1, units="ns")
#     dut.alu_control.value = 0b0100 #sll
#     for _ in range(1000):
#         operand1 = random.randint(0,0xFFFFFFFF)
#         operand2 = random.randint(0,0xFFFFFFFF)
#         dut.operand1.value = operand1
#         shamt = operand2 & 0b11111
#         dut.operand2.value = shamt

#         await Timer(1, units="ns")
#         expected = (operand1 << shamt) & 0xFFFFFFFF

#         assert int(dut.alu_result.value) ==  int(expected)

# @cocotb.test()
# async def srl_test(dut):
#     await Timer(1, units="ns")
#     dut.alu_control.value = 0b0110 #srl
#     for _ in range(1000):
#         operand1 = random.randint(0,0xFFFFFFFF)
#         operand2 = random.randint(0,0xFFFFFFFF)
#         # pyhton only perfomrs sra
#         # but here, pyhton interprets number as non-signed by default, meaning the right shift will
#         # unconditionally fill upper bits with 0s and we can pass the test like this :
#         dut.operand1.value = operand1
#         shamt = operand2 & 0b11111
#         dut.operand2.value = shamt

#         await Timer(1, units="ns")
#         expected = (operand1 >> shamt) & 0xFFFFFFFF

#         assert int(dut.alu_result.value) ==  int(expected)

# @cocotb.test()
# async def sra_test(dut):
#     await Timer(1, units="ns")
#     dut.alu_control.value = 0b1001 #sra
#     for _ in range(1000):
#         # pyhton only perfomrs sra
#         # We have to hint python of the sign so we disociate signed and unsigned

#         # UNSIGNED TESTS
#         operand1 = random.randint(0,0x7FFFFFFF)
#         operand2 = random.randint(0,0xFFFFFFFF) #shamt can be whatever
#         dut.operand1.value = operand1
#         shamt = operand2 & 0b11111
#         dut.operand2.value = shamt

#         await Timer(1, units="ns")
#         expected = (operand1 >> shamt) & 0xFFFFFFFF

#         assert int(dut.alu_result.value) ==  int(expected)

#         # SIGNED TESTS
#         operand1 = random.randint(0x80000000,0xFFFFFFFF)
#         operand2 = random.randint(0,0xFFFFFFFF) #shamt can be whatever
#         dut.operand1.value = operand1
#         shamt = operand2 & 0b11111
#         dut.operand2.value = shamt

#         await Timer(1, units="ns")
#         # We perform an - 1<<32 to get the negative value for python and then apply the sra.
#         # We then mash on 32 bits to get the raw bits back to compare
#         expected = ( (operand1 - (1<<32)) >> shamt) & 0xFFFFFFFF

#         assert binary_to_hex(dut.alu_result.value) ==  hex(expected)[2:].upper()
#         assert int(dut.alu_result.value) ==  expected

@cocotb.test()
async def zero_test(dut):
    await Timer(1, units="ns")
    dut.alu_control.value = 0b0000
    dut.operand1.value = 123
    dut.operand2.value = -123
    await Timer(1, units="ns")
    print(int(dut.alu_result.value))
    # assert int(dut.zero.value) == 1
    assert int(dut.alu_result.value) == 0

# @cocotb.test()
# async def last_bit_test(dut):
#     # (logic copy-pasted from slt_test function)
#     await Timer(1, units="ns")
#     dut.alu_control.value = 0b0101
#     for _ in range(1000):
#         operand1 = random.randint(0,0xFFFFFFFF)
#         operand2 = random.randint(0,0xFFFFFFFF)
#         dut.operand1.value = operand1
#         dut.operand2.value = operand2

#         await Timer(1, units="ns")

#         if operand1 >> 31 == 0 and operand2 >> 31 == 0:
#             expected = int(operand1 < operand2)
#         elif operand1 >> 31 == 0 and operand2 >> 31 == 1:
#             expected = int(operand1 < (operand2 - (1<<32)))
#         elif operand1 >> 31 == 1 and operand2 >> 31 == 0:
#             expected = int((operand1 - (1<<32)) < operand2)
#         elif operand1 >> 31 == 1 and operand2 >> 31 == 1:
#             expected = int((operand1 - (1<<32)) < (operand2 - (1<<32)))
            
#         assert dut.last_bit.value == str(expected)
    
#     # Test edge case where operand1 == operand2
#     # last bit should be 0 as slt is a "strict compare"
#     # (idk know the scientific ter for that in english).
#     for _ in range(100):
#         operand1 = random.randint(0,0xFFFFFFFF)
#         operand2 = operand1
#         dut.operand1.value = operand1
#         dut.operand2.value = operand2
#         await Timer(1, units="ns")
#         expected = 0
#         assert int(dut.last_bit.value) == expected