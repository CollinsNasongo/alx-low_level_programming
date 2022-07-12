#include "main.h"

/**
 * puts_half - print half of a string followed by new line
 *
 * @str: the string to be printed
 *
 * Return: void
 */
void puts_half(char *str)
{
	int index = 0;
	int length = 0;
	int mid;

	while (str[index++])
	{
		length++;
	}
	if (length % 2 == 0)
	{
		mid = length / 2;
	}
	else
	{
		mid = (length + 1) / 2;
	}
	for (index = mid; index < length; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
