.ORIG x3000

KPOLL 	LDI R0, KBSR
     	BRzp KPOLL
     	LDI R0, KBDR
DPOLL	LDI R1, DSR
	BRzp DPOLL
	STI R0, DDR
HALT

KBSR .FILL xFE00
KBDR .FILL xFE02
DSR  .FILL xFE04
DDR  .FILL xFE06
.END
