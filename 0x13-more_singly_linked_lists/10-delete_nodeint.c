#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to be deleted
 * Return: 1 (Success), -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head, *current = NULL;
	unsigned int node = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (node < index - 1)
	{
		if (!temp || !(temp->next)) /* if (temp == NULL || temp->next == NULL) */
			return (-1);
		temp = temp->next;
		node++;
	}


	current = temp->next;
	temp->next = current->next;
	free(current);

	return (1);
}
