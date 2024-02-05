#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a specified index
 * @h: pointer to the head node of the list
 * @idx: index
 * @n: value of new node
 * Return: the address of the new node, or NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode = NULL;
	dlistint_t *head;
	unsigned int num;

	if (idx == 0)
		newnode = add_dnodeint(h, n);
	else
	{
		head = *h;
		num = 1;
		if (head != NULL)
			while (head->prev != NULL)
				head = head->prev;
		while (head)
		{
			if (num == idx)
			{
				if (head->next == NULL)
					newnode = add_dnodeint_end(h, n);
				else
				{
					newnode = malloc(sizeof(dlistint_t));
					if (newnode)
					{
						newnode->n = n;
						newnode->next = head->next;
						newnode->prev = head;
						head->next->prev = newnode;
						head->next = newnode;
					}
				}
				break;
			}
			head = head->next;
			num++;
		}
	}

	return (newnode);
}
