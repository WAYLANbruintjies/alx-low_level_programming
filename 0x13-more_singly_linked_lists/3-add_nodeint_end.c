#include "lists.h"

/*
 * add_nodeint_end - Adds a new node at the end of a list
 * @listint_t: the list to be computed
 * @head: double pointer to first node
 * @n: new data variable
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *endnode;

	temp = *head;

	endnode = malloc(sizeof(listint_t));
	if (endnode == NULL)
		return (NULL);

	endnode->n = n;
	endnode->next = NULL;

	if (*head == NULL)
	{
		*head = endnode;
		return (endnode);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = endnode;

	return (endnode);

}
