#include "lists.h"

/**
 * free_listint_safe - A function that frees a linked list
 * @h: pointer to the first node in a linked list
 * Return: the size of the list that was free’d
 */

size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *temp;
	int x;

	if (!h || !*h) /* if (h == NULL || *h == NULL */
		return (0);

	while (*h)
	{
		x = *h - (*h)->next;
		if (x > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			size++;
		}
		else
		{
			free(*h);
			*h = NULL;
			size++;
			break;
		}
	}

	*h = NULL;

	return (size);
}
