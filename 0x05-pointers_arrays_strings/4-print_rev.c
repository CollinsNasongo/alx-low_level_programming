#include "main.h"

/**
 * print_rev - print reverse string
 *
 * @s: the string to print in reverse
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i, length;
	int index = 0;
	char reverse[10000];

	while (s[index] != '\0')
	{
		index++;
	}
	length = index - 1;
	for (i = 0; i < index; i++)
	{
		reverse[i] = s[length];
		_putchar(reverse[i]);
		length--;
	}
	_putchar('\n');
}
