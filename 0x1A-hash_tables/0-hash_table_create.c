#include "hash_tables.h"
#include <stddef.h>

/**
 * hash_table_create - Creates a new hash table
 * @size: size of the array
 * Return: pointer to the new hash table or NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h_table;
	unsigned long int i;
	
	h_table = malloc(sizeof(hash_table_t));
	if (!h_table)
		return (NULL);

	h_table->size = size;
	h_table->array = malloc(sizeof(hash_node_t *) * size);
	if (!h_table->array)
		return (NULL);
	for (i = 0; i < size; i++)
		h_table->array[i] = NULL;

	return (h_table);
}
