#include "main.h"
/**
 *free_grid - frees grid created by alloc_grid()
 *@grid: pointer to the grid
 *@height: height of the grid
 *
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
