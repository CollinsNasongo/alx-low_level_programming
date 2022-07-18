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
	int len = 0;
	int i;

	while (*s++)
		len++;
	for (i = 0; i <= len; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
