#include "hash_tables.h"

/**
 * key_index - function that gives you the key of an index
 *
 * @key: The key
 * @size: the size of the array of hash table
 *
 * Return: index to store key/value pair
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
