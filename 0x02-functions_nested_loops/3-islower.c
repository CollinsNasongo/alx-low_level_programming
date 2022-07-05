#include "main.h"

/**
 * _islower - checks if character is lowercase
 *
 * @c: alphabet to be checked
 *
 * Return: returns 1 if the character is lowercase
 * returns 0 if the character in not lowercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
