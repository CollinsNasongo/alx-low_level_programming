#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
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
		length--;
	}
	s = reverse;
}
