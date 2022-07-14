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
	size_t i;

	if (dest == NULL)
		return (NULL);
	for (i = 0; i 
	while (*src && n--)
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (dest);
}
