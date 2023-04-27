SECTION .data
    message db 'Hello, Holberton', 0
    format db '%s', 10, 0

SECTION .text
    extern printf
    global main

main:
    ; prepare arguments for printf
    mov rdi, format
    mov rsi, message
    xor eax, eax    ; clear eax register

    ; call printf
    call printf

    ; exit program
    xor eax, eax
    ret
