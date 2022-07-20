#include "main.h"

/**
 * get_sqr - gets the square of a number
 *
 * @num: the number
 *
 * Return: the square
 */
int get_sqr(int num)
{
	int b = num;
	int sqr;

	sqr = b * b;
	return (sqr);
}

/**
 * find_sqrt - finds the square root of a number
 *
 * @num: the number
 * @root: the square root
 *
 * Return: the root
 */
int find_sqrt(int num, int root)
{
	if (get_sqr(root) == num)
		return (root);
	if (root == num / 2)
		return (-1);
	return (find_sqrt(num, root + 1));
}

/**
 * _sqrt_recursion - A function that calculates the natural squareroot
 *
 * @n: the integer of which to find squareroot
 *
 * Return: natural squareroot or -1 if not available
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n == 1)
		return (1);
	if (n < 1)
		return (-1);
	return (find_sqrt(n, root));
}
