load R0,0
load R1,5
load R2,-2
load R8,48
loop1:
store R1,[0xA0]
load R5,[0xA0]
addi R1,R1,R2

jmplE R1<=R0,exit
jmp loop1
exit:
addi R5,R5,R8
move RF,R5
halt