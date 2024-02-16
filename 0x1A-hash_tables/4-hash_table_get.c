#include "hash_tables.h"

/**
 * hash_table_get - Retrieve value associated with a key
 * @ht: pointer to hash table
 *@key: is the lookup element to get from hash table
 * 
 * Return: the item in hash table or NULL.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *addnode;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	addnode = ht->array[index];
	while (addnode && strcmp(addnode->key, key) != 0)
		addnode = addnode->next;

	return ((addnode == NULL) ? NULL : addnode->value);
}
