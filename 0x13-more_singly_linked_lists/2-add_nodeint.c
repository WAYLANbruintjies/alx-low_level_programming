#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *add_nodeint - A function that adds a new node
 * at the beginning of a linked list
 * @head: double pointer to the first part of the linked list
 * @n: integer value used to increment
 * Return: the address of the new element
 * or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
