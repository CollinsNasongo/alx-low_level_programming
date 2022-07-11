#include "main.h"

/**
 * _puts - print string to standart out
 *
 * @str: string to be printed
 *
 * Return: void
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
