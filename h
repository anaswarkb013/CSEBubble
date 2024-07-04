#! /c/Source/iverilog-install/bin/vvp
:ivl_version "12.0 (devel)" "(s20150603-1539-g2693dd32b)";
:ivl_delay_selection "TYPICAL";
:vpi_time_precision - 12;
:vpi_module "C:\iverilog\lib\ivl\system.vpi";
:vpi_module "C:\iverilog\lib\ivl\vhdl_sys.vpi";
:vpi_module "C:\iverilog\lib\ivl\vhdl_textio.vpi";
:vpi_module "C:\iverilog\lib\ivl\v2005_math.vpi";
:vpi_module "C:\iverilog\lib\ivl\va_math.vpi";
S_000002ca33ecda40 .scope module, "tb" "tb" 2 4;
 .timescale -9 -12;
v000002ca33f50470_0 .var "clk", 0 0;
v000002ca33f51690_0 .var "rst", 0 0;
S_000002ca33ecdbd0 .scope module, "uut" "top" 2 7, 3 7 0, S_000002ca33ecda40;
 .timescale -9 -12;
    .port_info 0 /INPUT 1 "rst";
    .port_info 1 /INPUT 1 "clk";
L_000002ca33ed9c70 .functor BUFZ 32, L_000002ca33ed9ce0, C4<00000000000000000000000000000000>, C4<00000000000000000000000000000000>, C4<00000000000000000000000000000000>;
L_000002ca33ed9ce0 .functor BUFZ 32, L_000002ca33f506f0, C4<00000000000000000000000000000000>, C4<00000000000000000000000000000000>, C4<00000000000000000000000000000000>;
L_000002ca33f518a0 .functor BUFZ 32, L_000002ca33f51230, C4<00000000000000000000000000000000>, C4<00000000000000000000000000000000>, C4<00000000000000000000000000000000>;
L_000002ca34050088 .functor BUFT 1, C4<00000000000000000000000000000001>, C4<0>, C4<0>, C4<0>;
v000002ca33f4e8c0_0 .net/2u *"_ivl_0", 31 0, L_000002ca34050088;  1 drivers
v000002ca33f4e320_0 .net *"_ivl_11", 25 0, L_000002ca33f51550;  1 drivers
v000002ca33f4e3c0_0 .net *"_ivl_14", 31 0, L_000002ca33f506f0;  1 drivers
v000002ca33f4edc0_0 .net *"_ivl_17", 4 0, L_000002ca33f51410;  1 drivers
v000002ca33f4e960_0 .net *"_ivl_18", 6 0, L_000002ca33f50f10;  1 drivers
L_000002ca340500d0 .functor BUFT 1, C4<00>, C4<0>, C4<0>, C4<0>;
v000002ca33f4f4a0_0 .net *"_ivl_21", 1 0, L_000002ca340500d0;  1 drivers
v000002ca33f4ea00_0 .net *"_ivl_24", 31 0, L_000002ca33f51230;  1 drivers
v000002ca33f4e5a0_0 .net *"_ivl_27", 4 0, L_000002ca33f4fbb0;  1 drivers
v000002ca33f4e640_0 .net *"_ivl_28", 6 0, L_000002ca33f501f0;  1 drivers
L_000002ca34050118 .functor BUFT 1, C4<00>, C4<0>, C4<0>, C4<0>;
v000002ca33f4dd80_0 .net *"_ivl_31", 1 0, L_000002ca34050118;  1 drivers
v000002ca33f4d9c0_0 .net *"_ivl_9", 5 0, L_000002ca33f510f0;  1 drivers
v000002ca33f4e460_0 .net "alu_instr", 3 0, v000002ca33f4e820_0;  1 drivers
v000002ca33f4e500_0 .net "alu_out", 31 0, v000002ca33f4b4c0_0;  1 drivers
v000002ca33f4db00_0 .net "branch", 0 0, L_000002ca33f51190;  1 drivers
v000002ca33f4f400_0 .net "branch_addr", 31 0, L_000002ca33f51370;  1 drivers
v000002ca33f4f0e0_0 .net "clk", 0 0, v000002ca33f50470_0;  1 drivers
v000002ca33f4dec0_0 .net "data_read", 31 0, L_000002ca33f51e50;  1 drivers
v000002ca33f4df60_0 .net "immediate", 31 0, v000002ca33f4e6e0_0;  1 drivers
v000002ca33f4eb40_0 .net "input1", 31 0, L_000002ca33ed9ce0;  1 drivers
v000002ca33f4f220_0 .net "input2", 31 0, L_000002ca33f52240;  1 drivers
v000002ca33f4dce0_0 .net "input2_select", 0 0, v000002ca33f4ef00_0;  1 drivers
v000002ca33f4dba0_0 .net "ir", 31 0, L_000002ca33f524e0;  1 drivers
v000002ca33f4ebe0_0 .net "j_addr", 31 0, L_000002ca33f50010;  1 drivers
v000002ca33f4e000_0 .net "jr_addr", 31 0, L_000002ca33ed9c70;  1 drivers
v000002ca33f4ee60_0 .net "link", 0 0, v000002ca33f4ed20_0;  1 drivers
v000002ca33f4e140_0 .net "lw", 0 0, v000002ca33f4eaa0_0;  1 drivers
v000002ca33f4ec80_0 .var "pc", 31 0;
v000002ca33f4f540_0 .net "pc_next", 31 0, v000002ca33f4b6a0_0;  1 drivers
v000002ca33f4f5e0_0 .net "pc_plus1", 31 0, L_000002ca33f4fb10;  1 drivers
v000002ca33f4f680_0 .net "pc_select", 1 0, v000002ca33f4dc40_0;  1 drivers
v000002ca33f4f720 .array "reg_file", 0 31, 31 0;
v000002ca33f4d920_0 .net "reg_write", 0 0, v000002ca33f4e0a0_0;  1 drivers
v000002ca33f4de20_0 .net "result", 31 0, L_000002ca33f52630;  1 drivers
v000002ca33f508d0_0 .net "rst", 0 0, v000002ca33f51690_0;  1 drivers
v000002ca33f50290_0 .net "rt_data", 31 0, L_000002ca33f518a0;  1 drivers
v000002ca33f4fcf0_0 .net "sh_amt", 4 0, L_000002ca33f50150;  1 drivers
v000002ca33f4fc50_0 .var "start", 0 0;
v000002ca33f50e70_0 .net "sw", 0 0, v000002ca33f4e280_0;  1 drivers
v000002ca33f50c90_0 .net "write_reg", 4 0, v000002ca33f4e1e0_0;  1 drivers
E_000002ca33ee5fd0 .event posedge, v000002ca33f4caa0_0;
L_000002ca33f4fb10 .arith/sum 32, v000002ca33f4ec80_0, L_000002ca34050088;
L_000002ca33f51370 .arith/sum 32, v000002ca33f4ec80_0, v000002ca33f4e6e0_0;
L_000002ca33f510f0 .part v000002ca33f4ec80_0, 26, 6;
L_000002ca33f51550 .part L_000002ca33f524e0, 0, 26;
L_000002ca33f50010 .concat [ 26 6 0 0], L_000002ca33f51550, L_000002ca33f510f0;
L_000002ca33f506f0 .array/port v000002ca33f4f720, L_000002ca33f50f10;
L_000002ca33f51410 .part L_000002ca33f524e0, 21, 5;
L_000002ca33f50f10 .concat [ 5 2 0 0], L_000002ca33f51410, L_000002ca340500d0;
L_000002ca33f51230 .array/port v000002ca33f4f720, L_000002ca33f501f0;
L_000002ca33f4fbb0 .part L_000002ca33f524e0, 16, 5;
L_000002ca33f501f0 .concat [ 5 2 0 0], L_000002ca33f4fbb0, L_000002ca34050118;
L_000002ca33f50150 .part L_000002ca33f524e0, 6, 5;
S_000002ca33eda3e0 .scope module, "alu" "ALU" 3 46, 4 3 0, S_000002ca33ecdbd0;
 .timescale -9 -12;
    .port_info 0 /INPUT 32 "input1";
    .port_info 1 /INPUT 32 "input2";
    .port_info 2 /INPUT 5 "sh_amt";
    .port_info 3 /INPUT 4 "alu_instr";
    .port_info 4 /OUTPUT 32 "out";
    .port_info 5 /OUTPUT 1 "branch";
