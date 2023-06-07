#include "main.h"

/**
 * factorial - calcs and returns the factorial of a given number
 * @n: number to calc
 * Return: 1 always
 */

int factorial(int n)
{
	if (n == 1)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
	return (1);
}
