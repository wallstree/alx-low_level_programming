#include <stdlib.h>

/**
 * free_grid - alloc_grid
 * @grid: pointer to 2D arrays
 * @height: array
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL || height != 0)
	{
		for (i = 0; i < height; i++)
			free(grid[i]);

		free(grid);
	}
}
