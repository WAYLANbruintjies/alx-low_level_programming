#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - Returns the sum of a and b
 * @a: member 1
 * @b: member 2
 * Return: integer value
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Returns the difference of a and b
 * @a: member 1
 * @b: member 2
 * Return: integer value
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Returns the product of a and b
 * @a: member 1
 * @b: member 2
 * Return: integer value
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Returns the result of the division of a by b
 * @a: member 1
 * @b: member 2
 * Return: integer value
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - Returns the remainder of the division of a by b
 * @a: member 1
 * @b: member 2
 * Return: integer value
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
