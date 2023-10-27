#include "main.h"

/**
 * _strncat - Concatenates two strings using at most n bytes from src.
 * @dest: Destination string to which src will be appended.
 * @src: Source string that will be appended to dest.
 * @n: The maximum number of bytes to append from src.
 *
 * Return: A pointer to the concatenated string in dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0, src_len = 0;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	while (src_len < n && src[src_len] != '\0')
	{
		dest[dest_len] = src[src_len];
		dest_len++;
		src_len++;
	}

	dest[dest_len] = '\0';
	return dest;
}

