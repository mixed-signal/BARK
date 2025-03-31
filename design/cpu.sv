`timescale 1ns/1ps

module cpu (
    input logic clk, 
    input logic reset
);


reg [31:0] pc = 32'd0;
logic [31:0] instruction;
logic [31:0] pc_next ;
logic [6:0] opcode;
logic [4:0] rs1;
logic [4:0] rs2;
logic [4:0] rd;
logic [31:0] reg_data_in;
logic [31:0] reg_data_out_1;
logic [31:0] reg_data_out_2;
logic [2:0] funct3;
logic [6:0]funct7;
logic [24:0]immi_source;
logic [31:0] alu_control;
logic alu_a_sel;
logic alu_b_sel;
logic [31:0] operand1;
logic [31:0] operand2;
logic alu_result;
logic [31:0] pc_alu_result;
logic [31:0] pc_next_result;
logic mem_clk;
logic pc_alu_sel;
logic pc_next_sel;
logic pc_clk;
logic [31:0] imm_x;
logic [1:0]reg_data_sel;


/*
// PROGRAM COUNTER
*/
generic_mux mux_1(
    .i0(imm_x),
    .i1(32'd4),
    .a0(pc_alu_sel),

    .q(pc_alu_result)
);

always_comb begin
    pc_next = pc + pc_alu_result;    
end

generic_mux mux_2(
    .i0(pc_next),
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
    .funct7(funct7),
    .immi_source(immi_source)
);

/*
// CONTROLLER
*/
controller controller(
    .clock(clk),
    .reset(reset),
    .opcode(opcode),
    .funct3(funct3),
    .funct7(funct7),

    .alu_control(alu_control),
    .alu_a_sel(alu_a_sel),
    .alu_b_sel(alu_b_sel),
    .mem_clk(mem_clk),
    .pc_alu_sel(pc_alu_sel),
    .pc_next_sel(pc_next_sel),
    .pc_clk(pc_clk),
    .reg_data_sel(reg_data_sel)
);

// REG_DATA_IN MUX
generic_mux_two reg_data_mux(
    .i0(pc_alu_result),
    .i1(alu_result),
    .i2(32'd0),
    .i3(data_read),
    .a0(reg_data_sel),

    .q(reg_data_in)
);

/*
// REGFILE
*/
register_file register_file(
.clk(clk),
.write_enable(reg_clk),
.rs1(rs1),
.rs2(rs2),
.rd(rd),
.reg_data_in(reg_data_in),
.reset(reset),

.reg_data_out_1(reg_data_out_1),
.reg_data_out_2(reg_data_out_2)
);

sign_extender sign_extender(
    .immi_source(immi_source),
    .opcode(opcode),
    .imm_x(imm_x)
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
    .shamt(imm_x[4:0]),

    .alu_result(alu_result)
);

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
