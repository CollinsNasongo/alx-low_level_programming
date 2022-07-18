#include "main.h"

/**
 * print_chessboard - a function that prints the chessboard
 *
 * @a: the chessboard to print
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i, x;

	for (i = 0; i <= 7; i++)
	{
		for (x = 0; x <= 7; x++)
		{
			_putchar(a[i][x]);
		}
		_putchar('\n');
	}
}
