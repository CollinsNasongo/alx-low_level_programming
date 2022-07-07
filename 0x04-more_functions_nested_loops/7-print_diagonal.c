#include "main.h"

/**
 * print_diagonal - Draw diagonal line o the terminal
 * @n: number of \ to print
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int count, space;

	if (n > 0)
	{
		for (count = 0; count < n; count++)
		{
			for (space = 0; space < count; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			if (count == n - 1)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
