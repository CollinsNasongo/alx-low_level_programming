#include "main.h"

/**
 * print_square - print a square using # character
 *
 * @size: the number of # on length and width
 *
 * Return: void
 */
void print_square(int size)
{
	int length, width;

	if (size > 0)
	{
		for (length = 1; length <= size; length++)
		{
			for (width = 1; width <= size; width++)
			{
				_putchar('#');
				if (length == size - 1)
					continue;
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
