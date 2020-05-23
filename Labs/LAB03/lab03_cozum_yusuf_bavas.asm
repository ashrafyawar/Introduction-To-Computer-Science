load R1,[0xA0]
load R0,[0xA1]
load R3,01

jmpLE R1<=R0,jump

halt

jump:

jmpEQ R1=R0,kontrol
addi R1,R1,R3
jmpLE R1<=R0,jump
	
kontrol:

store R1,[0xA0]
halt