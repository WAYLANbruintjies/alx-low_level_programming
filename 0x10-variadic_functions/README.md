* 0x10. C - Variadic functions
Learning Objectives At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

What are variadic functions How to use va_start, va_arg and va_end macros Why and how to use the const type qualifier

Tasks

0. Beauty is variable, ugliness is constant
Write a function that returns the sum of all its parameters. File: 0-sum_them_all.c Prototype: int sum_them_all(const unsigned int n, ...);

1. To be is to be the value of a variable
Write a function that prints numbers, followed by a new line. File: 1-print_numbers.c Prototype: void print_numbers(const char *separator, const unsigned int n, ...);

2. One woman's constant is another woman's variable
Write a function that prints strings, followed by a new line. File: 2-print_strings.c Prototype: void print_strings(const char *separator, const unsigned int n, ...);

3. To be is a to be the value of a variable
Write a function that prints anything. File: 3-print_all.c Prototype: void print_all(const char * const format, ...);
