#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * add_node_end - Adds a new node at the end of a list
 * @list_t: the list to be computed
 * @head: double pointer to list_t
 * @str: string to be added as the new node
 * Return: the address of the new element or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *newtemp;
	int length = 0;

	newtemp = malloc(sizeof(list_t));
	if (!newtemp) /* if (newtemp == NULL) */
	return (NULL);

	while (str[length])
		length++;

	newtemp->str = strdup(str);
	newtemp->len = length;
	newtemp->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = newtemp;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = newtemp;
	}

	return (temp); /* Can also be stated as return (*head) */
}
