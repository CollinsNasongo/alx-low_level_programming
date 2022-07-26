#include "main.h"
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: NULL on failure when empty otherwise pointer to string
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int len_1, len_2, size, i, x = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (len_1 = 0; s1[len_1]; len_1++)
		;
	for (len_2 = 0; s2[len_2]; len_2++)
		;
	size = len_1 + len_2 + 1;

	str = malloc(sizeof(char) * size);
	if (str == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		str[x++] = s1[i];
	for (i = 0; s2[i]; i++)
		str[x++] = s2[i];
	return (str);
}
