#include "main.h"

/**
 * _strchr - function that locates a character in a string.
 * @s: string to check
 * @c: charact to return
 * Return: ruturns pointer to char c
 */

char *_strchr(char *s, char c)
{
	int i;

	i = 0;

	while (s[i++])
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (0);
}
