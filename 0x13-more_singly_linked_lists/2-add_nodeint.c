#include "lists.h"

/*
 * add_nodeint - Adds a new node at the beginning of a list
 * @head: double pointer to list
 * @n: new data variable
 * @listint_t: the list to be computed
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
