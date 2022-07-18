#include "main.h"

/**
 * print_diagsums - a function that prints the sum of two matrix diagonals
 *
 * @a: the matrix
 * @size: the size of matrix
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int sum_one, sum_two, i, step_frd, step_bwd;

	step_frd = size + 1;
	step_bwd = size - 1;
	sum_one = 0;
	sum_two = 0;

	for (i = 0; i < size; i++)
		sum_one = sum_one + (*(a + (step_frd * i)));
	for (i = 1; i <= size; i++)
		sum_two = sum_two + (*(a + (step_bwd * i)));
	printf("%d, %d\n", sum_one, sum_two);
}
