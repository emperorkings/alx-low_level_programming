#include "main.h"

/**
 * _strpbrk - Searches for the first occurrence of a character in a string.
 * @s: The input string.
 * @accept: The string containing characters to search for.
 *
 * Return: A pointer to the first matching character in s, or NULL if no match.
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
				return (s);
		}
		s++;
	}

	return ('\0');
}

