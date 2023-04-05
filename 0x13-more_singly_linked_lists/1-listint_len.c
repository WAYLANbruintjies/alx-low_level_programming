#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked list
 * h: head pointer to listint_t
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
