#include "main.h"

/**
 * factorial - A function that gets the factorial of a given number
 *
 * @n: the number
 *
 * Return: factorial, -1 if n < 0 and 1 if n == 0
 */
int factorial(int n)
{
	int fact;

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	if (n >= 1)
	{
		fact = n * factorial(n - 1);
	}
	return (fact);
}
