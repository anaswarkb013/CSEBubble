`timescale 1ns/1ps

module Instruction (rst , clk , addr , instruction);
input wire rst, clk;
input wire[31:0] addr;
output wire[31:0] instruction;
reg[31:0] mem [65535:0];

initial begin
   mem[0] = 32'b00000000100000001000000000100000;   // add $s0, $a0, $0
   mem[1] = 32'b00000000101000001000100000100000;   // add $s1, $a1, $0
   mem[2] = 32'b00100010001100101111111111111111;   // addi $s2, $s1, -1
   mem[3] = 32'b01100010010000000000000000001101;   // Loop1: beq $s2, $0, exit1
   mem[4] = 32'b00000000000000001001100000100000;   // add $s3, $0, $0 
   mem[5] = 32'b01100010011100100000000000001001;   // Loop2: beq $s3, $s2, exit2
   mem[6] = 32'b00000010000100110100000000100000;   // add $t0, $s0, $s3
   mem[7] = 32'b10001101000101000000000000000000;   // lw $s4, 0($t0)
   mem[8] = 32'b10001101000101010000000000000001;   // lw $s5, 1($t0)
   mem[9] = 32'b01111010100101010000000000000011;   // ble $s4, $s5, afterswap
   mem[10] = 32'b10101101000101000000000000000001;  // sw $s4, 1($t0)
   mem[11] = 32'b10101101000101010000000000000000;  // sw $s5, 0($t0)
   mem[12] = 32'b00100010011100110000000000000001;  // addi $s3, $s3, 1
   mem[13] = 32'b00001000000000000000000000000101;  // j Loop2
   mem[14] = 32'b00100010010100101111111111111111;  // addi $s2, $s2, -1
   mem[15] = 32'b00001000000000000000000000000011;  // j Loop1
   mem[16] = 32'b01100000000000000000000000000000;  // exit1: beq $0, $0, 0
end

assign instruction = mem[addr[15:0]];
endmodule


module Data (rst, clk, addr, w_en, data_out, data_in);
input wire rst, clk, w_en;
input wire[31:0] addr, data_in;
output wire[31:0] data_out;
reg[31:0] mem[65535:0];
assign data_out = mem[addr[15:0]];

initial begin
   mem[0] = 15;
   mem[1] = 43;
   mem[2] = 22;
   mem[3] = 8;
   mem[4] = 62;
end

initial begin
   $monitor("%d %d %d %d %d",mem[0],mem[1],mem[2],mem[3],mem[4]);
end

always@(posedge clk) begin
   if (w_en) begin
        mem[addr[15:0]] = data_in;
   end
end
endmodule
