#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints opcodes for itself
 *
 * @argc: stores the number of command line arguments
 * @argv: array of character pointers listing all the arguments
 *
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	int idx, byte_num;
	unsigned char op_code;
	int (*address)(int, char **) = main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	byte_num = atoi(argv[1]);

	if (byte_num < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (idx = 0; idx < byte_num; idx++)
	{
		op_code = *(unsigned char *)address;
		printf("%.2x", op_code);

		if (idx == byte_num - 1)
			continue;
		printf(" ");
		address++;
	}
	printf("\n");
	return (0);
}
