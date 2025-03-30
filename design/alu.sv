`timescale 1ns/1ps

module alu (
    input logic [31:0] alu_control,
    input logic [31:0] operand1,
    input logic [31:0] operand2,
    input logic [4:0] shamt,

    output logic [31:0] alu_result
);

typedef enum {ALU_ADD, ALU_SUB, ALU_AND, ALU_OR, ALU_XOR} alu_control_t;

wire logic [4:0] shamt = operand2[4:0];

always_comb begin
    case (alu_control)
        // ADD STUFF
        ALU_ADD : alu_result = operand1 + operand2;
        ALU_SUB : alu_result = operand1 + (~operand2 + 1'b1);
        ALU_AND : alu_result = operand1 & operand2;
        ALU_OR : alu_result = operand1 | operand2;
        ALU_XOR : alu_result = operand1 ^ operand2;
        default : alu_result = 32'd0;
    endcase
end
    
endmodule