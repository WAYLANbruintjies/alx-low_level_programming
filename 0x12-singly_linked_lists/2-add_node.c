#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/*
 * add_node - Adds a new node at the beginning of a list
 * @list_t: list to be computed
 * @head: double pointer to list_t
 * @str: string to be added as additional node
 * Return: the address of the new element
 * or return NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	int size = 0;

	temp = malloc(sizeof(list_t));
	if (!temp)/* Can also be shown as if (temp == NULL) */
	return (NULL);

	while (str[size])
		size++;

	temp->len = size;
	temp->str = strdup(str);
	temp->next = *head;
	*head = temp;

	return (temp);
}
