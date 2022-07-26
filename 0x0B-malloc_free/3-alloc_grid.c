#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2D array
 *
 * @width: the width of array
 * @height: the height of the array
 *
 * Return: pointer to array, NULL if height/width == 0/negative
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int i, x;

	if ((height == 0) || (width == 0) || (height < 0) || (width < 0))
		return (NULL);
	array = malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
			for (; i >= 0; i--)
				free(array[i]);
			free(array);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (x = 0; x < width; x++)
			array[i][x] = 0;
	}
	return (array);
}
