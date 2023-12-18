#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_bit - Returns the value of a bit at a given index
 * @n: integer number to search
 * @index: index of the bit
 * Return: value of the bit at index
 * or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 63)
		return (-1);

	bit = (n >> index) & 1;

	return (bit);
}
