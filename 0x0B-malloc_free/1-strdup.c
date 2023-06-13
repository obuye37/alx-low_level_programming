#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string variable
 * Return: string ponter
 */

char *_strdup(char *str)
{
	char *cpstr;
	int len, i;

	if (str == NULL)
		return (NULL);

	len = 0;
	while (str[len] != '\0')
		len++;

	cpstr = malloc(sizeof(char) * (len + 1));

	if (cpstr == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		cpstr[i] = str[i];

	return (cpstr);
}
