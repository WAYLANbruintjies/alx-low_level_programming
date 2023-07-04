#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint - A function that frees a list
 * @head: pointer to the first part of the node
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
