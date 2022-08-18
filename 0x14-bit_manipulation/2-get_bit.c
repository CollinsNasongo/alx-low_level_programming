#include "main.h"

/**
 * get_bit - gets the value of a bit at a given index
 *
 * @n: the bit
 * @index: the index starting from 0 of the bit
 *
 * Return: the value of the bit or -1 if an error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
