#include "main.h"

/**
 * _memset - Fills a block of memory with a specific value.
 * @s: Pointer to the memory to be filled.
 * @b: The byte value to set.
 * @n: The number of bytes to be set.
 *
 * Return: A pointer to the filled memory area.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

