#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string
 *
 * @str: the string to capitalize
 *
 * Return: capitalized string
 */
char *cap_string(char *str)
{
	int length, i;

	if (str == NULL)
		return (NULL);

	for (length = 0; str[length] != '\0'; length++)
		;
	if (str[0] != ' ' && str[0] != '\0')
		if (str[0] >= 'a' && str[0] <= 'z')
		{
			str[0] = str[0] - 32;
		}
	for (int i = 0; i < length; i++)
	{
		if(str[i] == ' ')
		{
			if(i + 1 < length && str[i + 1] != ' ')
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				{
					str[i + 1] = str[i + 1] - 32;
				}
		}
	}
	return (str);
}
