#include "main.h"

/**
 * _strchr - Searches for a character in a string.
 * @s: The input string to search in.
 * @c: The character to search for.
 *
 * Return: first ocurrence of the character, or NULL if not found.
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}

	return (0);
}

