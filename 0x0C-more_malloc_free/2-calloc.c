#include "main.h"

/**
 * _calloc - function that allocates memory of an array
 *
 * @nmeb: number of elements
 * @size: byte size for each element
 *
 * Return: if nmeb/size == 0 return NULL otherwise a pointer to memory
 */
void *_calloc(unsigned int nmeb, unsigned int size)
{
	void *ptr;
	char *fill;
	unsigned int idx;

	if (nmeb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmeb);
	if (ptr == NULL)
		return (NULL);
	fill = ptr;
	for (idx = 0; idx < (size * nmeb); idx++)
		fill[idx] = '\0';
	return (ptr);
}
