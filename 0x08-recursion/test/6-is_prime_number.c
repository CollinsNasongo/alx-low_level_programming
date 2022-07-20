#include "main.h"

/**
 * find_prime - determines is a number is prime
 *
 * @num_1: the number to be determined
 * @num_2: comparator
 *
 * Return: 1 if number is prime and 0 if not
 */
int find_prime(int num_1, int num_2)
{
	num_2--;
	if ((num_1 % num_2 == 0) && num_2 == 1)
		return (1);
	if ((num_1 % num_2 == 0) && num_2 >= 2)
		return (0);
	return (find_prime(num_1, num_2));
}

/**
 * is_prime_number - determines if a numbe is prime
 *
 * @n: the number
 *
 * Return: 1 if prime and 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (find_prime(n, n));
}
