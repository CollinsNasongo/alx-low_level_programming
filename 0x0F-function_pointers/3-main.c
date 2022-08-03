#include "3-calc.h"

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
	int num_1, num_2, result;
	char opr;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	opr = argv[2][0];
	if ((opr != '+' || opr != '-' || opr != '*' || opr != '/' || opr != '%') && argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	num_1 = atoi(argv[1]);
	num_2 = atoi(argv[3]);
	if ((opr == '/' || opr == '%') && num_2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = get_op_func(&opr)(num_1, num_2);
	printf("%d\n", result);
	return (0);
}
