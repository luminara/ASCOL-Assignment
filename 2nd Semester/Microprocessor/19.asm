.MODEL SMALL
.STACK 100H

.DATA
    STR1    DB 'MADAM'                    ; string to test. No need for $ at the end because STR1 isn't printed in this code.
    LEN     DB 5                    ; length of string
    MSG_YES DB 0DH,0AH,'Palindrome$'       ; message if it IS a palindrome
    MSG_NO  DB 0DH,0AH,'Not a Palindrome$' ; message if it is NOT

.CODE
MAIN PROC
    MOV AX, @DATA                ; load address of data segment into AX
    MOV DS, AX                   ; copy AX into DS

    LEA SI, STR1                 ; SI = pointer to start of string (left end)
    LEA DI, STR1                 ; DI = second pointer, will move to right end
    MOV CL, LEN                  ; CL = string length
    MOV CH, 00H                  ; clear CH so CX = LEN exactly

    ADD DI, CX                   ; move DI to one-past-the-last character
    DEC DI                       ; adjust DI to point to the LAST character (right end)

    SHR CL, 1                    ; divide length by 2 (only need to compare half the string)
    JCXZ PALIN_YES                ; if length was 0 or 1, it's trivially a palindrome (CL=0 after shift)

CHECK_LOOP:
    MOV AL, [SI]                  ; load character from left pointer
    CMP AL, [DI]                   ; compare directly against right pointer's character — no BL needed
    JNE PALIN_NO                    ; if they differ, not a palindrome — exit early

    INC SI                            ; move left pointer rightward
    DEC DI                              ; move right pointer leftward
    LOOP CHECK_LOOP                       ; decrement CX, repeat until CX = 0 (LOOP does this in one instruction)

PALIN_YES:
    LEA DX, MSG_YES
    JMP PRINT

PALIN_NO:
    LEA DX, MSG_NO
    JMP PRINT

PRINT:
    MOV AH, 09H
    INT 21H

    MOV AH, 4CH                    ; exit program
    INT 21H

MAIN ENDP
END MAIN
