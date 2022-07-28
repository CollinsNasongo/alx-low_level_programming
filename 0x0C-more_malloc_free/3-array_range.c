#include "main.h"

/**
 * array_range - a function that creates an array of integers
 *
 * @min: first element
 * @max: last element
 *
 * Return: pointer to new array elements in ascending order
 */
int *array_range(int min, int max)
{
	int *array;
	int idx, len;

	if (min > max)
		return (NULL);
	len = max - min;
	array = malloc(sizeof(int) * (len + 1));
	if (array == NULL)
		return (NULL);
	for (idx = 0; idx <= len; idx++)
		array[idx] = min++;
	return (array);
}
