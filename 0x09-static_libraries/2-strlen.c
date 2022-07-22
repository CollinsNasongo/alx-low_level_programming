#include "main.h"

/**
 * _strlen - determines the length of a string
 *
 * @s: a given string
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int length;

	for (length = 0; s[length] != '\0'; length++)
		;
	return (length);
}
