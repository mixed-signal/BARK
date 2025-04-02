`timescale 1ns/1ps

module alu (
    input logic [31:0] alu_control,
    input logic [31:0] operand1,
    input logic [31:0] operand2,
    input logic [4:0] shamt,

    output logic [31:0] alu_result,
    output logic zero,
    output logic last_bit
);

typedef enum {ALU_ADD, ALU_SUB, ALU_AND, ALU_OR, ALU_XOR, ALU_SLT, ALU_SLTU, ALU_SLL, ALU_SRL, ALU_SRA} alu_control_t;


assign zero = alu_result == 32'b0;
assign last_bit = alu_result[0];

always_comb begin
    case (alu_control)
        // ADD STUFF
        ALU_ADD : alu_result = operand1 + operand2;
        ALU_SUB : alu_result = operand1 + (~operand2 + 1'b1);
        ALU_AND : alu_result = operand1 & operand2;
        ALU_OR : alu_result = operand1 | operand2;
        ALU_XOR : alu_result = operand1 ^ operand2;
        ALU_SLT : alu_result = {31'b0, $signed(operand1) < $signed(operand2)};
        ALU_SLTU : alu_result = {31'b0, operand1 < operand2};
        ALU_SLL : alu_result = operand1 << shamt;
        ALU_SRL : alu_result = operand1 >> shamt;
        ALU_SRA : alu_result = $signed(operand1) >>> shamt;
        default : alu_result = 32'd0;
    endcase
end
    
endmodule