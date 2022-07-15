#include "main.h"

/**
 * rot13 - encoding a string by rotating alphabets 13 times
 *
 * @s: string to be encoded
 *
 * Return: encoded string
 */
char *rot13(char *s)
{
	int i, length;

	for (length = 0; s[length] != '\0'; length++)
		;
	for (i = 0; i < length; i++)
	{
		if ((s[i] >= 'a' && s[i] <= 'm') || (s[i] >= 'A' && s[i] <= 'M'))
		{
			s[i] = s[i] + 13;
		}
		else if ((s[i] >= 'n' && s[i] <= 'z') || (s[i] >= 'N' && s[i] <= 'Z'))
		{
			s[i] = s[i] - 13;
		}
	}
	return (s);
}
