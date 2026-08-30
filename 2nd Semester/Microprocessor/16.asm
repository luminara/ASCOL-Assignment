.MODEL SMALL
.STACK 100H

.DATA
    MSG DB 'Hello, Kiran Chhetri$'   ; Define string; '$' marks end (required by INT 21H/09H)

.CODE
MAIN PROC                  ; Start of procedure MAIN
    MOV AX, @DATA           ; Load address of data segment into AX
    MOV DS, AX              ; Copy AX into DS (DS can't be loaded directly with a constant)

    LEA DX, MSG             ; Load Effective Address of MSG into DX (DX must point to string for INT 21H/09H)
    MOV AH, 09H              ; Function 09H of INT 21H = display string (terminated by '$')
    INT 21H                  ; Call DOS interrupt to print the string

    MOV AH, 4CH              ; Function 4CH = terminate program
    INT 21H                  ; Return control to DOS/OS
MAIN ENDP                  ; End of procedure
END MAIN                   ; End of program, MAIN is entry point
