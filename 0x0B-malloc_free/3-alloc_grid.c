#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Entry
 * @width: width
 * @height: height
 *
 * Return: xhar pointer
 */
int **alloc_grid(int width, int height)
{
	int i, j, k;
	int **grid;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = (int **)malloc(height * sizeof(int));

	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));

		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
		free(grid);
		return (NULL);
		}
		for (k = 0; k < width; k++)
			grid[i][k] = 0;
	}
	return (grid);
}
