#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data (n) of a linked list
 * @head: pointer to the head of the list
 * Return: sum of all the data or 0 if empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;


	if (head)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}

	return (sum);
}
