#include "main.h"
#include <stdio.h>

/**
 * swap_int - Swap the values of two integers
 * @a: The first integer pointer to be swapped
 * @b: The second integer pointer to be swapped
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
