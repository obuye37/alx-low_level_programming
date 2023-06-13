#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and
 * initializes it with a specific char.
 * @size: size of array
 * @c: character
 * Return: NULL if size = 0
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *aPtr;

	aPtr = malloc(sizeof(char) * size);

	if (size == 0 || aPtr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		aPtr[i] = c;
	return (aPtr);
}
