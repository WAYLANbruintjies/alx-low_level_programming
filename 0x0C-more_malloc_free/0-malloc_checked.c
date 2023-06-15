#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc
 * @b: Integer value
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);

	if (s == NULL)
		exit(98);

	return (s);
}
