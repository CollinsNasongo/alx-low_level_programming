#include "main.h"

/**
 * _strcmp - compares two strings
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: integer less than, equal to, or greater than zero
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; (s1[i] != '\0' && s2[i] != '\0'); i++)
	{
		if (s1[i] < s2[i])
			return (*s1 - *s2);
		else if (s1[i] > s2[i])
			return (*s1 - *s2);
		else
			return (*s1 - *s2);
	}
}
