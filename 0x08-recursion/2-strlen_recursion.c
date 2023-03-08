#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string
 * @s: The string to be computed
 * Return: Integer value
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		s++;
	return (_strlen_recursion(s) + 1);
	}
}
