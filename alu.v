`timescale 1ns/1ps

module ALU (input1 , input2 , sh_amt, alu_instr , out , branch);
input wire [31:0] input1,input2;
input wire[4:0] sh_amt;
input wire[3:0] alu_instr;
output reg[31:0] out;
output wire branch;
assign branch = (out != 0);

always @(*) begin
    case(alu_instr)
    0: out = input1 + input2;           // add
    1: out = input1 - input2;           // sub
    2: out = input1 & input2;           // and
    3: out = input1 | input2;           // or
    4: out = input1 << sh_amt;          // sll
    5: out = input1 >> sh_amt;          // srl
    6: out = (input1 < input2)?1:0;     // slt
    7: out = (input1 == input2)?1:0;    // beq
    8: out = (input1 != input2)?1:0;    // bne
    9: out = (input1 > input2)?1:0;     // bgt
    10: out = (input1 >= input2)?1:0;   // bgte
    11: out = (input1 < input2)?1:0;    // ble
    12: out = (input1 <= input2)?1:0;   // bleq
    endcase
end
endmodule
