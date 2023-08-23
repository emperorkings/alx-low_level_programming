#include "main.h"

/**
 * reverse_array - Reverse an array of integers.
 * @a: The array to reverse.
 * @n: The number of elements in the array.
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0, j = n - 1; i < j; i++, j--)	
		a[i] ^= a[j];
		a[j] ^= a[i];
		a[i] ^= a[j];
	}
}

