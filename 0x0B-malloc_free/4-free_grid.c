#include <stddef.h>
#include <stdlib.h>
#include "main.h"
/**
 *free_grid - function that frees a 2 dimensional grid
 *@grid: pointer to array
 *@height: number of rows in grid
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return;
	}

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
free(grid);
}