L_000002ca34050160 .functor BUFT 1, C4<00000000000000000000000000000000>, C4<0>, C4<0>, C4<0>;
v000002ca33edeb20_0 .net/2u *"_ivl_0", 31 0, L_000002ca34050160;  1 drivers
v000002ca33ede580_0 .net "alu_instr", 3 0, v000002ca33f4e820_0;  alias, 1 drivers
v000002ca33ede6c0_0 .net "branch", 0 0, L_000002ca33f51190;  alias, 1 drivers
v000002ca33ede760_0 .net "input1", 31 0, L_000002ca33ed9ce0;  alias, 1 drivers
v000002ca33ede800_0 .net "input2", 31 0, L_000002ca33f52240;  alias, 1 drivers
v000002ca33f4b4c0_0 .var "out", 31 0;
v000002ca33f4c5a0_0 .net "sh_amt", 4 0, L_000002ca33f50150;  alias, 1 drivers
E_000002ca33ee6290 .event anyedge, v000002ca33ede580_0, v000002ca33ede760_0, v000002ca33ede800_0, v000002ca33f4c5a0_0;
L_000002ca33f51190 .cmp/ne 32, v000002ca33f4b4c0_0, L_000002ca34050160;
S_000002ca33eda570 .scope module, "data" "Data" 3 48, 5 33 0, S_000002ca33ecdbd0;
 .timescale -9 -12;
    .port_info 0 /INPUT 1 "rst";
    .port_info 1 /INPUT 1 "clk";
    .port_info 2 /INPUT 32 "addr";
    .port_info 3 /INPUT 1 "w_en";
    .port_info 4 /OUTPUT 32 "data_out";
    .port_info 5 /INPUT 32 "data_in";
L_000002ca33f51e50 .functor BUFZ 32, L_000002ca33f51730, C4<00000000000000000000000000000000>, C4<00000000000000000000000000000000>, C4<00000000000000000000000000000000>;
v000002ca33f4bd80_0 .net *"_ivl_0", 31 0, L_000002ca33f51730;  1 drivers
v000002ca33f4ba60_0 .net *"_ivl_3", 15 0, L_000002ca33f514b0;  1 drivers
v000002ca33f4cc80_0 .net *"_ivl_4", 17 0, L_000002ca33f500b0;  1 drivers
L_000002ca340501f0 .functor BUFT 1, C4<00>, C4<0>, C4<0>, C4<0>;
v000002ca33f4bec0_0 .net *"_ivl_7", 1 0, L_000002ca340501f0;  1 drivers
v000002ca33f4cd20_0 .net "addr", 31 0, v000002ca33f4b4c0_0;  alias, 1 drivers
v000002ca33f4bf60_0 .net "clk", 0 0, v000002ca33f50470_0;  alias, 1 drivers
v000002ca33f4cb40_0 .net "data_in", 31 0, L_000002ca33f518a0;  alias, 1 drivers
v000002ca33f4c000_0 .net "data_out", 31 0, L_000002ca33f51e50;  alias, 1 drivers
v000002ca33f4b420 .array "mem", 0 65535, 31 0;
v000002ca33f4caa0_0 .net "rst", 0 0, v000002ca33f51690_0;  alias, 1 drivers
v000002ca33f4be20_0 .net "w_en", 0 0, v000002ca33f4e280_0;  alias, 1 drivers
E_000002ca33ee6850 .event posedge, v000002ca33f4bf60_0;
L_000002ca33f51730 .array/port v000002ca33f4b420, L_000002ca33f500b0;
L_000002ca33f514b0 .part v000002ca33f4b4c0_0, 0, 16;
L_000002ca33f500b0 .concat [ 16 2 0 0], L_000002ca33f514b0, L_000002ca340501f0;
S_000002ca33ead800 .scope module, "in2_selecter" "Mux2" 3 44, 6 3 0, S_000002ca33ecdbd0;
 .timescale -9 -12;
    .port_info 0 /INPUT 32 "a";
    .port_info 1 /INPUT 32 "b";
    .port_info 2 /INPUT 1 "s";
    .port_info 3 /OUTPUT 32 "out";
L_000002ca33f51d00 .functor NOT 32, L_000002ca33f50a10, C4<00000000000000000000000000000000>, C4<00000000000000000000000000000000>, C4<00000000000000000000000000000000>;
L_000002ca33f520f0 .functor AND 32, L_000002ca33f518a0, L_000002ca33f51d00, C4<11111111111111111111111111111111>, C4<11111111111111111111111111111111>;
L_000002ca33f52400 .functor AND 32, v000002ca33f4e6e0_0, L_000002ca33f50330, C4<11111111111111111111111111111111>, C4<11111111111111111111111111111111>;
L_000002ca33f52240 .functor OR 32, L_000002ca33f520f0, L_000002ca33f52400, C4<00000000000000000000000000000000>, C4<00000000000000000000000000000000>;
v000002ca33f4b100_0 .net *"_ivl_0", 31 0, L_000002ca33f50a10;  1 drivers
v000002ca33f4b920_0 .net *"_ivl_2", 31 0, L_000002ca33f51d00;  1 drivers
v000002ca33f4b060_0 .net *"_ivl_4", 31 0, L_000002ca33f520f0;  1 drivers
v000002ca33f4b880_0 .net *"_ivl_6", 31 0, L_000002ca33f50330;  1 drivers
v000002ca33f4c640_0 .net *"_ivl_8", 31 0, L_000002ca33f52400;  1 drivers
v000002ca33f4c780_0 .net "a", 31 0, L_000002ca33f518a0;  alias, 1 drivers
v000002ca33f4cdc0_0 .net "b", 31 0, v000002ca33f4e6e0_0;  alias, 1 drivers
v000002ca33f4c6e0_0 .net "out", 31 0, L_000002ca33f52240;  alias, 1 drivers
v000002ca33f4b9c0_0 .net "s", 0 0, v000002ca33f4ef00_0;  alias, 1 drivers
LS_000002ca33f50a10_0_0 .concat [ 1 1 1 1], v000002ca33f4ef00_0, v000002ca33f4ef00_0, v000002ca33f4ef00_0, v000002ca33f4ef00_0;
LS_000002ca33f50a10_0_4 .concat [ 1 1 1 1], v000002ca33f4ef00_0, v000002ca33f4ef00_0, v000002ca33f4ef00_0, v000002ca33f4ef00_0;
LS_000002ca33f50a10_0_8 .concat [ 1 1 1 1], v000002ca33f4ef00_0, v000002ca33f4ef00_0, v000002ca33f4ef00_0, v000002ca33f4ef00_0;
LS_000002ca33f50a10_0_12 .concat [ 1 1 1 1], v000002ca33f4ef00_0, v000002ca33f4ef00_0, v000002ca33f4ef00_0, v000002ca33f4ef00_0;
LS_000002ca33f50a10_0_16 .concat [ 1 1 1 1], v000002ca33f4ef00_0, v000002ca33f4ef00_0, v000002ca33f4ef00_0, v000002ca33f4ef00_0;
LS_000002ca33f50a10_0_20 .concat [ 1 1 1 1], v000002ca33f4ef00_0, v000002ca33f4ef00_0, v000002ca33f4ef00_0, v000002ca33f4ef00_0;
LS_000002ca33f50a10_0_24 .concat [ 1 1 1 1], v000002ca33f4ef00_0, v000002ca33f4ef00_0, v000002ca33f4ef00_0, v000002ca33f4ef00_0;
LS_000002ca33f50a10_0_28 .concat [ 1 1 1 1], v000002ca33f4ef00_0, v000002ca33f4ef00_0, v000002ca33f4ef00_0, v000002ca33f4ef00_0;
LS_000002ca33f50a10_1_0 .concat [ 4 4 4 4], LS_000002ca33f50a10_0_0, LS_000002ca33f50a10_0_4, LS_000002ca33f50a10_0_8, LS_000002ca33f50a10_0_12;
LS_000002ca33f50a10_1_4 .concat [ 4 4 4 4], LS_000002ca33f50a10_0_16, LS_000002ca33f50a10_0_20, LS_000002ca33f50a10_0_24, LS_000002ca33f50a10_0_28;
L_000002ca33f50a10 .concat [ 16 16 0 0], LS_000002ca33f50a10_1_0, LS_000002ca33f50a10_1_4;
LS_000002ca33f50330_0_0 .concat [ 1 1 1 1], v000002ca33f4ef00_0, v000002ca33f4ef00_0, v000002ca33f4ef00_0, v000002ca33f4ef00_0;
LS_000002ca33f50330_0_4 .concat [ 1 1 1 1], v000002ca33f4ef00_0, v000002ca33f4ef00_0, v000002ca33f4ef00_0, v000002ca33f4ef00_0;
LS_000002ca33f50330_0_8 .concat [ 1 1 1 1], v000002ca33f4ef00_0, v000002ca33f4ef00_0, v000002ca33f4ef00_0, v000002ca33f4ef00_0;
LS_000002ca33f50330_0_12 .concat [ 1 1 1 1], v000002ca33f4ef00_0, v000002ca33f4ef00_0, v000002ca33f4ef00_0, v000002ca33f4ef00_0;
LS_000002ca33f50330_0_16 .concat [ 1 1 1 1], v000002ca33f4ef00_0, v000002ca33f4ef00_0, v000002ca33f4ef00_0, v000002ca33f4ef00_0;
LS_000002ca33f50330_0_20 .concat [ 1 1 1 1], v000002ca33f4ef00_0, v000002ca33f4ef00_0, v000002ca33f4ef00_0, v000002ca33f4ef00_0;
LS_000002ca33f50330_0_24 .concat [ 1 1 1 1], v000002ca33f4ef00_0, v000002ca33f4ef00_0, v000002ca33f4ef00_0, v000002ca33f4ef00_0;
LS_000002ca33f50330_0_28 .concat [ 1 1 1 1], v000002ca33f4ef00_0, v000002ca33f4ef00_0, v000002ca33f4ef00_0, v000002ca33f4ef00_0;
LS_000002ca33f50330_1_0 .concat [ 4 4 4 4], LS_000002ca33f50330_0_0, LS_000002ca33f50330_0_4, LS_000002ca33f50330_0_8, LS_000002ca33f50330_0_12;
LS_000002ca33f50330_1_4 .concat [ 4 4 4 4], LS_000002ca33f50330_0_16, LS_000002ca33f50330_0_20, LS_000002ca33f50330_0_24, LS_000002ca33f50330_0_28;
L_000002ca33f50330 .concat [ 16 16 0 0], LS_000002ca33f50330_1_0, LS_000002ca33f50330_1_4;
S_000002ca33ead990 .scope module, "instruction" "Instruction" 3 47, 5 3 0, S_000002ca33ecdbd0;
 .timescale -9 -12;
    .port_info 0 /INPUT 1 "rst";
    .port_info 1 /INPUT 1 "clk";
    .port_info 2 /INPUT 32 "addr";
    .port_info 3 /OUTPUT 32 "instruction";
