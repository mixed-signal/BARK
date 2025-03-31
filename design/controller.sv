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
    output logic [1:0] reg_data_sel

    
);

typedef enum logic [6:0]{  
    OPCODE_U_TYPE_LUI = 7'b0110111,
    OPCODE_U_TYPE_AUI = 7'b0010111,
    OPCODE_J_TYPE = 7'b1101111,
    OPCODE_R_TYPE = 7'b0110011,
    OPCODE_I_TYPE = 7'b0000011,
    OPCODE_S_TYPE = 7'b0100011,
    OPCODE_B_TYPE = 7'b1100011
} opcode_t;

typedef enum logic [1:0]{  
    ALU_MATH = 2'b00
} alu_state_t;

typedef enum logic [2:0]{
    F3_ADD_SUB = 3'b000,
    F3_SLL = 3'b001,
    F3_SLT = 3'b010,
    F3_SLTU = 3'b011,
    F3_XOR = 3'b100,
    F3_SRL_SRA= 3'b101,
    F3_OR = 3'b110,
    F3_AND = 3'b111
} funct3_t;

typedef enum {ALU_ADD, ALU_SUB, ALU_AND, ALU_OR, ALU_XOR} alu_control_t;

logic [1:0] alu_state;

always_comb begin
    case (opcode)
    OPCODE_U_TYP_AUI : begin
        pc_alu_sel = 1'b1;
        pc_next_sel = 1'b0;
        alu_a_sel = 1'b1;
        alu_b_sel = 1'b1;
        reg_data_sel = 2'd0;
        alu_state = 2'd0;
         
    end
    OPCODE_R_TYPE : begin
        pc_alu_sel = 1'b1;
        pc_next_sel = 1'b0;
        alu_a_sel = 1'b0;
        alu_b_sel = 1'b0;
        alu_state = 2'd0;
        reg_data_sel = 2'd0;
    end
    OPCODE_I_TYPE : begin
        pc_alu_sel = 1'b1;
        pc_next_sel = 1'b0;
        alu_a_sel = 1'b0;
        alu_b_sel = 1'b1;
        alu_state = 2'd0;
        reg_data_sel = 2'd0;
    end
        // default: 
    endcase
    
end

always_comb begin
    case (alu_state)
    ALU_MATH : begin
        if ((opcode == OPCODE_U_TYPE_LUI) || (opcode == OPCODE_U_TYPE_AUI)) begin
            alu_control = ALU_ADD;
        end
        else begin
            case (funct3)
            F3_ADD_SUB : begin
                // R TYPE
                if (opcode == OPCODE_R_TYPE) begin
                    alu_control = (funct7[5] == 0)? ALU_ADD:ALU_SUB;
                end
                else begin
                    alu_control = ALU_ADD;
                end
            end
            F3_AND : begin
                alu_control = ALU_AND;
            end
                // default: 
            endcase
            end
    end 
        // default: 
    endcase 
end
    
endmodule