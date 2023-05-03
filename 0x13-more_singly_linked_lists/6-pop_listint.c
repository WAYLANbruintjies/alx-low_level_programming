#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * pop_listint - A function that deletes the head node of a linked list
 * and returns the head node’s data (n).
 * @head: double pointer to the list
 * NOTE: if the linked list is empty return 0
 * Return: the head node’s data
 */
int pop_listint(listint_t **head)
{
	listint_t *newtemp;
	int data;

	if (head == NULL || *head == NULL) /* if (!head || !*head) */
		return (0);

	newtemp = (*head)->next;
	data = (*head)->n;
	free(*head);
	*head = newtemp;

	return (data);
}
