#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list
 * @head - a double pointer to indicate the head nodes of two different lists
 * @n: value of element
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *h;

	new = malloc(sizeof(dlistint_t));
	if(new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	h = *head;

	if (h)
	{
		while (h->prev)
			h = h->prev;
	}

	new->next = h;

	if (h)
		h->prev = new;
	new = *head;
	return (new);
}
