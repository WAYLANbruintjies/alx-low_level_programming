#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_nodeint_at_index - Computes the nth node of a linked list
 * @head: first part of the first node
 * @index: integer value
 * NOTE: index of the node start at 0
 * Return: node position or NULL if node doesn't exisit
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int n = 0;
	
	if (temp == NULL)
		return (NULL);
	else
		return (temp);

	while (temp && n < index)
	{
		temp = temp->next;
		n++;
	}
}
