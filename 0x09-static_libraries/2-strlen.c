#include "main.h"

/**
 * _strlen -  returns the length of a string.
 * @s: string to return it's lenght
 * Return: returns the lenght of input string
 */

int _strlen(char *s)
{
	int idx;

	idx = 0;
	while (s[idx] != '\0')
	{
		idx++;
	}
	return (idx);
}
