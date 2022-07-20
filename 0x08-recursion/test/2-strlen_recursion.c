#include "main.h"

/**
 * _strlen_recursion - a function that gets the length of a string
 *
 * @s: the string
 *
 * Return: the length
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length = length + _strlen_recursion(s + 1);
		length++;
	}
	return (length);
}
