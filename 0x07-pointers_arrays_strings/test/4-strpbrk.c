#include "main.h"

/**
 * _strpbrk - a function that searches a string for any set of bytes
 *
 * @s: the string to be searched
 * @accept: the set of bytes
 *
 * Return: A pointer to the byte in s
 */
char *_strpbrk(char *s, char *accept)
{
	int i, x, p, len_str, len_acc;

	for (len_str = 0; s[len_str] != '\0'; len_str++)
		;
	for (len_acc = 0; accept[len_acc] != '\0'; len_acc++)
		;
	p = len_str;

	for (i = 0; i < len_acc; i++)
	{
		for (x = 0; x < len_str; x++)
		{
			if (s[x] == accept[i] && x < p)
				p = x;
		}
	}
	return (s + p);
}
