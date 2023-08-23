#include "main.h"

/**
 * string_toupper - Change all lowercase letters to uppercase.
 * @n: Pointer to the string.
 *
 * Return: Pointer to the modified string.
 */
char *string_toupper(char *n)
{
	int i;

	i = 0;

	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] -= ('a' - 'A');
		i++;
	}

	return (n);
}

