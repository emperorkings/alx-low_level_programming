#include "main.h"

/**
 * _strchr - Locates the first occurrence of a character in a string.
 * @s: The string to search in.
 * @c: The character to search for.
 *
 * Return: If the character is found, a pointer to the first occurrence
 * of the character in the string; otherwise, NULL.
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}

	return (0);
}
