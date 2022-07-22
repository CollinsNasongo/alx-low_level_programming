#include "main.h"

/**
 * _strstr - a function that locates a substring
 *
 * @haystack: a string
 * @needle: a substring
 *
 * Return: pointer to located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	while (*haystack)
	{
		i = 0;
		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;
			} while (haystack[i] == needle[i]);
		}
		haystack++;
	}
	return (NULL);
}
