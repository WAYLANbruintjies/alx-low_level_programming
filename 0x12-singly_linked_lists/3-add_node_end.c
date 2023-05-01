#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - Adds a new node at the end of a list
 * @list_t: the list to be computed
 * @head: double pointer to list_t
 * @str: string to be added as the new node
 * Return: the address of the new element or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	int length = 0;

	temp = malloc(sizeof(list_t));
	if (!temp) /* if (temp == NULL) */
	return (NULL);

	while (str[length])
		length++;

	temp->str = strdup(str);
	temp->len = length;
	temp->next = head;
	*head = temp;

	return (temp);
