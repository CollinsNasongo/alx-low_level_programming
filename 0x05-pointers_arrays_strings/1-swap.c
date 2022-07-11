#include "main.h"

/**
 * swap_int - swaps values of two integers
 *
 * @a: integer 1
 * @b: integer 2
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int swap_1, swap_2;

	swap_1 = *a;
	swap_2 = *b;
	*a = swap_2;
	*b = swap_1;
}
