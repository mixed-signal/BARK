module register_file #(
    parameter DATA_WIDTH = 32;
    parameter ADDR_WIDTH = 5;
) (
    input logic clock,
    input logic write_enable,
    input logic [ADDR_WIDTH - 1:0] rs1,
    input logic [ADDR_WIDTH - 1:0] rs2,
    input logic [ADDR_WIDTH - 1:0] rd,
    input logic [DATA_WIDTH - 1:0] reg_data_in,
    input logic reset,


    output logic [DATA_WIDTH -1:0] reg_data_out_1,
    output logic [DATA_WIDTH -1:0] reg_data_out_2
    
);

logic [DATA_WIDTH - 1:0] registers [0: 2** ADDR_WIDTH -1]

always_ff @( posedge clock ) begin
    if (reset = 1'b1) begin
    end
    else if (write_enable = 1'b1)begin
    registers[rd] <= reg_data_in;
    end

end

assign reg_data_out_1 = registers[rs1];
assign reg_data_out_2 = registers[rs2];

endmodule