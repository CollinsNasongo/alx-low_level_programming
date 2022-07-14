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
	int i = 0;
	int length = 0;

	while (src[i++])
		length++;

	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];

	for (i = length; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
