#include "main.h"

int check_prime(int n, int i);

/**
 * is_prime_number - Return 1 for prime num and 0 if not
 * @n: input value
 * Return: value 1 for prime num & 0 for composite num
 */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 * check_prime - Check for prime numbers
 * @n: input value to be checked
 * @i: iteration
 * Return: 1 for prime no. || 0 for composite
 */
int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);

	if (n % i == 0 && i > 1)
		return (0);

	if ((n / i) < i)
		return (1);

	return (check_prime(n, i + 1));
}
