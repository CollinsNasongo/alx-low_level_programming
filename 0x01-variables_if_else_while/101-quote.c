#include <stdio.h>
#include <unistd.h>

/**
 * main - print message to the standard error
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
	message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19,\n";
	
	write(2, message, 30);

	return (1);
}
