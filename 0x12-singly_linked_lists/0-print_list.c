#include "lists.h"
#include <string.h>

/**
 * print_list - Prints all the elements of list_t
 * @h: Pointer to the list to be printed
 * Return: The number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t numnodes = 0;

	while (h)
	{
		if (!h->str) /*Same meaning as if (h->str == NULL)*/
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		numnodes++;
	}

	return (numnodes);
}
