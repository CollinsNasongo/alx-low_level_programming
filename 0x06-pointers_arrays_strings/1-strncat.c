#include "main.h"

/**
 * _strncat - this function concatenates 2 strings n times
 *
 * @dest: the destination string
 * @src: the source string
 * @n: number of bytes from source
 *
 * Return: pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *point;
	int length;

	for (length = 0; dest[length] != '\0'; length++)
		;
	point = dest + length;
	while (*src != '\0' && n--)
	{
		*point++ = *src++;
	}
	*point = '\0';
	return (dest);
}
