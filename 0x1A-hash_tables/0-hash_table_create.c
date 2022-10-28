#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 *
 * @size: the size of the array
 *
 * Return: pointer to newly created hash table
 * or NULL if failed
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = malloc(sizeof(hash_table_t));
	unsigned long int idx;

	if (new_table == NULL)
		return (NULL);

	new_table->size = size;
	new_table->array = malloc(sizeof(hash_node_t *) * size);

	if (new_table->array == NULL)
		return (NULL);
	for (idx = 0; idx < size; idx++)
		new_table->array[idx] = NULL;

	return (new_table);
}
