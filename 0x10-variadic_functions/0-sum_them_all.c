#include "variadic_functions.h"

/**
 * sum_them_all - adds all the parameters
 *
 * @n: the number of integer parameters
 *
 * Return: the sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	int sum = 0;
	unsigned int i;

	va_start(nums, n);

	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(nums, int);
	}
	va_end(nums);

	return (sum);
}
