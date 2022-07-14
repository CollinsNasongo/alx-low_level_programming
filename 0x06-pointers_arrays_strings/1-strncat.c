#include "main.h"

/**
 * _strcat - this function concatenates 2 strings
 *
 * @dest: the destination string
 * @src: the source string
 * @n: number of bytes from source
 *
 * Return: pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	while (*dest != '\0')
		dest++;
	while (*src <= n)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (dest);
}
