#include "function_pointers.h"

/**
 * int_index - searches for an integer from an array
 *
 * @array: the array
 * @size: the size of an array
 * @cpm: a function to compare values
 *
 * Return: index to the location of the integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int idx;

	if (array == NULL || cmp == NULL)
		return;

	for (idx = 0; idx < size; idx++)
	{
		if (cmp(array[idx]) != 0)
			return (idx);
	}
	return (-1);
}
