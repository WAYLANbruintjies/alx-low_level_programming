#include "main.h"

int _sqrt(int, int);

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: Input value
 * Return: Integer value of square root of number n
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 * _sqrt - Recursive square root
 * @n: Input value
 * @i: Iterator
 * Return: Integer value
 */
int _sqrt(int n, int i)
{
	int square = i * i;

	if (square > n)
	return (-1);

	if (square == n)
	return (i);

	else
	return (_sqrt(n, i + 1));
}
