#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - Prints all the elements of a list
 * @h: pointer to list_t
 * Return: Integer value (number of nodes)
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
