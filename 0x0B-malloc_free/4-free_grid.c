#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Frees memory allocated for a 2D integer array.
 * @grid: Pointer to the 2D integer array to free.
 * @height: The number of rows in the array.
 *
 * Description: This function frees the memory
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}

