#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Free memory of a 2D grid.
 *
 * @grid: 2D grid to be freed.
 * @height: Height dimension of the grid.
 *
 * Description: This function frees the memory allocated for a 2D grid.
 *
 * Return: No return value (void).
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

