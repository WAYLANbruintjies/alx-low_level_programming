#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a dlistint_t list
 * h: head of the list (pointer)
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int node_count;

	node_count = 0;

	if (h == NULL) /* != NULL */
		return(node_count);
	while (h->prev)
		h = h->prev;
	while (h) /* not equal to NULL */
	{
		printf("%d\n", h->);
		h = h->next;
		node_count++;
	}

	return (node_count);
}
