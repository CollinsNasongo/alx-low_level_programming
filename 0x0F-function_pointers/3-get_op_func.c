#include "3-calc.h"

/**
 * get_op_func - selects the correct function for operation
 *
 * @s: operator passed as the argument
 *
 * Return: pointer to the correct operation function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;

	while (ops[i].op != NULL && *(ops[i].op) != *s)
		i++;
	if (i == 5)
		return (NULL);
	return (ops[i].f);
}
