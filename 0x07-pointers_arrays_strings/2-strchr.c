#include "main.h"

/**
 * _strchr - Locates the first occurrence of a character in a string.
 * @s: The string to search.
 * @c: The character to locate.
 *
 * Return: If the character is found, return a pointer to the first
 *         occurrence; otherwise, return NULL.
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}

	return (0);
}

