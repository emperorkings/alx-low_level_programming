#include "main.h"

/**
 * swap - Swaps the values of two integers.
 * @a: Pointer to the first integer.
 * @b: Pointer to the second integer.
 *
 * Description: This function takes two pointers to integers and swaps
 * their values.
 */
void swap(int *a, int *b)
{
	/* Store the value of 'a' in a temporary variable */
	int temp = *a;

	/* Assign the value of 'b' to 'a' */
	*a = *b;

	/* Assign the temporary value (originally 'a') to 'b' */
	*b = temp;
}

