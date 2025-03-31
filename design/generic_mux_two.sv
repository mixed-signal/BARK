module generic_mux_two(
    input logic [31:0]i0,
    input logic [31:0]i1,
    input logic [31:0]i2,
    input logic [31:0]i3,

    input logic [1:0]a0,
    output logic [31:0] q
);

case (a0)
    2'b00 : q = i0;
    2'b01 : q = i1;
    2'b10 : q = i2;
    2'b11 : q = i3;
    default: q = i0;
endcase
    
endmodule