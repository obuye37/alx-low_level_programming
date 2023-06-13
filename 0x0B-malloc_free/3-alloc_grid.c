#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of array
 * @height: height of array
 * Return: 0 (success) 1 (failed)
 */

int **alloc_grid(int width, int height)
{
	int **gPtr;
	int i, ii;

	if (width <= 0 || height <= 0)
		return (NULL);

	gPtr = malloc(sizeof(int *) * height);

	if (gPtr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		gPtr[i] = malloc(sizeof(int) * width);

		if (gPtr[i] == NULL)
		{
			for (; i >= 0; i--)
				free(gPtr[i]);

			free(gPtr);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (ii = 0; ii < width; ii++)
			gPtr[i][ii] = 0;
	}

	return (gPtr);
}
