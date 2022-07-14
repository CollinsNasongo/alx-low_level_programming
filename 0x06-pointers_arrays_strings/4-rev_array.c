#include "main.h"

/**
 * reverse_array - a function that reverses the content of an array of integers
 *
 * @a: the array to be reversed
 * @n: number of elements in the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int rev[n];
	int i, x;

	for (i = 0; i < n; i++)
	{
		rev[n - 1 - i] = a[i];
	}
	for (x = 0; x < n; x++)
	{
		a[x] = rev[x];
	}
}
