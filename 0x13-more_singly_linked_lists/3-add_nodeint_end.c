#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *add_nodeint_end - A function that adds a new node at the end of a list
 * @head: double pointer to the head of the list
 * @n: integer value
 * Return: the address of the new element
 * or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *lastnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
		*head = newnode;
	else
	{
		lastnode = *head;
		while (lastnode->next != NULL)
			lastnode = lastnode->next;
		lastnode->next = newnode;
	}
	return (newnode);
}
