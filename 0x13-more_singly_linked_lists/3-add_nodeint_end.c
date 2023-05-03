#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint_end - Adds a new node at the end of a list
 * @head: double pointer to existing node and new end node
 * @n: integer value
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *last;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = NULL;

	if (*head == NULL)
		*head = temp;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = temp;
	}

	return (temp);
}
