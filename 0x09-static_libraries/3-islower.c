#include "main.h"
#include <ctype.h>

/**
 * _islower - prints is lower for ever lowercase in program
 *
 * @c: parameter to check
 *
 * Return: Always 0 (Success);
 */

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	return (0);
}
