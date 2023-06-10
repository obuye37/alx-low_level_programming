#include "main.h"

/**
 * _strncat - concatenates two strings.
 * @dest: destination to concat to
 * @src: source to concat from
 * @n: number of to check
 * Return: returns concated dest value
 */

char *_strncat(char *dest, char *src, int n)
{
	int d, s, idx;

	d = 0;
	s = 0;

	while (dest[d++])
	;

	while (src[s++])
		;

	if (s < n)
	{
		d -= 1;
		for (idx = 0; src[idx] != '\0'; idx++)
		{
			dest[d + idx] = src[idx];
		}
	}
	else
	{
		d -= 1;
		for (idx = 0; idx <= n - 1; idx++)
		{
			dest[d + idx] = src[idx];
		}
	}
	return (dest);
}
