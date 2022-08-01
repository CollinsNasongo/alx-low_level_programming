#include "main.h"

/**
 * print_times_table - prints the times table of any number from 0 upto 15
 *
 * @n: the number to print times table for
 *
 * Return: Always 0
 */
void print_times_table(int n):
{
	int column;
	int row;
	int product;

	if (n <= 15 && n >= 0)
	{
		for (row = 0; row <= n; row++)
		{
			_putchar('0');
			for (column = 1; column <= n; column++)
			{
				_putchar(',');
				_putchar(' ');
				product = row * column;
			}
		}
	}
}
