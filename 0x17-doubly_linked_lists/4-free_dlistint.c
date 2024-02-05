#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list
 * @head: pointer to the head of the list
 * Return: void
 **/
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
	return;

	while (head->next != NULL)
	{
	head = head->next;
	free(head->prev);
	}
	free(head);
}
