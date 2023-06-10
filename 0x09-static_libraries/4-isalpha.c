#include "main.h"
#include <ctype.h>

/**
 * _isalpha - checks for alphabets
 * @c: character to check
 * Return: - returns in (success)
 */

int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	return (0);
}
