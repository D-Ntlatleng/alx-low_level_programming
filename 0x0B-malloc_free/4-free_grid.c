#include <stdlib.h>

/**
 * free_grid - frees 2d in array
 * @grid: 2d int array to free
 * @height: num of rows
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL)
	{
		for (i = 0; i < height; i++)
			free(grid[i]);
		free(grid);
	}
}
