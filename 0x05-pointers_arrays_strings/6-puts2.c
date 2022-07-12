#include "main.h"

/**
 * puts2 -  prints characters starting with the first and with a step of 1
 *
 * @str: string to be printed
 *
 * Return: void
 */
void puts2(char *str)
{
	int index = 0;
	int length = 0;

	while (str[index++])
	{
		length++
	}
	for (index = 0; index < length; index = index + 2)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
