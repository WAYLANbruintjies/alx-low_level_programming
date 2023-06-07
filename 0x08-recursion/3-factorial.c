#include "main.h"

/**
 * factorial - Returns the factorial of a given number
 * @n: the number to be factorised
 * Return: integer value
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n <= 1)
		return (1);

	else
		return (n * factorial(n - 1));
}