L_000002ca33f524e0 .functor BUFZ 32, L_000002ca33f512d0, C4<00000000000000000000000000000000>, C4<00000000000000000000000000000000>, C4<00000000000000000000000000000000>;
v000002ca33f4b1a0_0 .net *"_ivl_0", 31 0, L_000002ca33f512d0;  1 drivers
v000002ca33f4bce0_0 .net *"_ivl_3", 15 0, L_000002ca33f50830;  1 drivers
v000002ca33f4bb00_0 .net *"_ivl_4", 17 0, L_000002ca33f50790;  1 drivers
L_000002ca340501a8 .functor BUFT 1, C4<00>, C4<0>, C4<0>, C4<0>;
v000002ca33f4bba0_0 .net *"_ivl_7", 1 0, L_000002ca340501a8;  1 drivers
v000002ca33f4c280_0 .net "addr", 31 0, v000002ca33f4ec80_0;  1 drivers
v000002ca33f4c3c0_0 .net "clk", 0 0, v000002ca33f50470_0;  alias, 1 drivers
v000002ca33f4b560_0 .net "instruction", 31 0, L_000002ca33f524e0;  alias, 1 drivers
v000002ca33f4b240 .array "mem", 0 65535, 31 0;
v000002ca33f4b600_0 .net "rst", 0 0, v000002ca33f51690_0;  alias, 1 drivers
L_000002ca33f512d0 .array/port v000002ca33f4b240, L_000002ca33f50790;
L_000002ca33f50830 .part v000002ca33f4ec80_0, 0, 16;
L_000002ca33f50790 .concat [ 16 2 0 0], L_000002ca33f50830, L_000002ca340501a8;
S_000002ca33eca510 .scope module, "pc_next_selecter" "Mux4" 3 42, 6 10 0, S_000002ca33ecdbd0;
 .timescale -9 -12;
    .port_info 0 /INPUT 32 "a";
    .port_info 1 /INPUT 32 "b";
    .port_info 2 /INPUT 32 "c";
    .port_info 3 /INPUT 32 "d";
    .port_info 4 /INPUT 2 "s";
    .port_info 5 /INPUT 1 "zero";
    .port_info 6 /OUTPUT 32 "out";
v000002ca33f4b2e0_0 .net "a", 31 0, L_000002ca33f4fb10;  alias, 1 drivers
v000002ca33f4b380_0 .net "b", 31 0, L_000002ca33f51370;  alias, 1 drivers
v000002ca33f4bc40_0 .net "c", 31 0, L_000002ca33ed9c70;  alias, 1 drivers
v000002ca33f4c820_0 .net "d", 31 0, L_000002ca33f50010;  alias, 1 drivers
v000002ca33f4b6a0_0 .var "out", 31 0;
v000002ca33f4b740_0 .net "s", 1 0, v000002ca33f4dc40_0;  alias, 1 drivers
v000002ca33f4c0a0_0 .net "zero", 0 0, L_000002ca33f51190;  alias, 1 drivers
E_000002ca33ee8bd0/0 .event anyedge, v000002ca33f4b740_0, v000002ca33f4b2e0_0, v000002ca33ede6c0_0, v000002ca33f4b380_0;
E_000002ca33ee8bd0/1 .event anyedge, v000002ca33f4bc40_0, v000002ca33f4c820_0;
E_000002ca33ee8bd0 .event/or E_000002ca33ee8bd0/0, E_000002ca33ee8bd0/1;
S_000002ca33eca6a0 .scope module, "result_selecter" "Mux2" 3 43, 6 3 0, S_000002ca33ecdbd0;
 .timescale -9 -12;
    .port_info 0 /INPUT 32 "a";
    .port_info 1 /INPUT 32 "b";
    .port_info 2 /INPUT 1 "s";
    .port_info 3 /OUTPUT 32 "out";
