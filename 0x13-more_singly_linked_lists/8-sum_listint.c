#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_listint - Returns the sum of all the data (n) of a linked list
 * @head: first node in the linked list
 * Return: an integer value
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
