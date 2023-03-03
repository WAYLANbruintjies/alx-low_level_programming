#include "main.h"
#include <stdio.h>

/**
 * _strcmp - Compares two strings
 * @s1: Pointer to first string to be compared
 * @s2: Pointer to second string to be compared
 * Return: If str1 < str2, the negative diff of unmatched characters
 * If str1 == str2, output 0
 * If str1 > str2, the positive diff of unmatched characters
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
