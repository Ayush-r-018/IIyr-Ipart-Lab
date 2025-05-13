// ; There are 10 8 bit numbers stored from location 3000H Copy number to another Table 4000H by complementing D6 and D7 bit if they are +ve number
	   LXI H,3000
	   LXI D,4000
	   MVI C,0A

START:	   MOV A,M
	   ANI 80
	   JZ POSITIVE

NEGATIVE:	   MOV A,M
	   STAX D
	   JMP NEXT

POSITIVE:	   MOV A,M
	   XRI 40
	   XRI 80
	   STAX D

NEXT:	   INX H
	   INX D
	   DCR C
	   JNZ START
	   HLT
