`timescale 1ns/1ps
`include "top.v"

module tb ();
reg clk,rst;

top uut (rst , clk);
initial begin
    clk = 0;
    rst = 1;
    #1 
    rst = 0;
end

initial begin
    $dumpfile("test.vcd");
    $dumpvars(0, tb);
    #2000 
    $finish;
end

always #5 clk=~clk;
endmodule
