#include "main.h"

/**
 * _strspn - Calculates the length of the initial segment of a string
 * consisting of characters in another string.
 * @s: The input string.
 * @accept: The string containing characters to search for.
 *
 * Return: The number of characters
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				n++;
				break;
			}
			else if (accept[r + 1] == '\0')
			{
				return (n);
			}
		}
		s++;
	}

	return (n);
}

