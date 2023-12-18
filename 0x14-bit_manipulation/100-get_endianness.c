#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_endianness - A function that checks the endianness
 * Return: 0 if big, 1 if little
 */
int get_endianness(void)
{
	unsigned int z = 1;
	char *o = (char *) &z;

	return (*o);
}
