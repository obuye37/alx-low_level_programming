#include "main.h"

/**
 * _strcmp - compares two strings.
 * @s1: first string to compare with
 * @s2: second string to compare with
 * Return: Always 0 on success
 */

int _strcmp(char *s1, char *s2)
{
	int idx;

	idx = 0;
	while (s1[idx] != '\0' && s2[idx] != '\0')
	{
		if (s1[idx] != s2[idx])
		{
			return (s1[idx] - s2[idx]);
		}
		idx++;
	}
	return (0);
}
