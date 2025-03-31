module sign_extender (
    input logic [24:0] immi_source,
    input logic [6:0] opcode,
    output logic [31:0]immi_x
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
    OPCODE_I_TYPE : imm_x = {{20{immi_source[24]}}, immi_source[24:13]};
    OPCODE_U_TYPE_LUI, OPCODE_U_TYPE_AUI : imm_x = {immi_source[24:5], 12'b000000000000}
        default: 
    endcase
end
    
endmodule