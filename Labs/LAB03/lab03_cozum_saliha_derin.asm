load R0, [0xA1]
load R1, [0xA0]
load R2, 1
hiz3:
jmpLE R1<=R0, hiz
jmp hiz2
hiz: 
addi R1, R1, R2
store R1, [0xA0]
jmpEQ R1=R0, hiz2
jmp hiz3 
hiz2:
halt