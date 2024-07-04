`timescale 1ns/1ps

module Mux2 (a, b, s, out);
input wire[31:0] a, b;
output wire[31:0] out;
input s;
assign out = a&(~{32{s}}) | b&{32{s}};
endmodule

module Mux4 (a, b, c, d, s, zero, out);
input wire[31:0] a, b, c, d;
input wire[1:0] s;
input wire zero;
output reg[31:0] out;

always @(*) begin
    case(s)
    2'b00: out <= a;
    2'b01: begin
        if (zero)
            out <= b;
        else
            out <= a;
    end
    2'b10: out <= c;
    2'b11: out <= d;
    endcase
end
endmodule