L_000002ca33f52470 .functor NOT 32, L_000002ca33f515f0, C4<00000000000000000000000000000000>, C4<00000000000000000000000000000000>, C4<00000000000000000000000000000000>;
L_000002ca33f51fa0 .functor AND 32, v000002ca33f4b4c0_0, L_000002ca33f52470, C4<11111111111111111111111111111111>, C4<11111111111111111111111111111111>;
L_000002ca33f52550 .functor AND 32, L_000002ca33f51e50, L_000002ca33f50fb0, C4<11111111111111111111111111111111>, C4<11111111111111111111111111111111>;
L_000002ca33f52630 .functor OR 32, L_000002ca33f51fa0, L_000002ca33f52550, C4<00000000000000000000000000000000>, C4<00000000000000000000000000000000>;
v000002ca33f4b7e0_0 .net *"_ivl_0", 31 0, L_000002ca33f515f0;  1 drivers
v000002ca33f4c140_0 .net *"_ivl_2", 31 0, L_000002ca33f52470;  1 drivers
v000002ca33f4c1e0_0 .net *"_ivl_4", 31 0, L_000002ca33f51fa0;  1 drivers
v000002ca33f4c320_0 .net *"_ivl_6", 31 0, L_000002ca33f50fb0;  1 drivers
v000002ca33f4c460_0 .net *"_ivl_8", 31 0, L_000002ca33f52550;  1 drivers
v000002ca33f4c8c0_0 .net "a", 31 0, v000002ca33f4b4c0_0;  alias, 1 drivers
v000002ca33f4c500_0 .net "b", 31 0, L_000002ca33f51e50;  alias, 1 drivers
v000002ca33f4c960_0 .net "out", 31 0, L_000002ca33f52630;  alias, 1 drivers
v000002ca33f4ca00_0 .net "s", 0 0, v000002ca33f4eaa0_0;  alias, 1 drivers
LS_000002ca33f515f0_0_0 .concat [ 1 1 1 1], v000002ca33f4eaa0_0, v000002ca33f4eaa0_0, v000002ca33f4eaa0_0, v000002ca33f4eaa0_0;
LS_000002ca33f515f0_0_4 .concat [ 1 1 1 1], v000002ca33f4eaa0_0, v000002ca33f4eaa0_0, v000002ca33f4eaa0_0, v000002ca33f4eaa0_0;
LS_000002ca33f515f0_0_8 .concat [ 1 1 1 1], v000002ca33f4eaa0_0, v000002ca33f4eaa0_0, v000002ca33f4eaa0_0, v000002ca33f4eaa0_0;
LS_000002ca33f515f0_0_12 .concat [ 1 1 1 1], v000002ca33f4eaa0_0, v000002ca33f4eaa0_0, v000002ca33f4eaa0_0, v000002ca33f4eaa0_0;
LS_000002ca33f515f0_0_16 .concat [ 1 1 1 1], v000002ca33f4eaa0_0, v000002ca33f4eaa0_0, v000002ca33f4eaa0_0, v000002ca33f4eaa0_0;
LS_000002ca33f515f0_0_20 .concat [ 1 1 1 1], v000002ca33f4eaa0_0, v000002ca33f4eaa0_0, v000002ca33f4eaa0_0, v000002ca33f4eaa0_0;
LS_000002ca33f515f0_0_24 .concat [ 1 1 1 1], v000002ca33f4eaa0_0, v000002ca33f4eaa0_0, v000002ca33f4eaa0_0, v000002ca33f4eaa0_0;
LS_000002ca33f515f0_0_28 .concat [ 1 1 1 1], v000002ca33f4eaa0_0, v000002ca33f4eaa0_0, v000002ca33f4eaa0_0, v000002ca33f4eaa0_0;
LS_000002ca33f515f0_1_0 .concat [ 4 4 4 4], LS_000002ca33f515f0_0_0, LS_000002ca33f515f0_0_4, LS_000002ca33f515f0_0_8, LS_000002ca33f515f0_0_12;
LS_000002ca33f515f0_1_4 .concat [ 4 4 4 4], LS_000002ca33f515f0_0_16, LS_000002ca33f515f0_0_20, LS_000002ca33f515f0_0_24, LS_000002ca33f515f0_0_28;
L_000002ca33f515f0 .concat [ 16 16 0 0], LS_000002ca33f515f0_1_0, LS_000002ca33f515f0_1_4;
LS_000002ca33f50fb0_0_0 .concat [ 1 1 1 1], v000002ca33f4eaa0_0, v000002ca33f4eaa0_0, v000002ca33f4eaa0_0, v000002ca33f4eaa0_0;
LS_000002ca33f50fb0_0_4 .concat [ 1 1 1 1], v000002ca33f4eaa0_0, v000002ca33f4eaa0_0, v000002ca33f4eaa0_0, v000002ca33f4eaa0_0;
LS_000002ca33f50fb0_0_8 .concat [ 1 1 1 1], v000002ca33f4eaa0_0, v000002ca33f4eaa0_0, v000002ca33f4eaa0_0, v000002ca33f4eaa0_0;
LS_000002ca33f50fb0_0_12 .concat [ 1 1 1 1], v000002ca33f4eaa0_0, v000002ca33f4eaa0_0, v000002ca33f4eaa0_0, v000002ca33f4eaa0_0;
LS_000002ca33f50fb0_0_16 .concat [ 1 1 1 1], v000002ca33f4eaa0_0, v000002ca33f4eaa0_0, v000002ca33f4eaa0_0, v000002ca33f4eaa0_0;
LS_000002ca33f50fb0_0_20 .concat [ 1 1 1 1], v000002ca33f4eaa0_0, v000002ca33f4eaa0_0, v000002ca33f4eaa0_0, v000002ca33f4eaa0_0;
LS_000002ca33f50fb0_0_24 .concat [ 1 1 1 1], v000002ca33f4eaa0_0, v000002ca33f4eaa0_0, v000002ca33f4eaa0_0, v000002ca33f4eaa0_0;
LS_000002ca33f50fb0_0_28 .concat [ 1 1 1 1], v000002ca33f4eaa0_0, v000002ca33f4eaa0_0, v000002ca33f4eaa0_0, v000002ca33f4eaa0_0;
LS_000002ca33f50fb0_1_0 .concat [ 4 4 4 4], LS_000002ca33f50fb0_0_0, LS_000002ca33f50fb0_0_4, LS_000002ca33f50fb0_0_8, LS_000002ca33f50fb0_0_12;
LS_000002ca33f50fb0_1_4 .concat [ 4 4 4 4], LS_000002ca33f50fb0_0_16, LS_000002ca33f50fb0_0_20, LS_000002ca33f50fb0_0_24, LS_000002ca33f50fb0_0_28;
L_000002ca33f50fb0 .concat [ 16 16 0 0], LS_000002ca33f50fb0_1_0, LS_000002ca33f50fb0_1_4;
S_000002ca33ec4fb0 .scope module, "unit" "control" 3 49, 7 3 0, S_000002ca33ecdbd0;
 .timescale -9 -12;
    .port_info 0 /INPUT 32 "ir";
    .port_info 1 /OUTPUT 2 "pc_select";
    .port_info 2 /OUTPUT 4 "alu_instr";
    .port_info 3 /OUTPUT 5 "write_reg";
    .port_info 4 /OUTPUT 1 "input2_select";
    .port_info 5 /OUTPUT 1 "sw";
    .port_info 6 /OUTPUT 1 "lw";
    .port_info 7 /OUTPUT 1 "reg_write";
    .port_info 8 /OUTPUT 1 "link";
    .port_info 9 /OUTPUT 32 "immediate";
v000002ca33f4cbe0_0 .net *"_ivl_1", 0 0, L_000002ca33f4f890;  1 drivers
v000002ca33f4ce60_0 .net *"_ivl_11", 15 0, L_000002ca33f4fe30;  1 drivers
v000002ca33f4cf00_0 .net *"_ivl_2", 15 0, L_000002ca33f51050;  1 drivers
v000002ca33f4f180_0 .net *"_ivl_5", 15 0, L_000002ca33f4fd90;  1 drivers
L_000002ca34050238 .functor BUFT 1, C4<0000000000000000>, C4<0>, C4<0>, C4<0>;
v000002ca33f4f2c0_0 .net/2u *"_ivl_8", 15 0, L_000002ca34050238;  1 drivers
v000002ca33f4e820_0 .var "alu_instr", 3 0;
v000002ca33f4e6e0_0 .var "immediate", 31 0;
v000002ca33f4ef00_0 .var "input2_select", 0 0;
v000002ca33f4e780_0 .net "ir", 31 0, L_000002ca33f524e0;  alias, 1 drivers
v000002ca33f4ed20_0 .var "link", 0 0;
v000002ca33f4eaa0_0 .var "lw", 0 0;
v000002ca33f4dc40_0 .var "pc_select", 1 0;
v000002ca33f4f360_0 .net "rd", 4 0, L_000002ca33f505b0;  1 drivers
v000002ca33f4e0a0_0 .var "reg_write", 0 0;
v000002ca33f4da60_0 .net "rs", 4 0, L_000002ca33f50970;  1 drivers
v000002ca33f4f040_0 .net "rt", 4 0, L_000002ca33f4f9d0;  1 drivers
v000002ca33f4efa0_0 .net "signed_im", 31 0, L_000002ca33f503d0;  1 drivers
v000002ca33f4e280_0 .var "sw", 0 0;
v000002ca33f4d880_0 .net "unsigned_im", 31 0, L_000002ca33f50510;  1 drivers
v000002ca33f4e1e0_0 .var "write_reg", 4 0;
E_000002ca33ee6090 .event anyedge, v000002ca33f4b560_0;
L_000002ca33f4f890 .part L_000002ca33f524e0, 15, 1;
LS_000002ca33f51050_0_0 .concat [ 1 1 1 1], L_000002ca33f4f890, L_000002ca33f4f890, L_000002ca33f4f890, L_000002ca33f4f890;
LS_000002ca33f51050_0_4 .concat [ 1 1 1 1], L_000002ca33f4f890, L_000002ca33f4f890, L_000002ca33f4f890, L_000002ca33f4f890;
LS_000002ca33f51050_0_8 .concat [ 1 1 1 1], L_000002ca33f4f890, L_000002ca33f4f890, L_000002ca33f4f890, L_000002ca33f4f890;
LS_000002ca33f51050_0_12 .concat [ 1 1 1 1], L_000002ca33f4f890, L_000002ca33f4f890, L_000002ca33f4f890, L_000002ca33f4f890;
L_000002ca33f51050 .concat [ 4 4 4 4], LS_000002ca33f51050_0_0, LS_000002ca33f51050_0_4, LS_000002ca33f51050_0_8, LS_000002ca33f51050_0_12;
L_000002ca33f4fd90 .part L_000002ca33f524e0, 0, 16;
L_000002ca33f503d0 .concat [ 16 16 0 0], L_000002ca33f4fd90, L_000002ca33f51050;
L_000002ca33f4fe30 .part L_000002ca33f524e0, 0, 16;
L_000002ca33f50510 .concat [ 16 16 0 0], L_000002ca33f4fe30, L_000002ca34050238;
L_000002ca33f50970 .part L_000002ca33f524e0, 21, 5;
L_000002ca33f4f9d0 .part L_000002ca33f524e0, 16, 5;
L_000002ca33f505b0 .part L_000002ca33f524e0, 11, 5;
    .scope S_000002ca33eca510;
