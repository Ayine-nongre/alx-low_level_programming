#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2d array previously created
 * @grid: 2d array parameter
 * @height: column parameter
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
