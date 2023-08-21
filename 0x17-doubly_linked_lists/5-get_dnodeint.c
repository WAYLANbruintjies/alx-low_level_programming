#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: pointer to head (first node) of the list
 * @index: index of the node within list
 * Return: nth node of a linked list or null
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *list;
	unsigned int size = 0;

	if (head == NULL)
	return (NULL);

	list = head;
	while (list) /* while list is TRUE */
	{
		if (index == size)
			return (list);
		list = list->next;
		size++;
	}

	return (NULL);
}