T_0 ;
    %wait E_000002ca33ee8bd0;
    %load/vec4 v000002ca33f4b740_0;
    %dup/vec4;
    %pushi/vec4 0, 0, 2;
    %cmp/u;
    %jmp/1 T_0.0, 6;
    %dup/vec4;
    %pushi/vec4 1, 0, 2;
    %cmp/u;
    %jmp/1 T_0.1, 6;
    %dup/vec4;
    %pushi/vec4 2, 0, 2;
    %cmp/u;
    %jmp/1 T_0.2, 6;
    %dup/vec4;
    %pushi/vec4 3, 0, 2;
    %cmp/u;
    %jmp/1 T_0.3, 6;
    %jmp T_0.4;
T_0.0 ;
    %load/vec4 v000002ca33f4b2e0_0;
    %assign/vec4 v000002ca33f4b6a0_0, 0;
    %jmp T_0.4;
T_0.1 ;
    %load/vec4 v000002ca33f4c0a0_0;
    %flag_set/vec4 8;
    %jmp/0xz  T_0.5, 8;
    %load/vec4 v000002ca33f4b380_0;
    %assign/vec4 v000002ca33f4b6a0_0, 0;
    %jmp T_0.6;
T_0.5 ;
    %load/vec4 v000002ca33f4b2e0_0;
    %assign/vec4 v000002ca33f4b6a0_0, 0;
T_0.6 ;
    %jmp T_0.4;
T_0.2 ;
    %load/vec4 v000002ca33f4bc40_0;
    %assign/vec4 v000002ca33f4b6a0_0, 0;
    %jmp T_0.4;
T_0.3 ;
    %load/vec4 v000002ca33f4c820_0;
    %assign/vec4 v000002ca33f4b6a0_0, 0;
    %jmp T_0.4;
T_0.4 ;
    %pop/vec4 1;
    %jmp T_0;
    .thread T_0, $push;
    .scope S_000002ca33eda3e0;
T_1 ;
    %wait E_000002ca33ee6290;
    %load/vec4 v000002ca33ede580_0;
    %dup/vec4;
    %pushi/vec4 0, 0, 4;
    %cmp/u;
    %jmp/1 T_1.0, 6;
    %dup/vec4;
    %pushi/vec4 1, 0, 4;
    %cmp/u;
    %jmp/1 T_1.1, 6;
    %dup/vec4;
    %pushi/vec4 2, 0, 4;
    %cmp/u;
    %jmp/1 T_1.2, 6;
    %dup/vec4;
    %pushi/vec4 3, 0, 4;
    %cmp/u;
    %jmp/1 T_1.3, 6;
    %dup/vec4;
    %pushi/vec4 4, 0, 4;
    %cmp/u;
    %jmp/1 T_1.4, 6;
    %dup/vec4;
    %pushi/vec4 5, 0, 4;
    %cmp/u;
    %jmp/1 T_1.5, 6;
    %dup/vec4;
    %pushi/vec4 6, 0, 4;
    %cmp/u;
    %jmp/1 T_1.6, 6;
    %dup/vec4;
    %pushi/vec4 7, 0, 4;
    %cmp/u;
    %jmp/1 T_1.7, 6;
    %dup/vec4;
    %pushi/vec4 8, 0, 4;
    %cmp/u;
    %jmp/1 T_1.8, 6;
    %dup/vec4;
    %pushi/vec4 9, 0, 4;
    %cmp/u;
    %jmp/1 T_1.9, 6;
    %dup/vec4;
    %pushi/vec4 10, 0, 4;
    %cmp/u;
    %jmp/1 T_1.10, 6;
    %dup/vec4;
    %pushi/vec4 11, 0, 4;
    %cmp/u;
    %jmp/1 T_1.11, 6;
    %dup/vec4;
    %pushi/vec4 12, 0, 4;
    %cmp/u;
    %jmp/1 T_1.12, 6;
    %jmp T_1.13;
T_1.0 ;
    %load/vec4 v000002ca33ede760_0;
    %load/vec4 v000002ca33ede800_0;
    %add;
    %store/vec4 v000002ca33f4b4c0_0, 0, 32;
    %jmp T_1.13;
T_1.1 ;
    %load/vec4 v000002ca33ede760_0;
    %load/vec4 v000002ca33ede800_0;
    %sub;
    %store/vec4 v000002ca33f4b4c0_0, 0, 32;
    %jmp T_1.13;
T_1.2 ;
    %load/vec4 v000002ca33ede760_0;
    %load/vec4 v000002ca33ede800_0;
    %and;
    %store/vec4 v000002ca33f4b4c0_0, 0, 32;
    %jmp T_1.13;
T_1.3 ;
    %load/vec4 v000002ca33ede760_0;
    %load/vec4 v000002ca33ede800_0;
    %or;
    %store/vec4 v000002ca33f4b4c0_0, 0, 32;
    %jmp T_1.13;
T_1.4 ;
    %load/vec4 v000002ca33ede760_0;
    %ix/getv 4, v000002ca33f4c5a0_0;
    %shiftl 4;
    %store/vec4 v000002ca33f4b4c0_0, 0, 32;
    %jmp T_1.13;
T_1.5 ;
    %load/vec4 v000002ca33ede760_0;
    %ix/getv 4, v000002ca33f4c5a0_0;
    %shiftr 4;
    %store/vec4 v000002ca33f4b4c0_0, 0, 32;
    %jmp T_1.13;
T_1.6 ;
    %load/vec4 v000002ca33ede760_0;
    %load/vec4 v000002ca33ede800_0;
    %cmp/u;
    %flag_mov 8, 5;
    %jmp/0 T_1.14, 8;
    %pushi/vec4 1, 0, 32;
    %jmp/1 T_1.15, 8;
T_1.14 ; End of true expr.
    %pushi/vec4 0, 0, 32;
    %jmp/0 T_1.15, 8;
 ; End of false expr.
    %blend;
T_1.15;
    %store/vec4 v000002ca33f4b4c0_0, 0, 32;
    %jmp T_1.13;
T_1.7 ;
    %load/vec4 v000002ca33ede760_0;
    %load/vec4 v000002ca33ede800_0;
    %cmp/e;
    %flag_mov 8, 4;
    %jmp/0 T_1.16, 8;
    %pushi/vec4 1, 0, 32;
    %jmp/1 T_1.17, 8;
T_1.16 ; End of true expr.
    %pushi/vec4 0, 0, 32;
    %jmp/0 T_1.17, 8;
 ; End of false expr.
    %blend;
T_1.17;
    %store/vec4 v000002ca33f4b4c0_0, 0, 32;
    %jmp T_1.13;
T_1.8 ;
    %load/vec4 v000002ca33ede760_0;
    %load/vec4 v000002ca33ede800_0;
    %cmp/ne;
    %flag_mov 8, 4;
    %jmp/0 T_1.18, 8;
    %pushi/vec4 1, 0, 32;
    %jmp/1 T_1.19, 8;
T_1.18 ; End of true expr.
    %pushi/vec4 0, 0, 32;
    %jmp/0 T_1.19, 8;
 ; End of false expr.
    %blend;
T_1.19;
    %store/vec4 v000002ca33f4b4c0_0, 0, 32;
    %jmp T_1.13;
T_1.9 ;
    %load/vec4 v000002ca33ede800_0;
    %load/vec4 v000002ca33ede760_0;
    %cmp/u;
    %flag_mov 8, 5;
    %jmp/0 T_1.20, 8;
    %pushi/vec4 1, 0, 32;
    %jmp/1 T_1.21, 8;
T_1.20 ; End of true expr.
    %pushi/vec4 0, 0, 32;
    %jmp/0 T_1.21, 8;
 ; End of false expr.
    %blend;
T_1.21;
    %store/vec4 v000002ca33f4b4c0_0, 0, 32;
    %jmp T_1.13;
