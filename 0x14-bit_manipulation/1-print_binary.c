#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to be printed in binary
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int i, track = 0;
	unsigned long int current;

	for (i = 63; i >= 0; i--)
	{
		current = n >> i;

		if (current & 1)
		{
			_putchar('1');
			track++;
		}
		else if (track)
			_putchar('0');
	}
	if (!track) /* if (track == NULL) */
		_putchar('0');
}
