#include "lists.h"


/**
 * insert_dnodeint_at_index - inserts a new node at a given idx position
 * @h: pointer to head of the list
 * @idx: index
 * @n: element value
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = NULL;
	dlistint_t *temp;
	unsigned int x;

	if (idx == 0)
		new_node = add_dnodeint(h, n);
	else
	{
		temp = *h;
		x = 1;
		if (temp != NULL)
			while (temp->prev != NULL)
				temp = temp->prev;
		while (temp != NULL)
		{
			if (x == idx)
			{
				if (temp->next == NULL)
					new_node = add_dnodeint_end(h, n);
				else
				{
					new_node = malloc(sizeof(dlistint_t));
					if (new_node != NULL)
					{
						new_node->n = n;
						new_node->next = temp->next;
						new_node->prev = temp;
						temp->next->prev = new_node;
						temp->next = new_node;
					}
				}
				break;
			}
			temp = temp->next;
			x++;
		}
	}

	return (new_node);
}
