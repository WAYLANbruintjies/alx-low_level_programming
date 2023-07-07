#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: the string to be computed
 * containing binary numbers
 * Return: the converted number or 0 if
 * one or more chars in string is not 0 or 1
 * and when string is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int n;
	unsigned int value = 0;

	if (!b) /* if (b == NULL) */
		return (0);

	for (n = 0; b[n]; n++)
	{
		if (b[n] < '0' || b[n] > '1')
			return (0);
		value = 2 * value + (b[n] - '0');
	}

	return (value);
}
