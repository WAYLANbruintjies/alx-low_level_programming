#include "main.h"
#include <stdio.h>

/**
 * print_numbers - A function that prints the numbers, from 0 to 9
 * Return: Numbers from 0 to 9
 */

void print_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		_putchar(n + '0');
	}
	_putchar('\n');
	return (0);
}
