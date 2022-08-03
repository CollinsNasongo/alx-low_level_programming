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
	char p, o;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	p = argv[2][0];
	o = argv[2][1];

	if ((p != '+' || p != '-' || p != '*' || p != '/' || p != '%') && o != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	num_1 = atoi(argv[1]);
	num_2 = atoi(argv[3]);
	if ((p == '/' || p == '%') && num_2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = get_op_func(&p)(num_1, num_2);
	printf("%d\n", result);
	return (0);
}
