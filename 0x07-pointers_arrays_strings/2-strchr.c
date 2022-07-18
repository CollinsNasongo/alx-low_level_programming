#include "main.h"

/**
 * _strchr - locates a character in a string
 *
 * @s: string of characters to check
 * @c: the character to locate
 *
 * Return: pointer to first occurence of c or NULL if not present
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
