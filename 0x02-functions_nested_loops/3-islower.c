#include "main.h"

/**
 * _islower - Checks for lower case characters
 * @c: The character to be checked
 * Return: 1 for lowercase char or 0 for anyting else
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}
