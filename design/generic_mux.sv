module generic_mux(
    input logic [31:0]i0,
    input logic [31:0]i1,

    input logic a0,
    output logic [31:0] q
);

assign q = (q == 1'b1) ? i1 : i0;
    
endmodule