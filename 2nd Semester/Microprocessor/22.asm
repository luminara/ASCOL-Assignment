.MODEL SMALL
.STACK 100H

.DATA
    STR1 DB 'MICROPROCESSOR$'
    LEN  DB 14
    CHAR_TO_COUNT DB 'O'
    MSG1 DB 'Occurrences of O: $'
    COUNT DB ?

.CODE
MAIN PROC
    MOV AX, @DATA
    MOV DS, AX

    LEA SI, STR1                 ; SI points to start of string
    MOV CL, LEN                  ; CL = length of string (loop counter)
    MOV CH, 00H
    MOV BL, CHAR_TO_COUNT        ; BL = character to count ('O')
    MOV DL, 0                    ; DL = running count, initialized to 0

COUNT_LOOP:
    CMP CL, 0                    ; Have we scanned every character?
    JE DISPLAY                   ; If CL = 0, we're done scanning

    MOV AL, [SI]                 ; Load current character
    CMP AL, BL                   ; Compare with target character 'O'
    JNE SKIP                     ; If not equal, skip the increment

    INC DL                       ; Match found — increment count

SKIP:
    INC SI                       ; Move to next character
    DEC CL                       ; One character fewer to check
    JMP COUNT_LOOP               ; Repeat

DISPLAY:
    MOV COUNT, DL                ; Save final count
    LEA DX, MSG1
    MOV AH, 09H
    INT 21H                      ; Print "Occurrences of O: "

    MOV DL, COUNT                ; Reload count (DX overwritten above)
    ADD DL, 30H                  ; Convert numeric count to ASCII digit
    MOV AH, 02H
    INT 21H                      ; Print the digit

    MOV AH, 4CH
    INT 21H
MAIN ENDP
END MAIN
