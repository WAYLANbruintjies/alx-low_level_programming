#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n)
 * of a doubly linked list
 * @head: pointer to the head of the list
 * Return: sum of the data within list OR 
 * zero (0) if listy is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev; /* list continues */

		while (head != NULL)
		{
			sum += head->n;
			head = head->next; /* iterate through list */
		}
	}

	return (sum);
}
