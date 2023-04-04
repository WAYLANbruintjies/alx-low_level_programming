#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * free_list - A function that frees a list
 * @list_t: the list to be computed
 * @head: first element within the list
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *node;

	while (head)
	{
		node = head->next;
		free(head->str);
		free(head);
		head = node;
	}
}
