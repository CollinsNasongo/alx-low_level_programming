#include "main.h"

/**
 * _strcat - this function concatenates 2 strings
 *
 * @dest: the destination string
 * @src: the source string
 *
 * Return: pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	char *point;
	int length;

	for (length = 0; dest[length] != '\0'; length++)
		;
	point = dest + length;
	while (*src != '\0')
	{
		*point++ = *src++;
	}
	*point = '\0';
	return (dest);
}
