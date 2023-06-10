#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to search from
 * @accept: string to search with
 * Return: always n on success
 */

char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
		if (*s == accept[k])
		return (s);
		}
	s++;
	}
	return ('\0');
}
