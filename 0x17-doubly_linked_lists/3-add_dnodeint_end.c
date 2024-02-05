#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a list
 * of a dlistint_t list
 * @head: head of the list
 * @n: value of element
 * Return: the address of the new element or NULL (failed)
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h;
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	h = *head;

	if (h)
	{
		while (h->next)
			h = h->next;
		h->next = newnode;
	}
	else
	{
		*head = newnode;
	}

	newnode->prev = h;

	return (newnode);
}
