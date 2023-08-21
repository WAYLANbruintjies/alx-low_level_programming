#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at index
 * @head: pointer to the head node of the list
 * @index: index
 * Return: 1 (Success), -1 (Failure)
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node1;
	dlistint_t *node2;
	unsigned int i = 0;

	node1 = *head;

	if (node1) /* if node1 != NULL */
		while (node1->prev != NULL)
			node1 = node1->prev;

	while (node1 != NULL) /* node1 == TRUE */
	{
		if (i == index)
		{
			if (i == 0) /* head node idx */
			{
				*head = node1->next;
				if (*head)
					(*head)->prev = NULL;
			}
			else
			{
				node2->next = node1->next;

				if (node1->next != NULL)
					node1->next->prev = node2;
			}

			free(node1);
			return (1);
		}
		node2 = node1;
		node1 = node1->next;
		i++;
	}

	return (-1);
}
