#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2d array
 * @width: number of rows
 * @height: number of columns
 * Return: int value
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc((height + 1) * sizeof(int));
	if (array == NULL)
	{
		return (NULL);
		free(array);
	}

	for (i = 0; i < height; i++)
	{
		array[i] = malloc((width + 1) * sizeof(int));
		if (array[i] == NULL)
		{
			for (i; i >= 0; i--)
				free(array[i]);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			array[i][j] = 0;
	}

	return (array);
}
