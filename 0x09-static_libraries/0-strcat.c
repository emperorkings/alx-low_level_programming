#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string to which @src will be appended.
 * @src: The source string that will be appended to @dest.
 *
 * Return: A pointer to the concatenated string in @dest.
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = 0;
	int src_len = 0;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	while (src[src_len] != '\0')
	{
		dest[dest_len] = src[src_len];
		dest_len++;
		src_len++;
	}

	dest[dest_len] = '\0';
	return (dest);
}

