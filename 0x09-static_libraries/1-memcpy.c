#include "main.h"

/**
 * _memcpy - Copies a memory area from source to destination.
 * @dest: Pointer to the destination memory where the data will be copied.
 * @src: Pointer to the source memory from which data will be copied.
 * @n: Number of bytes to be copied.
 *
 * Return: A pointer to the destination memory.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = n;

	for (int r = 0; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}

	return (dest);
}

