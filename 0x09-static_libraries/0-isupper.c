#include "main.h"

/**
 * _isupper - Check if character is uppercase
 * @c: character thai is checked
 *
 * Return: 1 if character is uppercase and 0 if character is not upper case
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
