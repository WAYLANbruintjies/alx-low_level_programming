 global    main
          extern    printf
main:
	call  printf
	xor   eax, eax
	 mov   edi, format
	mov 	eax, 0
	ret

format: db `Hello, Holberton\n`,0
