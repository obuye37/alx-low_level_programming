#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);


/**
 * op_add - adds two numbers of type int
 * @a: first int to add
 * @b: second int to add
 * Return: sumed int
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subs two numbers of type int
 * @a: first int to sub from
 * @b: second int to sub with
 * Return: sub int
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply two numbers of type int
 * @a: first int to multiply
 * @b: second int to multiply
 * Return: mul int
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two numbers of type int
 * @a: numerator
 * @b: denominator
 * Return: div int
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - divides two numbers of type int
 * @a: numerator
 * @b: denominator
 * Return: remainder
 */

int op_mod(int a, int b)
{
	return (a % b);
}
