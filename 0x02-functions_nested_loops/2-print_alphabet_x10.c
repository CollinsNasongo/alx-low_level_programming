#include "main.h"

/**
 * print_alphabet_x10 - print lowercase alphabet 10 times
 */
void print_alphabet_x10(void)
{
	char alphabet;
	int number;

	for (number = 1; number <= 10; number++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
			_putchar(alphabet);
		_putchar('\n');
	}
}
