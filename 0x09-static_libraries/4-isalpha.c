#include "main.h"

/**
 * _isalpha - Checks if a value is an alphbet
 *
 * @c: The character to be checked
 *
 * Return: 1 if the character is an alphabet
 * 0 if the character is not an alphabet
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
