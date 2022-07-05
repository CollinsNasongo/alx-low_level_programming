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
		while (n < 98)
		{
			_putchar(n);
			n++;
			_putchar(',');
			_putchar(' ');
		}
	}
	else
	{
		while (n > 98)
		{
			_putchar(n);
			n--;
			_putchar(',');
			_putchar(' ');
		}
	}
}
