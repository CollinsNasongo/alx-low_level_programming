#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by new line
 *
 * @separator: a separator for the numbers
 * @n: the number of numbers to print
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;

	va_start(nums, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nums, int));

		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	va_end(nums);

	printf("\n");
}
