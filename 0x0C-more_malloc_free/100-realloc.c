#include "main.h"

/**
 * _realloc - Reallocates a memory block
 * @ptr: a pointer
 * @old_size: Size of memory allocated previously
 * @new_size: New memory size to be allocated
 * Return: void
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *xptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		xptr = malloc(new_size);

	if (xptr == NULL)
		return (NULL);

	return (xptr);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}

	xptr = malloc(new_size);

	if (xptr == NULL)
		return (NULL);

	for (i = 0; i < old_size && i < new_size; i++)
	{
		xptr[i] = ((char *) ptr)[i];
	}

	free(ptr);
	return (xptr);
}
