#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: first string value
 * @av: second string value
 * Return: success(0) failed(-1)
 */

char *argstostr(int ac, char **av)
{
	int i, n, r, l;
	char *cPtr;

	r = 0;
	l = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			l++;
	}
	l += ac;

	cPtr = malloc(sizeof(char) * l + 1);
	if (cPtr == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
		{
			cPtr[r] = av[i][n];
			r++;
		}
		if (cPtr[r] == '\0')
		{
			cPtr[r++] = '\n';
		}
	}
	return (cPtr);
}
