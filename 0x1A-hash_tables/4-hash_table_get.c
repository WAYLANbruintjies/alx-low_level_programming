#include "hash_tables.h"

/**
 * hash_table_get - Retrieve a value associated with a key
 * @ht: pointer to hash table
 * @key: is the lookup element to get from hash table
 *
 * Return: value of item within hash table or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *newnode;
	unsigned long int indx;

	if (!ht || !key || *key == '\0')
		return (NULL);

	indx = key_index((const unsigned char *)key, ht->size);
	if (indx >= ht->size)
		return (NULL);

	newnode = ht->array[indx];
	while (newnode && strcmp(node->key, key) != 0)
		newnode = newnode->next;

	return ((newnode == NULL) ? NULL : newnode->value);
}
