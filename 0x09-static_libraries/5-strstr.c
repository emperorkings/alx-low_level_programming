#include "main.h"

/**
 * _strstr - Searches for the first occurrence of a substring in a string.
 * @haystack: The input string to search in.
 * @needle: The string to search for.
 *
 * Return: A pointer to the first matching substring
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}

		if (*p == '\0')
			return (haystack);

		haystack++;
	}

	return (0);
}

