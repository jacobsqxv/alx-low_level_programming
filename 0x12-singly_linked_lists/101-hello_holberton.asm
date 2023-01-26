		extern	printf		; function to be called

	        section .data		; initialize variables
msg:		db "Hello, Holberton", 0 ; string needs 0
fmt:	    	db "%s", 10, 0          ; printf format, "\n",'0'

	        section .text		; Code section.

	        global main		; standard gcc entry point
main:					; label for the entry point
	        push    rbp		; set stack frame

		mov	rdi,fmt
		mov	rsi,msg
		mov	rax,0		
	        call    printf		; Call C function

		pop	rbp		; restore stack

		mov	rax,0		; normal, no error, return value
		ret			; return
