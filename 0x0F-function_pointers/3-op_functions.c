#include "3-calc.h"

/**
 * opp_add - perform the operation asked by the user.
 * @a: first integer
 * @b: second integer
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * opp_sub - perform the operation asked by the user.
 * @a: first integer
 * @b: second integer
 * Return: differences of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * opp_mul - perform the operation asked by the user.
 * @a: first integer
 * @b: second integer
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return ( a * b);
}

/**
 * opp_div - perform the operation asked by the user.
 * @a: first integer
 * @b: second integer
 * Return: division of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * opp_mod - perform the operation asked by the user.
 * @a: first integer
 * @b: second integer
 * Return: remainder of a divided b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
