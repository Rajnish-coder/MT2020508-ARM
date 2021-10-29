     AREA     queation2, CODE, READONLY
     EXPORT __main
     IMPORT printMsg
	 IMPORT printMsg2p
	 IMPORT printMsg4p
     ENTRY 
__main  FUNCTION	 	
        
	    MOV  R1, #0x20000000   ; base address of array
		MOV  R2, #10         ; size of array is 10
		MOV  R3, #0
loop    CMP  R2, #1
        STR  R3, [R1,R3]       ; array values are 0,4,8,12,16...so on
		ADD  R3, #0x4
		SUBGT  R2, #1
		BGT loop
		
		;-----------------
		MOV  R3, #0
        MOV  R2, #10
		MOV  R0, #0

loop1   LDR  R4, [R1,R3]
		ADD  R3, #0x4
		CMP  R0, R4
		IT   LT
		MOVLT  R0, R4
		SUB  R2, #1
		CMP  R2, #0
		IT  NE
		BNE  loop1
		
		;-----------------
		BL printMsg               ; largest value present in register R0
stop    B stop ; stop program
     ENDFUNC
     END 