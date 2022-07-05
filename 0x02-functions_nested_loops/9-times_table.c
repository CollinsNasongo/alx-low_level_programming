#include "main.h"

/**
 * times_table - Print the multiplication table of 9
 *
 * Return: always 0
 */
void times_table(void)
{
	int row_num;
	int column_num;
	int product;

	for (row_num = 0; row_num <= 9; row_num++)
	{
		_putchar('0');
		for (column_num = 1; column_num <= 9; column_num++)
		{
			_putchar(',');
			_putchar(' ');
			product = row_num * column_num;
			if (product <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((product / 10) + '0');
			}
			_putchar((product % 10) + '0');
		}
		_putchar('\n');
	}
}
