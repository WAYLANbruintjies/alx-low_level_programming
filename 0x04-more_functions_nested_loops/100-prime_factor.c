#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/**
 * main - A program that finds and prints the largest prime factor
 * of the number 612852475143
 * Return: void
 */

int main(void)
{
	long n, maxf, number = 612852475143;
	double square = sqrt(number);

	for (n = 1; n <= square; n++)
	{
		if (number % n == 0)
		{
			maxf = number / n;
		}
	}

	printf("%ld\n", maxf);
	return (0);
}
