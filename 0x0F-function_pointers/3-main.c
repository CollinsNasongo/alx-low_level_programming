#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - a programe that performs arithmetic operations on numbers
 *
 * @argc: stores the number of comandline arguments
 * @argv: array of character poiniters listing all the argumets
 *
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	int num_1, num_2, mult;
	char arith_op;

	if (argc != 4)
	{
		printf("Error\n");
		return (1);
	}
	num_1 = atoi(argv[1]);
	num_2 = atoi(argv[3]);
	arith_op = argv[2][0];
	return (0);
}
