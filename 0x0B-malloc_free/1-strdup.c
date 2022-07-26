#include "main.h"
#include <stdlib.h>

/**
 * _strdup - a function that returns pointer to newly allocted space in memory
 *
 * @str: string to duplicate
 *
 * Return: pointer to location or NULL if str=NULL
 */
char *_strdup(char *str)
{
	char *ptr;
	int size, i;

	if (str == NULL)
		return (NULL);
	for (size = 0; str[size] != '\0'; size++)
		;
	ptr = malloc(sizeof(char) * (size + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		ptr[i] = str[i];

	ptr[size] = '\0';
	return (ptr);
}
