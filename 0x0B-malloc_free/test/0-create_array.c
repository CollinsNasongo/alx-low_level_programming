#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 *
 * @size: the size of the array
 * @c: a character to initialize array with
 *
 * Return:a pointer to array or  NULL if the size = 0 or if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *char_arr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	char_arr = malloc(sizeof(char) * size);

	if (char_arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		char_arr[i] = c;
	}
	return (char_arr);
}
