#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_2d_array - Free memory allocated for a 2D integer array.
 * @array: Pointer to the 2D integer array to free.
 * @rows: The number of rows in the array.
 * Description: This function frees the memory
 * Return: Nothing.
 */
void free_2d_array(int **array, int rows)
{
	int i;

	if (array == NULL || rows <= 0)
		return;

	for (i = 0; i < rows; i++)
	{
		free(array[i]);
	}

	free(array);
}

