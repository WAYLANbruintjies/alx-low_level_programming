#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * set_bit - Sets the value of a bit to 1
 * at a given index
 * @n: a pointer to the number to be computed
 * @index: index of the bit
 * NOTE: index starts at 0
 * Return: 1 if it worked or (Success)
 *  -1 if an error occured (Failure)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
