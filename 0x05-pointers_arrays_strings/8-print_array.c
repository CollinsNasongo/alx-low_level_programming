#include "main.h"

/**
 * print_array - prints the elements of an array
 *
 * @a: a given array
 * @n: the number of elements to print
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);
		if (index == n - 1)
			continue;
		printf(", ");
	}
	printf("\n");
}
