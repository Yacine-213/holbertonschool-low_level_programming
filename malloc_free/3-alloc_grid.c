#include <stdlib.h>

/**
 * alloc_grid - Creates a 2-dimensional array of integers initialized to 0.
 * @width: The width of the grid.
 * @height: The height of the grid.
 *
 * Return: A pointer to the 2D array.
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	/* Return NULL if width or height is zero or negative */
	if (width <= 0 || height <= 0)
		return (NULL);

	/* Allocate memory for the array of row pointers */
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	/* Allocate memory for each row and initialize each element to 0 */
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			/* Free previously allocated memory if allocation fails */
			while (i > 0)
			{
				free(grid[--i]);
			}
			free(grid);
			return (NULL);
		}

		/* Initialize elements in the row to 0 */
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}
