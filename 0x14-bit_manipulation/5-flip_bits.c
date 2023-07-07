#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * flip_bits - Indicate the number of bits you need
 * to get from one number to the other
 * @n: first number input value
 * @m: second number input value
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, counter = 0;
	unsigned long int excl = n ^ m;
	unsigned long int current;

	for (x = 63; x >= 0; x--)
	{
		current = excl >> x;
		if (current & 1)
			counter++;
	}

	return (counter);
}
