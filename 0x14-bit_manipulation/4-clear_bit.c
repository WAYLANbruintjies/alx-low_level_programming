#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * clear_bit - Sets the value of a bit to 0 at a given index
 * @n: a pointer to the number to be computed
 * @index: index of the bit
 * Return: 1 (Success), -1 (Failed)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
