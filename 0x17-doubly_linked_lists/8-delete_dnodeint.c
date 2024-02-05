#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes node at index of a linked list
 * @head: pointer to head of the list
 * @index: index of the new node to be deleted, index starts at 0
 * Return: 1 (Success), -1 (Failure)
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *first1;
	dlistint_t *ptr2;
	unsigned int i = 0;

	first1 = *head;

	if (first1)
		while (first1->prev != NULL)
			first1 = first1->prev;


	while (first1)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = first1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				ptr2->next = first1->next;

				if (first1->next != NULL)
					first1->next->prev = ptr2;
			}

			free(first1);
			return (1);
		}
		ptr2 = first1;
		first1 = first1->next;
		i++;
	}

	return (-1);
}
