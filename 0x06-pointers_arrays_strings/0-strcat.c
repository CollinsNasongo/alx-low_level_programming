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
	while (*dest != '\0')
		dest++;
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (dest);
}