T_1.10 ;
    %load/vec4 v000002ca33ede800_0;
    %load/vec4 v000002ca33ede760_0;
    %cmp/u;
    %flag_or 5, 4;
    %flag_mov 8, 5;
    %jmp/0 T_1.22, 8;
    %pushi/vec4 1, 0, 32;
    %jmp/1 T_1.23, 8;
T_1.22 ; End of true expr.
    %pushi/vec4 0, 0, 32;
    %jmp/0 T_1.23, 8;
 ; End of false expr.
    %blend;
T_1.23;
    %store/vec4 v000002ca33f4b4c0_0, 0, 32;
    %jmp T_1.13;
T_1.11 ;
    %load/vec4 v000002ca33ede760_0;
    %load/vec4 v000002ca33ede800_0;
    %cmp/u;
    %flag_mov 8, 5;
    %jmp/0 T_1.24, 8;
    %pushi/vec4 1, 0, 32;
    %jmp/1 T_1.25, 8;
T_1.24 ; End of true expr.
    %pushi/vec4 0, 0, 32;
    %jmp/0 T_1.25, 8;
 ; End of false expr.
    %blend;
T_1.25;
    %store/vec4 v000002ca33f4b4c0_0, 0, 32;
    %jmp T_1.13;
T_1.12 ;
    %load/vec4 v000002ca33ede760_0;
    %load/vec4 v000002ca33ede800_0;
    %cmp/u;
    %flag_or 5, 4;
    %flag_mov 8, 5;
    %jmp/0 T_1.26, 8;
    %pushi/vec4 1, 0, 32;
    %jmp/1 T_1.27, 8;
T_1.26 ; End of true expr.
    %pushi/vec4 0, 0, 32;
    %jmp/0 T_1.27, 8;
 ; End of false expr.
    %blend;
T_1.27;
    %store/vec4 v000002ca33f4b4c0_0, 0, 32;
    %jmp T_1.13;
T_1.13 ;
    %pop/vec4 1;
    %jmp T_1;
    .thread T_1, $push;
    .scope S_000002ca33ead990;
T_2 ;
    %pushi/vec4 8421408, 0, 32;
    %ix/load 4, 0, 0;
    %flag_set/imm 4, 0;
    %store/vec4a v000002ca33f4b240, 4, 0;
    %pushi/vec4 10520608, 0, 32;
    %ix/load 4, 1, 0;
    %flag_set/imm 4, 0;
    %store/vec4a v000002ca33f4b240, 4, 0;
    %pushi/vec4 573767679, 0, 32;
    %ix/load 4, 2, 0;
    %flag_set/imm 4, 0;
    %store/vec4a v000002ca33f4b240, 4, 0;
    %pushi/vec4 1648361485, 0, 32;
    %ix/load 4, 3, 0;
    %flag_set/imm 4, 0;
    %store/vec4a v000002ca33f4b240, 4, 0;
    %pushi/vec4 38944, 0, 32;
    %ix/load 4, 4, 0;
    %flag_set/imm 4, 0;
    %store/vec4a v000002ca33f4b240, 4, 0;
    %pushi/vec4 1651638281, 0, 32;
    %ix/load 4, 5, 0;
    %flag_set/imm 4, 0;
    %store/vec4a v000002ca33f4b240, 4, 0;
    %pushi/vec4 34816032, 0, 32;
    %ix/load 4, 6, 0;
    %flag_set/imm 4, 0;
    %store/vec4a v000002ca33f4b240, 4, 0;
    %pushi/vec4 2366898176, 0, 32;
    %ix/load 4, 7, 0;
    %flag_set/imm 4, 0;
    %store/vec4a v000002ca33f4b240, 4, 0;
    %pushi/vec4 2366963713, 0, 32;
    %ix/load 4, 8, 0;
    %flag_set/imm 4, 0;
    %store/vec4a v000002ca33f4b240, 4, 0;
    %pushi/vec4 2056585219, 0, 32;
    %ix/load 4, 9, 0;
    %flag_set/imm 4, 0;
    %store/vec4a v000002ca33f4b240, 4, 0;
    %pushi/vec4 2903769089, 0, 32;
    %ix/load 4, 10, 0;
    %flag_set/imm 4, 0;
    %store/vec4a v000002ca33f4b240, 4, 0;
    %pushi/vec4 2903834624, 0, 32;
    %ix/load 4, 11, 0;
    %flag_set/imm 4, 0;
    %store/vec4a v000002ca33f4b240, 4, 0;
    %pushi/vec4 577961985, 0, 32;
    %ix/load 4, 12, 0;
    %flag_set/imm 4, 0;
    %store/vec4a v000002ca33f4b240, 4, 0;
    %pushi/vec4 134217733, 0, 32;
    %ix/load 4, 13, 0;
    %flag_set/imm 4, 0;
    %store/vec4a v000002ca33f4b240, 4, 0;
    %pushi/vec4 575864831, 0, 32;
    %ix/load 4, 14, 0;
    %flag_set/imm 4, 0;
    %store/vec4a v000002ca33f4b240, 4, 0;
    %pushi/vec4 134217731, 0, 32;
    %ix/load 4, 15, 0;
    %flag_set/imm 4, 0;
    %store/vec4a v000002ca33f4b240, 4, 0;
    %pushi/vec4 1610612736, 0, 32;
    %ix/load 4, 16, 0;
    %flag_set/imm 4, 0;
    %store/vec4a v000002ca33f4b240, 4, 0;
    %end;
    .thread T_2;
    .scope S_000002ca33eda570;
T_3 ;
    %pushi/vec4 15, 0, 32;
    %ix/load 4, 0, 0;
    %flag_set/imm 4, 0;
    %store/vec4a v000002ca33f4b420, 4, 0;
    %pushi/vec4 43, 0, 32;
    %ix/load 4, 1, 0;
    %flag_set/imm 4, 0;
    %store/vec4a v000002ca33f4b420, 4, 0;
    %pushi/vec4 22, 0, 32;
    %ix/load 4, 2, 0;
    %flag_set/imm 4, 0;
    %store/vec4a v000002ca33f4b420, 4, 0;
    %pushi/vec4 8, 0, 32;
    %ix/load 4, 3, 0;
    %flag_set/imm 4, 0;
    %store/vec4a v000002ca33f4b420, 4, 0;
    %pushi/vec4 62, 0, 32;
    %ix/load 4, 4, 0;
    %flag_set/imm 4, 0;
    %store/vec4a v000002ca33f4b420, 4, 0;
    %end;
    .thread T_3;
    .scope S_000002ca33eda570;
T_4 ;
    %vpi_call 5 49 "$monitor", "%d %d %d %d %d", &A<v000002ca33f4b420, 0>, &A<v000002ca33f4b420, 1>, &A<v000002ca33f4b420, 2>, &A<v000002ca33f4b420, 3>, &A<v000002ca33f4b420, 4> {0 0 0};
    %end;
    .thread T_4;
    .scope S_000002ca33eda570;
T_5 ;
    %wait E_000002ca33ee6850;
    %load/vec4 v000002ca33f4be20_0;
    %flag_set/vec4 8;
    %jmp/0xz  T_5.0, 8;
    %load/vec4 v000002ca33f4cb40_0;
    %load/vec4 v000002ca33f4cd20_0;
    %parti/s 16, 0, 2;
    %pad/u 18;
    %ix/vec4 4;
    %store/vec4a v000002ca33f4b420, 4, 0;
T_5.0 ;
    %jmp T_5;
    .thread T_5;
    .scope S_000002ca33ec4fb0;
