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
	size_t i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
