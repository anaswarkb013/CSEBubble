`timescale 1ns/1ps
`include "memory.v"
`include "control.v"
`include "alu.v"
`include "mux.v"

module top (rst , clk);
input wire rst, clk;

reg [31:0] pc;
wire [31:0] pc_next, ir;
reg[31:0] reg_file[31:0];
wire[31:0] input1, input2;
wire[31:0] rt_data;
reg start;
wire[31:0] data_read; // data read from memory
wire[31:0] alu_out;   // output from ALU
wire[31:0] result;    // final result
wire branch;          // if branch statement evaluates to true
wire [4:0] sh_amt;

wire[1:0] pc_select; // 0 = next line, 1 = branch, 2 = jr, 3 = j
wire[3:0] alu_instr; // which operation alu will preform
wire[4:0] write_reg; // register to write
wire input2_select;  // 0 if input2 is in rt, 1 if immediate
wire sw;             // 1 for sw
wire lw;             // 1 for lw
wire reg_write;      // 1 for writing to register
wire link;           // 1 for jal
wire[31:0] immediate;

wire[31:0] pc_plus1, branch_addr, jr_addr, j_addr;
assign pc_plus1 = pc+1;
assign branch_addr = pc + immediate;
assign jr_addr = input1;
assign j_addr = {pc[31:26] , ir[25:0]};

assign input1 = reg_file[ir[25:21]];
assign rt_data = reg_file[ir[20:16]];
assign sh_amt = ir[10:6];

Mux4 pc_next_selecter(pc_plus1, branch_addr, jr_addr, j_addr, pc_select, branch, pc_next);
Mux2 result_selecter(alu_out, data_read, lw, result);
Mux2 in2_selecter(rt_data, immediate, input2_select, input2);

ALU alu(input1, input2, sh_amt, alu_instr, alu_out, branch);
Instruction instruction(rst, clk, pc, ir);
Data data (rst, clk, alu_out, sw, data_read, rt_data);
control unit (ir, pc_select, alu_instr, write_reg, input2_select, sw, lw, reg_write, link, immediate);

always@(posedge rst) begin
    pc = 0;
    reg_file[4] = 0;   //$a0 = starting index = 0
    reg_file[5] = 5;   //$a1=5=size
    reg_file[0] = 0;   //$zero
    reg_file[29] = 32'd65535;  //$sp
    start = 0;
end

always@(posedge clk) begin
    if(start == 0) start = 1;
    else begin
        if (reg_write) reg_file[write_reg] = result;
        if (link) reg_file[31] = pc_plus1;
        pc = pc_next;
    end
end


endmodule