T_6 ;
    %wait E_000002ca33ee6090;
    %pushi/vec4 0, 0, 1;
    %store/vec4 v000002ca33f4ed20_0, 0, 1;
    %pushi/vec4 0, 0, 1;
    %store/vec4 v000002ca33f4e280_0, 0, 1;
    %pushi/vec4 0, 0, 1;
    %store/vec4 v000002ca33f4eaa0_0, 0, 1;
    %load/vec4 v000002ca33f4efa0_0;
    %store/vec4 v000002ca33f4e6e0_0, 0, 32;
    %load/vec4 v000002ca33f4e780_0;
    %parti/s 6, 26, 6;
    %cmpi/e 0, 0, 6;
    %jmp/0xz  T_6.0, 4;
    %pushi/vec4 0, 0, 2;
    %store/vec4 v000002ca33f4dc40_0, 0, 2;
    %load/vec4 v000002ca33f4f360_0;
    %store/vec4 v000002ca33f4e1e0_0, 0, 5;
    %pushi/vec4 0, 0, 1;
    %store/vec4 v000002ca33f4ef00_0, 0, 1;
    %pushi/vec4 1, 0, 1;
    %store/vec4 v000002ca33f4e0a0_0, 0, 1;
    %load/vec4 v000002ca33f4e780_0;
    %parti/s 6, 0, 2;
    %dup/vec4;
    %pushi/vec4 32, 0, 6;
    %cmp/u;
    %jmp/1 T_6.2, 6;
    %dup/vec4;
    %pushi/vec4 33, 0, 6;
    %cmp/u;
    %jmp/1 T_6.3, 6;
    %dup/vec4;
    %pushi/vec4 34, 0, 6;
    %cmp/u;
    %jmp/1 T_6.4, 6;
    %dup/vec4;
    %pushi/vec4 35, 0, 6;
    %cmp/u;
    %jmp/1 T_6.5, 6;
    %dup/vec4;
    %pushi/vec4 36, 0, 6;
    %cmp/u;
    %jmp/1 T_6.6, 6;
    %dup/vec4;
    %pushi/vec4 37, 0, 6;
    %cmp/u;
    %jmp/1 T_6.7, 6;
    %dup/vec4;
    %pushi/vec4 0, 0, 6;
    %cmp/u;
    %jmp/1 T_6.8, 6;
    %dup/vec4;
    %pushi/vec4 2, 0, 6;
    %cmp/u;
    %jmp/1 T_6.9, 6;
    %dup/vec4;
    %pushi/vec4 42, 0, 6;
    %cmp/u;
    %jmp/1 T_6.10, 6;
    %dup/vec4;
    %pushi/vec4 8, 0, 6;
    %cmp/u;
    %jmp/1 T_6.11, 6;
    %jmp T_6.12;
T_6.2 ;
    %pushi/vec4 0, 0, 4;
    %store/vec4 v000002ca33f4e820_0, 0, 4;
    %jmp T_6.12;
T_6.3 ;
    %pushi/vec4 0, 0, 4;
    %store/vec4 v000002ca33f4e820_0, 0, 4;
    %jmp T_6.12;
T_6.4 ;
    %pushi/vec4 1, 0, 4;
    %store/vec4 v000002ca33f4e820_0, 0, 4;
    %jmp T_6.12;
T_6.5 ;
    %pushi/vec4 1, 0, 4;
    %store/vec4 v000002ca33f4e820_0, 0, 4;
    %jmp T_6.12;
T_6.6 ;
    %pushi/vec4 2, 0, 4;
    %store/vec4 v000002ca33f4e820_0, 0, 4;
    %jmp T_6.12;
T_6.7 ;
    %pushi/vec4 3, 0, 4;
    %store/vec4 v000002ca33f4e820_0, 0, 4;
    %jmp T_6.12;
T_6.8 ;
    %pushi/vec4 4, 0, 4;
    %store/vec4 v000002ca33f4e820_0, 0, 4;
    %jmp T_6.12;
T_6.9 ;
    %pushi/vec4 5, 0, 4;
    %store/vec4 v000002ca33f4e820_0, 0, 4;
    %jmp T_6.12;
T_6.10 ;
    %pushi/vec4 6, 0, 4;
    %store/vec4 v000002ca33f4e820_0, 0, 4;
    %jmp T_6.12;
T_6.11 ;
    %pushi/vec4 2, 0, 2;
    %store/vec4 v000002ca33f4dc40_0, 0, 2;
    %pushi/vec4 0, 0, 4;
    %store/vec4 v000002ca33f4e820_0, 0, 4;
    %jmp T_6.12;
T_6.12 ;
    %pop/vec4 1;
    %jmp T_6.1;
T_6.0 ;
    %load/vec4 v000002ca33f4e780_0;
    %parti/s 3, 29, 6;
    %cmpi/e 1, 0, 3;
    %jmp/0xz  T_6.13, 4;
    %pushi/vec4 0, 0, 2;
    %store/vec4 v000002ca33f4dc40_0, 0, 2;
    %load/vec4 v000002ca33f4f040_0;
    %store/vec4 v000002ca33f4e1e0_0, 0, 5;
    %pushi/vec4 1, 0, 1;
    %store/vec4 v000002ca33f4ef00_0, 0, 1;
    %pushi/vec4 1, 0, 1;
    %store/vec4 v000002ca33f4e0a0_0, 0, 1;
    %load/vec4 v000002ca33f4e780_0;
    %parti/s 3, 26, 6;
    %cmpi/ne 0, 0, 3;
    %flag_get/vec4 4;
    %jmp/0 T_6.17, 4;
    %load/vec4 v000002ca33f4e780_0;
    %parti/s 3, 26, 6;
    %pushi/vec4 2, 0, 3;
    %cmp/ne;
    %flag_get/vec4 4;
    %and;
T_6.17;
    %flag_set/vec4 8;
    %jmp/0xz  T_6.15, 8;
    %load/vec4 v000002ca33f4d880_0;
    %store/vec4 v000002ca33f4e6e0_0, 0, 32;
T_6.15 ;
    %load/vec4 v000002ca33f4e780_0;
    %parti/s 3, 26, 6;
    %dup/vec4;
    %pushi/vec4 0, 0, 3;
    %cmp/u;
    %jmp/1 T_6.18, 6;
    %dup/vec4;
    %pushi/vec4 1, 0, 3;
    %cmp/u;
    %jmp/1 T_6.19, 6;
    %dup/vec4;
    %pushi/vec4 2, 0, 3;
    %cmp/u;
    %jmp/1 T_6.20, 6;
    %dup/vec4;
    %pushi/vec4 3, 0, 3;
    %cmp/u;
    %jmp/1 T_6.21, 6;
    %dup/vec4;
    %pushi/vec4 4, 0, 3;
    %cmp/u;
    %jmp/1 T_6.22, 6;
    %dup/vec4;
    %pushi/vec4 5, 0, 3;
    %cmp/u;
    %jmp/1 T_6.23, 6;
    %jmp T_6.24;
T_6.18 ;
    %pushi/vec4 0, 0, 4;
    %store/vec4 v000002ca33f4e820_0, 0, 4;
    %jmp T_6.24;
T_6.19 ;
    %pushi/vec4 0, 0, 4;
    %store/vec4 v000002ca33f4e820_0, 0, 4;
    %jmp T_6.24;
T_6.20 ;
    %pushi/vec4 6, 0, 4;
    %store/vec4 v000002ca33f4e820_0, 0, 4;
    %jmp T_6.24;
T_6.21 ;
    %pushi/vec4 6, 0, 4;
    %store/vec4 v000002ca33f4e820_0, 0, 4;
    %jmp T_6.24;
T_6.22 ;
    %pushi/vec4 2, 0, 4;
    %store/vec4 v000002ca33f4e820_0, 0, 4;
    %jmp T_6.24;
T_6.23 ;
    %pushi/vec4 3, 0, 4;
    %store/vec4 v000002ca33f4e820_0, 0, 4;
    %jmp T_6.24;
T_6.24 ;
    %pop/vec4 1;
    %jmp T_6.14;
T_6.13 ;
    %load/vec4 v000002ca33f4e780_0;
    %parti/s 3, 29, 6;
    %cmpi/e 3, 0, 3;
    %jmp/0xz  T_6.25, 4;
    %pushi/vec4 1, 0, 2;
    %store/vec4 v000002ca33f4dc40_0, 0, 2;
    %pushi/vec4 0, 0, 1;
    %store/vec4 v000002ca33f4ef00_0, 0, 1;
    %pushi/vec4 0, 0, 1;
    %store/vec4 v000002ca33f4e0a0_0, 0, 1;
    %load/vec4 v000002ca33f4e780_0;
    %parti/s 3, 26, 6;
    %dup/vec4;
    %pushi/vec4 0, 0, 3;
    %cmp/u;
    %jmp/1 T_6.27, 6;
    %dup/vec4;
    %pushi/vec4 1, 0, 3;
    %cmp/u;
    %jmp/1 T_6.28, 6;
    %dup/vec4;
    %pushi/vec4 2, 0, 3;
    %cmp/u;
    %jmp/1 T_6.29, 6;
    %dup/vec4;
    %pushi/vec4 3, 0, 3;
    %cmp/u;
    %jmp/1 T_6.30, 6;
    %dup/vec4;
    %pushi/vec4 4, 0, 3;
    %cmp/u;
    %jmp/1 T_6.31, 6;
    %dup/vec4;
    %pushi/vec4 6, 0, 3;
    %cmp/u;
    %jmp/1 T_6.32, 6;
    %jmp T_6.33;
