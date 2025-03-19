module instruction_decoder #(
    parameters
) (
    input logic [31:0] instruction,
    output logic [6:0] opcode,
    output logic [4:0] rs1,
    output logic [4:0] rs2,
    output logic [4:0] rd,
    output logic [2:0] funct3
);

assign opcode = instruction[6:0];
assign rs1 = instruction[19:15];
assign rs2 = instruction[24:20];
assign rd = instruction[11:7];
assign funct3 = instruction[14:12];

endmodule