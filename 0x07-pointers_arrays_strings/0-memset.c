#include "main.h"

/**
 * _memset - A function that fills memory with a constant byte
 * @n: Number of bytes
 * @s: Memory area
 * @b: Constant byte value
 * Return: Pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
