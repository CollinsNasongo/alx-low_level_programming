#include "main.h"

/**
 * more_numbers - print 10 times the numbers from 0-14 followed by new line
 *
 * Return: void
 */
void more_numbers(void)
{
	int number, count;

	for (count = 1; count <= 10; count++)
	{
		for (number = 0; number <= 14; number++)
		{
			if (number > 9)
			{
				_putchar((number / 10) + '0');
			}
			_putchar((number % 10) + '0');
		}
		_putchar('\n');
	}
}
