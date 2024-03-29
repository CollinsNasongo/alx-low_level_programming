#include "3-calc.h"

/**
 * op_add - add two integers
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract two integers
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: the difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply two integers
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: the product of two number
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide two integers
 *
 * @a: the first integer
 * @b: the second integer
 *
 * Return: result of division
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - get modulus of 2 integers
 *
 * @a: the first integer
 * @b: the second integer
 *
 * Return: the remainder
 */
int op_mod(int a, int b)
{
	return (a % b);
}
