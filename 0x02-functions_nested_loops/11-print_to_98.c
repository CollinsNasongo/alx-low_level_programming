#include "main.h"

/**
 * print_to_98 - print numbers to 98
 *
 * @n: the starting number
 *
 * Return: 0 for success
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (n; n <= 98; n++)
		{
			_putchar(n);
			_putchar(',');
			_putchar(' ');
		}
	}
	else
	{
		for (n; n >= 98; n--)
		{
			_putchar(n);
			_putchar(',');
			_putchar(' ');
		}
	}
}
