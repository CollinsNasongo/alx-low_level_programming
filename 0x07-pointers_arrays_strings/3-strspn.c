#include "main.h"

/**
 * _strspn - A fuction that gets the length of a prefix substring
 *
 * @s: the string for which to check the initial segment
 * @accept: bytes to be checked
 *
 * Return: number of bytes in the initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	unsigned int len_str, len_acc, i, x;

	for (len_str = 0; s[len_str] != ' '; len_str++)
		;
	for (len_acc = 0; accept[len_acc] != '\0'; len_acc++)
		;

	for (i = 0; i < len_str; i++)
	{
		for (x = 0; x < len_acc; x++)
		{
			if (s[i] == accept[x])
				bytes++;
		}
	}
	return (bytes);
}
