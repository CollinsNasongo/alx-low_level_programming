#include "main.h"

/**
 * _strncpy - A function that copies a string
 *
 * @dest: destination to copy string to
 * @src: source of string
 * @n: number of characters to copy
 *
 * Return: pointer to the destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *pointer;

	if (dest == NULL)
		return (NULL);

	pointer = dest;

	while (*src && n--)
	{
		*dest++ = *src++;
	}
	*dest = '\0';

	return (dest);
}
