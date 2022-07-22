#include "main.h"

/**
 * _puts - print string to standart out
 *
 * @s: string to be printed
 *
 * Return: void
 */
void _puts(char *s)
{
	while (*s)
	{
		_putchar(*s++);
	}
	_putchar('\n');
}
