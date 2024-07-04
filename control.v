`timescale 1ns/1ps

module control (ir , pc_select, alu_instr, write_reg, input2_select, sw, lw, reg_write, link, immediate);
input wire[31:0] ir;
output reg[1:0] pc_select; // 0 = next line, 1 = branch, 2 = jr, 3 = j
output reg[3:0] alu_instr; // which operation alu will preform
output reg[4:0] write_reg; // register to write
output reg input2_select;  // 0 if input2 is in rt, 1 if immediate
output reg sw;             // 1 for sw
output reg lw;             // 1 for lw
output reg reg_write;      // 1 for writing to register
output reg link;           // 1 for jal
output reg[31:0] immediate;

wire[31:0] signed_im, unsigned_im;
assign signed_im = {{16{ir[15]}} , ir[15:0]};
assign unsigned_im = {16'd0 , ir[15:0]};

wire [4:0]rs,rt,rd;
assign rs = ir[25:21];
assign rt = ir[20:16];
assign rd = ir[15:11];

always@(ir) begin
    link = 0;
    sw = 0;
    lw = 0;
    immediate = signed_im;       

    if(ir[31:26] == 6'b000000) begin // R formats
        pc_select = 0;
        write_reg = rd;
        input2_select = 0;
        reg_write = 1;

        case(ir[5:0])
        6'b100000: alu_instr = 0; // add
        6'b100001: alu_instr = 0; // addu
        6'b100010: alu_instr = 1; // sub
        6'b100011: alu_instr = 1; // subu
        6'b100100: alu_instr = 2; // and
        6'b100101: alu_instr = 3; // or
        6'b000000: alu_instr = 4; // sll
        6'b000010: alu_instr = 5; // srl
        6'b101010: alu_instr = 6; // slt
        6'b001000: begin         // jr instruction
            pc_select = 2;
            alu_instr = 0;
        end
        endcase      
    end

    else if (ir[31:29] == 3'b001) begin // immediate arithmetic
        pc_select = 0;
        write_reg = rt;
        input2_select = 1;
        reg_write = 1;
        if(ir[28:26] != 3'b000 && ir[28:26] != 3'b010) begin
            immediate = unsigned_im;
        end 

        case(ir[28:26])
            3'b000: alu_instr = 0; // addi
            3'b001: alu_instr = 0; // addiu
            3'b010: alu_instr = 6; // slti
            3'b011: alu_instr = 6; // sltiu
            3'b100: alu_instr = 2; // andi
            3'b101: alu_instr = 3; // ori
        endcase        
    end

    else if (ir[31:29] == 3'b011) begin  // branch
        pc_select = 1;
        input2_select = 0;
        reg_write = 0;
        case(ir[28:26])
        3'b000: alu_instr = 7;  // beq
        3'b001: alu_instr = 8;  // bne
        3'b010: alu_instr = 9;  // bgt
        3'b011: alu_instr = 10; // bgte
        3'b100: alu_instr = 11; // ble
        3'b110: alu_instr = 12; // bleq
        endcase
    end

    else if (ir[31:26] == 6'b100011) begin  // lw
        pc_select = 0;
        write_reg = rt;
        input2_select = 1;
        alu_instr = 0;
        lw = 1;
        reg_write = 1;  
    end

    else if (ir[31:26] == 6'b101011) begin  // sw
        pc_select = 0;
        write_reg = rt;
        input2_select = 1;
        alu_instr = 0;
        sw = 1;
        reg_write = 0;     
    end

    else if (ir[31:26] == 2) begin  // j
        pc_select = 3;  
        reg_write = 0;
    end

    else if (ir[31:26]==3) begin  // jal
        pc_select = 3;
        reg_write = 0;
        link = 1;
    end
end
endmodule
