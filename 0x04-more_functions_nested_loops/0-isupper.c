#include "main.h"

/**
 * _isupper - Write a function that checks for uppercase character
 * @c : Is the character to be checked
 * Return: 1 if c is uppercase or 0 if not
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
	return (1);
	}
	return (0);
}
