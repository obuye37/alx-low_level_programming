#include "main.h"

/**
 * _strstr - locates a string
 * @haystack: string to search in
 * @needle: string to search with
 * Return: char always
 */

char *_strstr(char *haystack, char *needle)
{
	while (haystack++)
	{
		char *m = haystack;
		char *n = needle;

		while (*m == *n && *n != '\0')
		{
			m++;
			n++;
		}
		if (*n == '\0')
			return (haystack);
	}
	return ('\0');
}
