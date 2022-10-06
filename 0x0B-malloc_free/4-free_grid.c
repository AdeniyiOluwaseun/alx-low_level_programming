#include "main.h"

/**
 * free_grid - Frees a 2-dDarray of int.
 * @grid: The 2-D array of int to be freed.
 * @height: The height of grid.
 */
void free_grid(int **grid, int height)
{
	int count;

	for (count = 0; count < height; count++)
		free(grid[count]);

	free(grid);
}
