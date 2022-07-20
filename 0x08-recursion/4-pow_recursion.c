#include "main.h"

/**
 * _pow_recursion - a function that returns the value of x to power of y
 *
 * @x: an integer
 * @y: an integer
 *
 * Return: the power or  -1 if y < 0
 */
int _pow_recursion(int x, int y)
{
	int power = 1;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);

	if (y > 0)
	{
		power = x * _pow_recursion(x, (y - 1));
	}
	return (power);
}
