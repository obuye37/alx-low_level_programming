#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest: string to concat to
 * @src: string to concat with @dest
 * Return: returns the value of @dest
 */

char *_strcat(char *dest, char *src)
{
	int idx, srci, len;

	len = 0;

	while (dest[len++])
	;

	for (idx = 0; idx != len; idx++)
	{
		if (idx == len - 1)
		{
			for (srci = 0; src[srci] != '\0'; srci++)
			{
				dest[(len - 1) + srci] = src[srci];
			}
			dest[len + srci + 1] = '\0';
		}
	}
	return (dest);
}
