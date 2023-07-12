#include "main.h"
#include <stdlib.h>
/**
 * free_grid - Entry
 * @grid: address
 * @height: height
 *
 */
void free_grid(in **grid, int height)
{
	if (grid == NULL || height <= 0)
	{
		return;
	}
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
		grid[i] = NULL;
	}
	free(grid);
}
