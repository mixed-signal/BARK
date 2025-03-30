`timescale 1ns/1ps

module memory #(
    parameter DATA_WIDTH = 32,
              ADDR_WIDTH = 6,
              NVM_INIT = ""
) (
    input logic clk,
    // protects memory from being written to, on by default
    input logic write_enable,
    input logic [ADDR_WIDTH - 1:0] address,
    input logic [DATA_WIDTH - 1:0] data_in,
    // Kind of like flash sector erase.
    input logic reset,
    output logic [DATA_WIDTH - 1:0] data_out
);

initial begin
    if (NVM_INIT != "") begin
        $readmemh(NVM_INIT, array_reg);
    end
end


logic [DATA_WIDTH - 1 : 0] array_reg [0: 2** ADDR_WIDTH - 1];

always_ff @( posedge clk ) begin
    if (reset == 1'b0) begin
        for (int i = 0; i < 2** ADDR_WIDTH; i++) begin
            array_reg[i] <= 32'd0;
        end
    end
    else if (write_enable)
        array_reg[address] <= data_in;
end

assign data_out = array_reg[address];

endmodule