#include "function_pointers.h"
#include <stdio.h>


/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array.
 * @array: array of elements
 * @size: size of array
 * @action: pointer to the function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int idx;

	if (array == NULL || action == NULL)
		return;

	for (idx = 0; idx < size; idx++)
	{
		action(array[idx]);
	}
}
