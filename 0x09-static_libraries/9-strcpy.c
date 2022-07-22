#include "main.h"

/**
 * _strcpy - copies strings to a buffer
 *
 * @dest: destination
 * @src: source
 *
 * Return: pointer to the destination
 */
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	return (dest);
}
