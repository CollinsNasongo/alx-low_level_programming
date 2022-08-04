#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings followed by new line
 *
 * @separator: a separator for the strings
 * @n: the number of strings to print
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strs;
	unsigned int i;
	char *str;

	va_start(strs, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(strs, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	va_end(strs);

	printf("\n");
}
