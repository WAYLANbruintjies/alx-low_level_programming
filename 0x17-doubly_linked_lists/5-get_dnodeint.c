#include "lists.h"

/**
 * get_dnodeint_at_index - A functions that returns the nth node of a linked list
 * @head: pointer to the head of the list
 * @index: index of the node to be searched for, starting from 0
 * Return: node at index or NULL
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int size = 0;
	dlistint_t *temp;

	if (head == NULL)
	return (NULL);

	temp = head;
	while (temp)
	{
	if (index == size)
	return (temp);
	size++;
	temp = temp->next;
	}
	return (NULL);
}
