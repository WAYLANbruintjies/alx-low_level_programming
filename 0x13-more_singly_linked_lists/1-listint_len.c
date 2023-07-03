#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * listint_len - A function that returns the number of
 * elements in a linked list
 * @h: pointer to linked list
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h->next;
	}

	return (elements);
}
