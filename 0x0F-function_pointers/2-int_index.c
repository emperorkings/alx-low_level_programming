#include "function_pointers.h"

/**
 * int_index - Return the index of the first element in an array
 * @array: The array to search through.
 * @size: The number of elements in the array.
 * @cmp: Pointer to the function used for comparison.
 *
 * Return: The index of the first matching element; -1 if no match found.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	/* Declare a variable for index */
	int i;

	/* Check for NULL pointers and invalid size */
	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	/* Iterate through the array */
	for (i = 0; i < size; i++)
	{
		/* Check if the comparison function returns true */
		if (cmp(array[i]))
			return (i);
	}

	/* No match found, return -1 */
	return (-1);
}

