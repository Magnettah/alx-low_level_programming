section .data
	format db "Hello, Holberton", 10, 0 ; message to print

section .text
	global main ; program entry point
	extern printf

main:
	mov edi, format ; fortmat specifier
	xor eax, eax    ; clear RAX register (for varargs)
	call printf     ; call the printf to print message

	mov eax, 0      ; Return 0 as the exit code
	ret		; return from main
