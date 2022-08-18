#include "main.h"

/**
 * get_endianness - checks the endianness.
 *
 * Return: 0 if big endian otherwise 1
 */
int get_endianness(void)
{
	int num = 1;
	char *end = (char *)&num;

	if (*end == 1)
		return (1);

	return (0);
}
