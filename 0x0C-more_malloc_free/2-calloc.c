#include "main.h"
#include <stdlib.h>

/**
 * _memset - fills mem with const byte
 * @s: memory area to fill
 * @b: char to copy
 * @n: number of times to itterate n
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

/**
 * _calloc - that allocates memory for an array, using malloc
 * @nmemb: number of memory bytes
 * @size: size of memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *calloc;

	if (nmemb == 0 || size == 0)
		return (NULL);

	calloc = malloc(sizeof(size) * nmemb);

	if (!calloc)
		return (NULL);

	_memset(calloc, 0, nmemb * size);

	return (calloc);
}

