#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint2 - A function that frees a list
 * NOTE: The function sets the head to NULL
 * @head: first element of the first node
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t temp2;

	if (head == NULL)
		return;

	while (head)
	{
		temp2 = (*head)->next;
		free(*head);
		*head = temp2
	}

	head = NULL;
}
