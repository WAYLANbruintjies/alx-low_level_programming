#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings - Prints strings, followed by a new line
 * @separator - the string to be printed
 * @n: number of strings passed to the function
 * @...: variadic function
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	unsigned int index;
	char *str;

	va_start(string, n);

	for (index = 0; index < n; index++)
	{
		str = va_arg(string, char*);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	va_end(string);
}
