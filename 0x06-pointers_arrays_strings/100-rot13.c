#include "main.h"

/**
 * rot13 - encoding a string by rotating alphabets 13 times
 *
 * @str: string to be encoded
 *
 * Return: encoded string
 */
char *rot13(char *str)
{
	int i, length;

	for (length = 0; str[length] != '\0'; length++)
		;
	for (i = 0; i < length; i++)
	{
		if ((str[i] >= 'a' && str[i] <= 'm') || (str[i] >= 'A' && str[i] <= 'M'))
		{
			str[i] = str[i] + 13;
		}
		else if ((str[i] >= 'n' && str[i] <= 'z') || (str[i] >= 'N' && str[i] <= 'Z'))
		{
			str[i] = str[i] - 13;
		}
	}
	return (str);
}
