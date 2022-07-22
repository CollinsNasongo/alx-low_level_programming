#include <stdio.h>
#include <stdlib.h>

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
	int num_1, num_2, mult;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num_1 = atoi(argv[1]);
	num_2 = atoi(argv[2]);
	mult = num_1 * num_2;
	printf("%d\n", mult);
	return (0);
}
