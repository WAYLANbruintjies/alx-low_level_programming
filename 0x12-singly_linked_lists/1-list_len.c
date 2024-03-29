#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * list_len - Returns the number of elements in a linked list
 * @h: pointer to list_t
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		h = h->next;
		x++;
	}

	return (x);
}
