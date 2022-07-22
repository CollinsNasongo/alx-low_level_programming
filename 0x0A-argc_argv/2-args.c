#include <stdio.h>

/**
 * main - a program that prints all the arguments it receives
 *
 * @argc: stores number of command line arguments passed
 * @argv: array of character pointers listing all the arguments
 *
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	int counter;

	for (counter = 0; counter < argc; counter++)
		printf("%s\n", argv[counter]);
	return (0);
}
