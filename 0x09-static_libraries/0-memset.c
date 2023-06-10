#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to membory
 * @b: const byte
 * @n: number of bytes to fill mem with
 * Return: Returns a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int idx;

	idx = 0;

	while (n)
	{
		if (n > 0)
		{
			s[idx] = b;
			n--;
		}
		else
		{
			continue;
		}
		idx++;
	}
	return (s);
}
