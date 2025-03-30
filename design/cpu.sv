module cpu #(
    parameters
) (
    input logic clk, 
    input logic reset,
);


reg [31:0] pc = 32'd0;
logic [31:0] instruction;
logic [31:0] pc_next ;
logic [6:0] opcode;
logic [4:0] rs1;
logic [4:0] rs2;
logic [4:0] rd;
logic [2:0] funct3;
logic [31:0] alu_control;
logic alu_a_sel;
logic alu_b_sel;
logic [31:0] operand1,
logic [31:0] operand2,
logic alu_result;
logic [31:0] pc_alu_result;
logic [31:0] pc_next_result;
logic mem_clk;
logic pc_alu_sel;
logic pc_next_sel;
logic pc_clk;


/*
// PROGRAM COUNTER
*/
generic_mux (
    .io(imm_x),
    .i1(32'd4),
    .a0(pc_alu_sel),

    .q(pc_alu_result)
);

always_comb begin
    pc_next = pc + pc_alu_result;    
end

generic_mux (
    .io(pc_next),
    .i1(alu_result),
    .a0(pc_next_sel),

    .q(pc_next_result)
);

// BASIC PROGRAM COUNTER
// always_comb begin
//     pc_next = pc + 4;
// end

always @(posedge pc_clk) begin
    if (reset == 1'b0) begin
        pc <= 32'd0;
    end
    else begin
        pc <= pc_next_result;
    end
end



/*
// Instruction Memory - Ought to be like ROM but more like Flash with writes disabled in this case as true ROM cannot be realised by an FPGA.
*/

memory #(
    .NVM_INIT("rom.txt")
) rom (
    .clk(clk),
    .address(pc),
    .data_in(32'b0),
    .write_enable(1'b0),
    .reset(1'b1),

    .data_out(instruction)
);

/*
// Instruction Decode
*/
instruction_decoder instruction_decoder(
    .instruction(instruction),
    .opcode(opcode),
    .rs1(rs1),
    .rs2(rs2),
    .rd(rd),
    .funct3(funct3),
    .funct7(funct7)
);

/*
// CONTROLLER
*/
controller controller(
    .clk(clk),
    .reset(reset),
    .opcode(opcode),
    .funct3(funct3),
    .funct7(funct7),

    .alu_control(alu_control),
    .alu_a_sel(alu_a_sel),
    .alu_b_sel(alu_b_sel),
    .mem_clk(mem_clk)
    .pc_alu_sel(pc_alu_sel)
    .pc_next_sel(pc_next_sel)
    .pc_clk(pc_clk)

);
// ALU MUX - can be removed if program counter is optimised.
generic_mux alu_mux_1(
    .i0(reg_data_out_1),
    .i1(pc),

    .a0(alu_a_sel),
    .q(operand1)
);

generic_mux alu_mux_2(
    .i0(reg_data_out_2),
    .i1(imm_x),

    .a0(alu_b_sel),
    .q(operand2)
);

/*
// ALU
*/
alu alu(
    .alu_control(alu_control),
    .operand1(operand1),
    .operand2(operand2),
    .shamt(imm_x[4:0])

    .alu_result(alu_result)
)

// DATA MEMORY MUX

/*
// DATA MEMORY
*/
memory #(
    .NVM_INIT("data.txt")
) flash (
    .clk(clk),
    .address(alu_result),
    .data_in(data_write),
    .write_enable(mem_clk),
    .reset(1'b1),

    .data_out(data_read)
);



    
endmodule