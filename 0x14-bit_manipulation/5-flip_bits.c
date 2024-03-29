#include "main.h"

/**
 * flip_bits -  gets the number of bits to be flipped
 *              to get from one number to another
 *
 * @n: the number
 * @m: the number to flip n to
 *
 * Return: the number of bots
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num = n ^ m, bits = 0;

	while (num > 0)
	{
		bits += (num & 1);
		num >>= 1;
	}

	return (bits);
}
