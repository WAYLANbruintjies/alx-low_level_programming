#include "main.h"

/**
 * _memcpy - A function that copies memory area
 * @src: Memory area to copy from
 * @dest: Memory are to copy to
 * @n: Number of bytes
 * Return: A pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
