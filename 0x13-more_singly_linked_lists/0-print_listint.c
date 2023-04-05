#include "lists.h"

/**
 * print_listint - Prints all the elements of listint_t list.
 * @h: pointer to listint_t
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t numnodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		numnodes++;
		h = h->next;
	}

	return (numnodes);
}
