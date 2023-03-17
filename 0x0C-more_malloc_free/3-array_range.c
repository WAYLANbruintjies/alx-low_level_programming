#include "main.h"

/**
 * array_range - Creates an array of integers
 * @min: minimum value of array
 * @max: maximum vale of array
 * Return: Integer values of type int
 */
int *array_range(int min, int max)
{
	int *a, i = 0;

	if (min > max)
		return (NULL);

	a =  malloc((sizeof(int) * (max - min)) + sizeof(int));

	while (min <= max)
	{
		a[i] = min;
		i++;
		min++;
	}
	return (a);
}
