#include "main.h"

/**
 * malloc_checked - a function that allocates memory using malloc.
 *
 * @b: number of bytes to allocate
 *
 * Return: pointer to allocted memory
 */
void *malloc_checked(unsigned int b)
{
	void *memory;

	memory = malloc(b);
	if (memory == NULL)
		exit(98);

	return (memory);
}
