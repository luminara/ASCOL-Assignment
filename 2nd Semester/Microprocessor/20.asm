.MODEL SMALL
.STACK 100H

.DATA
    MSG1 DB 'Enter a character: $'
    MSG_VOWEL DB 0DH,0AH,'Vowel$'
    MSG_CONS  DB 0DH,0AH,'Consonant$'

.CODE
MAIN PROC
    MOV AX, @DATA
    MOV DS, AX

    LEA DX, MSG1
    MOV AH, 09H
    INT 21H                      ; Display prompt

    MOV AH, 01H
    INT 21H                       ; Read character into AL

    CMP AL, 61H                    ; Is character lowercase? (61H = 'a')
    JB CHECK_UPPER                  ; If AL < 'a', it must be uppercase — skip conversion
    SUB AL, 20H                      ; Convert lowercase to uppercase for uniform comparison

CHECK_UPPER:
    CMP AL, 'A'                      ; Compare against each vowel (A, E, I, O, U)
    JE VOWEL
    CMP AL, 'E'
    JE VOWEL
    CMP AL, 'I'
    JE VOWEL
    CMP AL, 'O'
    JE VOWEL
    CMP AL, 'U'
    JE VOWEL
    JMP CONSONANT                     ; If none matched, it's a consonant

VOWEL:
    LEA DX, MSG_VOWEL
    JMP PRINT

CONSONANT:
    LEA DX, MSG_CONS
    JMP PRINT
    
PRINT:
    MOV AH, 09H
    INT 21H

    MOV AH, 4CH
    INT 21H
MAIN ENDP
END MAIN
