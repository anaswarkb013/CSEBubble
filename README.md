# CSE Bubble

A 32-bit single cycle processor using verilog. Instruction encoding identical to MIPS standard is used.

**R format Instruction**

<table>
<tr>
    <th>opcode</th>
    <th>rs</th>
    <th>rt</th>
    <th>rd</th>
    <th>sh amt</th>
    <th>funct</th>
</tr>
<tr>
    <td>6 bits</td>
    <td>5 bits</td>
    <td>5 bits</td>
    <td>5 bits</td>
    <td>5 bits</td>
    <td>6 bits</td>  
</tr>
</table>

**I format Instruction**

<table>
<tr>
    <th>opcode</th>
    <th>rs</th>
    <th>rt</th>
    <th>immediate</th>
</tr>
<tr>
    <td>6 bits</td>
    <td>5 bits</td>
    <td>5 bits</td>
    <td>16 bits</td>  
</tr>
</table>

**J Format Instruction**

<table>
    <tr>
        <th>opcode</th>
        <th>jump target</th>
    </tr>
    <tr>
        <td>6 bits</td>
        <td>26 bits</td>
    </tr>
</table>

**ALU Instruction Set**

<table>
  <tr>
   <td><strong>Instruction</strong>
   </td>
   <td><strong>Opcode</strong>
   </td>
   <td><strong>Funct</strong>
   </td>
  </tr>
  <tr>
   <td>add
   </td>
   <td>0
   </td>
   <td>32
   </td>
  </tr>
  <tr>
   <td>addi
   </td>
   <td>0
   </td>
   <td>33
   </td>
  </tr>
  <tr>
   <td>sub
   </td>
   <td>0
   </td>
   <td>34
   </td>
  </tr>
  <tr>
   <td>subi
   </td>
   <td>0
   </td>
   <td>35
   </td>
  </tr>
  <tr>
   <td>and
   </td>
   <td>0
   </td>
   <td>36
   </td>
  </tr>
  <tr>
   <td>or
   </td>
   <td>0
   </td>
   <td>37
   </td>
  </tr>
  <tr>
   <td>sll
   </td>
   <td>0
   </td>
   <td>0
   </td>
  </tr>
  <tr>
   <td>srl
   </td>
   <td>0
   </td>
   <td>2
   </td>
  </tr>
  <tr>
   <td>beq
   </td>
   <td>3
   </td>
   <td>NA
   </td>
  </tr>
  <tr>
   <td>bne
   </td>
   <td>4
   </td>
   <td>NA
   </td>
  </tr>
  <tr>
   <td>bgt
   </td>
   <td>5
   </td>
   <td>NA
   </td>
  </tr>
  <tr>
   <td>bgte
   </td>
   <td>6
   </td>
   <td>NA
   </td>
  </tr>
  <tr>
   <td>blt 
   </td>
   <td>7
   </td>
   <td>NA
   </td>
  </tr>
  <tr>
   <td>bleq
   </td>
   <td>8
   </td>
   <td>NA
   </td>
  </tr>
</table>

---

**Testing**

The following code for Bubble Sort is used for testing. The code is entered in instruction memory in memory.v

```
add $s0, $a0, $0
add $s1, $a1, $0 
addi $s2, $s1, -1 
Loop1: beq $s2, $0, exit1 
add $s3, $0, $0 
Loop2: beq $s3, $s2, exit2 
add $t0, $s0, $s3 
lw $s4, 0($t0) 
lw $s5, 1($t0) 
ble $s4, $s5, afterswap
sw $s4, 1($t0)
sw $s5, 0($t0)
afterswap:
addi $s3, $s3, 1 
j Loop2
exit2:
addi $s2, $s2, -1 
j Loop1
exit1:
beq $0 , $0 , 0
```
