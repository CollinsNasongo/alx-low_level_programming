#include "main.h"

/**
 * print_alphabet_x10 - print lowercase alphabet 10 times
 */
void print_alphabet_x10(void)
{
	char alphabet;
	int number = 1;

	while (number++ <= 10)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
			_putchar(alphabet);
		_putchar('\n');
	}	
}
