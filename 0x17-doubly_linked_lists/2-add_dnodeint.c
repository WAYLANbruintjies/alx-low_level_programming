#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the start of a list
 * @head: head pointer to the first element of the list
 * @n: value of element
 * Return: the address of the new element or NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;
	dlistint_t *h;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->prev = NULL;
	h = *head;

	if (h)
	{
		while (h->prev != NULL)
			h = h->prev;
	}

	newnode->next = h;

	if (h)
		h->prev = newnode;

	*head = newnode;

	return (newnode);
}
