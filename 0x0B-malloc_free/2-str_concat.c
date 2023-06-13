#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings.
 * @s1: string one
 * @s2: string two
 * Return: Null on failure
 */


char *str_concat(char *s1, char *s2)
{
	char *nStr;
	int len, len2, i, ii;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len = 0;
	len2 = 0;
	while (s1[len] != '\0')
		len++;

	while (s2[len2] != '\0')
		len2++;

	nStr = malloc(sizeof(char) * (len + len2 + 1));

	for (i = 0; s1[i]; i++)
		nStr[i] = s1[i];

	for (ii = 0; s2[ii]; ii++, i++)
		nStr[i] = s2[ii];

	if (nStr == NULL)
		return(NULL);

	nStr[i] = '\0';

	return (nStr);
}
