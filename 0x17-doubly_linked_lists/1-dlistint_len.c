#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a linked dlistint_t list
 * @h: head node of the list (pointer)
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count_el = 0;
	
	if (h == NULL)
		return (count_el);

	while (h->prev) /* h is TRUE and not empty! */
		h = h->prev;

	while (h->prev) /* h != NULL */
	{
		h = h->next;
		count_el++;
	}

	return (count_el);
}
