#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: string to check for
 * @accept: string to check with
 * Return: n success;
 */

unsigned int _strspn(char *s, char *accept)
{
	int n, i, x;

	n = 0;

	for (i = 0; s[i] != ' '; i++)
	{
		for (x = 0; accept[x] != '\0'; x++)
		{
			if (s[i] == accept[x])
			{
				n++;
				break;
			}
		}
	}
	return (n);
}
