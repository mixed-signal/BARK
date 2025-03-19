`timescale 1ns/1ps

module memory #(
    parameter DATA_WIDTH = 32,
              ADDR_WIDTH = 32,
) (
    input logic clock,
    // protects memory from being written to, on by default
    input logic write_enable,
    input logic [ADDR_WIDTH - 1:0] write_address, read_address, 
    input logic [DATA_WIDTH - 1:0] data_in,
    // Kind of like flash sector erase.
    input logic reset,
    output logic [DATA_WIDTH - 1:0] data_out
);


logic [DATA_WIDTH - 1 : 0] array_reg [0: 2** ADDR_WIDTH - 1];

always_ff @( posedge clock ) begin
    if (write_enable)
        array_reg[write_address] <= data_in;

assign data_out = array_reg[read_address];

end   

endmodule