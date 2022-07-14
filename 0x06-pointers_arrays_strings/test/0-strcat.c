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
	int dest_length = 0;
	int src_length = 0;
	int i, j, k;

	for (i = 0; dest != '\0'; i++)
		dest_length++;
	for (j = 0; src != '\0'; j++)
		src_length++;
	for (k = 0; k <= src_length; k++)
	{
		dest[dest_length + k] = src[k];
	}

	return (dest);
}
