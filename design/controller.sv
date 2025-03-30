module controller #(
    parameters
) (
    input logic clock,
    input logic reset,
    input logic [6:0] opcode,
    input logic [2:0] funct3,
    input logic [6:0] funct7,

    output logic [31:0] alu_control,
    output logic alu_a_sel,
    output logic alu_b_sel,
    output logic mem_clk,
    output logic pc_alu_sel,
    output logic pc_next_sel,
    output logic pc_clk,

    
);

typedef enum logic [6:0]{  
    OPCODE_U_TYPE = 7'b0110111,
    OPCODE_J_TYPE = 7'b1101111,
    OPCODE_R_TYPE = 7'b0110011,
    OPCODE_I_TYPE = 7'b0000011,
    OPCODE_S_TYPE = 7'b0100011,
    OPCODE_B_TYPE = 7'b1100011
} opcode_t;

always_comb begin
    case (opcode)
    OPCODE_U_TYP : begin
        alu_control = 
    end
        default: 
    endcase
    
end
    
endmodule