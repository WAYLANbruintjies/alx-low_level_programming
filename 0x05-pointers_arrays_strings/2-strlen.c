#include "main.h"
#include <stdio.h>

/**
 * _strlen - Returns the length of a string
 * @s: The string to get the length of
 * Return: string lenght
 */

int _strlen(char *s)
{
	size_t length = 0;

	while (*s++)
	length++;

	return (length);
}
