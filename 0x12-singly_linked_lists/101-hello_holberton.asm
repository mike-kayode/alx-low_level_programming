section .data
format db "Hello, Holberton", 0
nl db 10, 0

section .text
extern printf

global main
main:
sub rsp, 8       ; Align stack pointer to 16-byte boundary (multiple of 8)

    mov rdi, format  ; Pass format string as the first argument
    xor eax, eax     ; Clear RAX register for variadic function call
    call printf      ; Call printf

    mov rdi, nl      ; Pass newline string as the first argument
    xor eax, eax     ; Clear RAX register for variadic function call
    call printf      ; Call printf

    add rsp, 8       ; Restore stack pointer

    xor eax, eax     ; Return 0
    ret
