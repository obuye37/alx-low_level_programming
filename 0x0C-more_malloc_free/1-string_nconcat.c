#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * @n: number of bytes to allocate
 * Return: concated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *alloc;
	unsigned int len, len2, i, ii;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len = 0;
	len2 = 0;
	while (s1[len] != '\0')
		len++;
	while (s2[len2] != '\0')
		len2++;

	alloc = malloc(sizeof(char) * (len + n + 1));

	if (!alloc)
		return (NULL);
	for (i = 0, ii = 0; s1[i]; i++, ii++)
		alloc[i] = s1[i];
	if (n < len2 && n != 0)
	{
		for (i = 0; i <= n - 1; i++, ii++)
			alloc[ii] = s2[i];
	}
	else if (n >= len2 || n == 0)
	{
		for (i = 0; s2[i]; i++, ii++)
			alloc[ii] = s2[i];
	}
	alloc[ii] = '\0';
	return (alloc);
}
