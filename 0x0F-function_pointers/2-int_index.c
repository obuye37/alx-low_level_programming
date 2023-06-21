#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * int_index -  searches for an integer.
 * @array: array to search through
 * @size: size of the array to search through
 * @cmp: compare function pointer
 * Return: int of searched result
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp ==  NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
