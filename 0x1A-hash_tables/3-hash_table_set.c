#include "hash_tables.h"

/**
 * hash_table_set - Add an item/element to the Hash table
 * @ht: hash table to be computed
 * @key: added item to the hash table
 * @value: pair value associated with the key
 * 
 * Return: 1 (Success), 0 (Failure)
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	char *copied_val;
	unsigned long int idx, i;

	if (ht == NULL || key == NULL)
		return (0);
	if (*key == '\0' || value == NULL)
		return (0);

	copied_val = strdup(value);
	if (copied_val == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	for (i = idx; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = copied_val;
			return (1);
		}
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(copied_val);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = copied_val;
	new->next = ht->array[idx];
	ht->array[idx] = new;

	return (1);
}