T_6.27 ;
    %pushi/vec4 7, 0, 4;
    %store/vec4 v000002ca33f4e820_0, 0, 4;
    %jmp T_6.33;
T_6.28 ;
    %pushi/vec4 8, 0, 4;
    %store/vec4 v000002ca33f4e820_0, 0, 4;
    %jmp T_6.33;
T_6.29 ;
    %pushi/vec4 9, 0, 4;
    %store/vec4 v000002ca33f4e820_0, 0, 4;
    %jmp T_6.33;
T_6.30 ;
    %pushi/vec4 10, 0, 4;
    %store/vec4 v000002ca33f4e820_0, 0, 4;
    %jmp T_6.33;
T_6.31 ;
    %pushi/vec4 11, 0, 4;
    %store/vec4 v000002ca33f4e820_0, 0, 4;
    %jmp T_6.33;
T_6.32 ;
    %pushi/vec4 12, 0, 4;
    %store/vec4 v000002ca33f4e820_0, 0, 4;
    %jmp T_6.33;
T_6.33 ;
    %pop/vec4 1;
    %jmp T_6.26;
T_6.25 ;
    %load/vec4 v000002ca33f4e780_0;
    %parti/s 6, 26, 6;
    %cmpi/e 35, 0, 6;
    %jmp/0xz  T_6.34, 4;
    %pushi/vec4 0, 0, 2;
    %store/vec4 v000002ca33f4dc40_0, 0, 2;
    %load/vec4 v000002ca33f4f040_0;
    %store/vec4 v000002ca33f4e1e0_0, 0, 5;
    %pushi/vec4 1, 0, 1;
    %store/vec4 v000002ca33f4ef00_0, 0, 1;
    %pushi/vec4 0, 0, 4;
    %store/vec4 v000002ca33f4e820_0, 0, 4;
    %pushi/vec4 1, 0, 1;
    %store/vec4 v000002ca33f4eaa0_0, 0, 1;
    %pushi/vec4 1, 0, 1;
    %store/vec4 v000002ca33f4e0a0_0, 0, 1;
    %jmp T_6.35;
T_6.34 ;
    %load/vec4 v000002ca33f4e780_0;
    %parti/s 6, 26, 6;
    %cmpi/e 43, 0, 6;
    %jmp/0xz  T_6.36, 4;
    %pushi/vec4 0, 0, 2;
    %store/vec4 v000002ca33f4dc40_0, 0, 2;
    %load/vec4 v000002ca33f4f040_0;
    %store/vec4 v000002ca33f4e1e0_0, 0, 5;
    %pushi/vec4 1, 0, 1;
    %store/vec4 v000002ca33f4ef00_0, 0, 1;
    %pushi/vec4 0, 0, 4;
    %store/vec4 v000002ca33f4e820_0, 0, 4;
    %pushi/vec4 1, 0, 1;
    %store/vec4 v000002ca33f4e280_0, 0, 1;
    %pushi/vec4 0, 0, 1;
    %store/vec4 v000002ca33f4e0a0_0, 0, 1;
    %jmp T_6.37;
T_6.36 ;
    %load/vec4 v000002ca33f4e780_0;
    %parti/s 6, 26, 6;
    %pad/u 32;
    %cmpi/e 2, 0, 32;
    %jmp/0xz  T_6.38, 4;
    %pushi/vec4 3, 0, 2;
    %store/vec4 v000002ca33f4dc40_0, 0, 2;
    %pushi/vec4 0, 0, 1;
    %store/vec4 v000002ca33f4e0a0_0, 0, 1;
    %jmp T_6.39;
T_6.38 ;
    %load/vec4 v000002ca33f4e780_0;
    %parti/s 6, 26, 6;
    %pad/u 32;
    %cmpi/e 3, 0, 32;
    %jmp/0xz  T_6.40, 4;
    %pushi/vec4 3, 0, 2;
    %store/vec4 v000002ca33f4dc40_0, 0, 2;
    %pushi/vec4 0, 0, 1;
    %store/vec4 v000002ca33f4e0a0_0, 0, 1;
    %pushi/vec4 1, 0, 1;
    %store/vec4 v000002ca33f4ed20_0, 0, 1;
T_6.40 ;
T_6.39 ;
T_6.37 ;
T_6.35 ;
T_6.26 ;
T_6.14 ;
T_6.1 ;
    %jmp T_6;
    .thread T_6, $push;
    .scope S_000002ca33ecdbd0;
T_7 ;
    %wait E_000002ca33ee5fd0;
    %pushi/vec4 0, 0, 32;
    %store/vec4 v000002ca33f4ec80_0, 0, 32;
    %pushi/vec4 0, 0, 32;
    %ix/load 4, 4, 0;
    %flag_set/imm 4, 0;
    %store/vec4a v000002ca33f4f720, 4, 0;
    %pushi/vec4 5, 0, 32;
    %ix/load 4, 5, 0;
    %flag_set/imm 4, 0;
    %store/vec4a v000002ca33f4f720, 4, 0;
    %pushi/vec4 0, 0, 32;
    %ix/load 4, 0, 0;
    %flag_set/imm 4, 0;
    %store/vec4a v000002ca33f4f720, 4, 0;
    %pushi/vec4 65535, 0, 32;
    %ix/load 4, 29, 0;
    %flag_set/imm 4, 0;
    %store/vec4a v000002ca33f4f720, 4, 0;
    %pushi/vec4 0, 0, 1;
    %store/vec4 v000002ca33f4fc50_0, 0, 1;
    %jmp T_7;
    .thread T_7;
    .scope S_000002ca33ecdbd0;
T_8 ;
    %wait E_000002ca33ee6850;
    %load/vec4 v000002ca33f4fc50_0;
    %pad/u 32;
    %cmpi/e 0, 0, 32;
    %jmp/0xz  T_8.0, 4;
    %pushi/vec4 1, 0, 1;
    %store/vec4 v000002ca33f4fc50_0, 0, 1;
    %jmp T_8.1;
T_8.0 ;
    %load/vec4 v000002ca33f4d920_0;
    %flag_set/vec4 8;
    %jmp/0xz  T_8.2, 8;
    %load/vec4 v000002ca33f4de20_0;
    %load/vec4 v000002ca33f50c90_0;
    %pad/u 7;
    %ix/vec4 4;
    %store/vec4a v000002ca33f4f720, 4, 0;
T_8.2 ;
    %load/vec4 v000002ca33f4ee60_0;
    %flag_set/vec4 8;
    %jmp/0xz  T_8.4, 8;
    %load/vec4 v000002ca33f4f5e0_0;
    %ix/load 4, 31, 0;
    %flag_set/imm 4, 0;
    %store/vec4a v000002ca33f4f720, 4, 0;
T_8.4 ;
    %load/vec4 v000002ca33f4f540_0;
    %store/vec4 v000002ca33f4ec80_0, 0, 32;
T_8.1 ;
    %jmp T_8;
    .thread T_8;
    .scope S_000002ca33ecda40;
T_9 ;
    %pushi/vec4 0, 0, 1;
    %store/vec4 v000002ca33f50470_0, 0, 1;
    %pushi/vec4 1, 0, 1;
    %store/vec4 v000002ca33f51690_0, 0, 1;
    %delay 1000, 0;
    %pushi/vec4 0, 0, 1;
    %store/vec4 v000002ca33f51690_0, 0, 1;
    %end;
    .thread T_9;
    .scope S_000002ca33ecda40;
T_10 ;
    %vpi_call 2 16 "$dumpfile", "test.vcd" {0 0 0};
    %vpi_call 2 17 "$dumpvars", 32'sb00000000000000000000000000000000, S_000002ca33ecda40 {0 0 0};
    %delay 2000000, 0;
    %vpi_call 2 19 "$finish" {0 0 0};
    %end;
    .thread T_10;
    .scope S_000002ca33ecda40;
T_11 ;
    %delay 5000, 0;
    %load/vec4 v000002ca33f50470_0;
    %inv;
    %store/vec4 v000002ca33f50470_0, 0, 1;
    %jmp T_11;
    .thread T_11;
# The file index is used to find the file name in the following table.
:file_names 8;
    "N/A";
    "<interactive>";
    "tb.v";
    "./top.v";
    "./alu.v";
    "./memory.v";
    "./mux.v";
    "./control.v";
