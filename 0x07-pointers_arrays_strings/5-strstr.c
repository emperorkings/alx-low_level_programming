#include "main.h"

/**
 * _strstr - Locates a substring within a string.
 *
 * @haystack: The string to search within.
 * @needle: The substring to search for.
 *
 * Return: A pointer to the beginning of the located 0
 */
char *_strstr(char *haystack, char *needle)
{

	for (; *haystack != '\0'; haystack++)
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
	}


	return (0);
}

