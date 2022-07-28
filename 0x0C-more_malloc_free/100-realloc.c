#include "main.h"

/**
 * _realloc - a function that reallocates a memory block
 *
 * @ptr: pointer to previous memory
 * @old_size: byte size of the allocated pointer
 * @new_size: byte size of new memory block
 *
 * Return: NULL on failure or pointer to  reallocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *real_mem;
	char *point;
	char *fill;
	unsigned int idx;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		real_mem = malloc(new_size);
		if (real_mem == NULL)
			return (NULL);
		return (real_mem);
	}
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	point = ptr;
	real_mem = malloc(sizeof(*point) * new_size);
	if (real_mem == NULL)
	{
		free(ptr);
		return (NULL);
	}
	fill = real_mem;
	for (idx = 0; idx < old_size && idx < new_size; idx++)
		fill[idx] = *point++;
	free(ptr);
	return (real_mem);
}
