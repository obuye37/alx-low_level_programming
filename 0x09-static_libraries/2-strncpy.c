#include "main.h"

/**
 * _strncpy - copies a string.
 * @dest: string array to copy src string to
 * @src: string array to copy from
 * @n: number of src strings to copy
 * if src is less than n
 * Return: return final dest string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int idx;

	idx = 0;
	while (idx < n && src[idx] != '\0')
	{
		dest[idx] = src[idx];
		idx++;
	}

	while (idx < n)
	{
		dest[idx] = '\0';
		idx++;
	}

	return (dest);
}
