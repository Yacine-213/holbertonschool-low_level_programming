#include <stdlib.h>

/**
 * free_grid - Frees a 2-dimensional grid created by alloc_grid.
 * @grid: The 2D array to be freed.
 * @height: The height of the grid (number of rows).
 */
void free_grid(int **grid, int height)
{
	int i;

	/* Free each row in the grid */
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	/* Free the array of row pointers */
	free(grid);
}
