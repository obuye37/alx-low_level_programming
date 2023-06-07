#include "main.h"

/**
 * sqrt_resolve - returns the sqrt of n
 * @x: n receiving variable
 * @y: increamentor used to decide the iterate
 * Return: sqrt of n
 */

int sqrt_resolve(int x, int y)
{
	if (y * y > x)
	{
		return (-1);
	}
	else if (y * y == x)
	{
		return (y);
	}
	else
	{
		return (sqrt_resolve(x, y + 1));
	}
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number to check it's square root
 * Return: -1 if < 0 and 0 if not sqrt and 1 if sqrt
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_resolve(n, 0));
}
