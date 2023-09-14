#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - Apply a function to each element of an array.
 * @array: The array to iterate through.
 * @size: The number of elements in the array.
 * @action: Pointer to the function to apply to each element.
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	/* Declare a variable to keep track of the index */
	unsigned int i;

	/* Check for NULL pointers */
	if (array == NULL || action == NULL)
		return;

	/* Iterate through the array and apply the action function */
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

