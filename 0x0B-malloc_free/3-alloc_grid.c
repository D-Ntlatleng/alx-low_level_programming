#include <stdlib.h>
/**
 * alloc_grid - create and initialize 2d array of int
 * @width: grid width
 * @height: grid height
 *
 * Return: int pointer to pointer or NULL
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width > 0 && height > 0)
	{
		grid = (int **)malloc(sizeof(int *) * height);
		if (grid)
		{
			for (i = 0; i < height; i++)
				grid[i] = (int *)malloc(sizeof(int) * width);
			for (i = 0; i < height; i++)
				for (j = 0; j < width; j++)
					grid[i][j] = 0;
			return (grid);
		}
	}
	return (NULL);
}
