#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenate two strings
 * @s1: First input string
 * @s2: Second input string
 *
 * Description: This function concatenates two strings 's1' and 's2' to create
 * a new string, allocating memory as needed.
 *
 * Return: Pointer to the concatenated string, or NULL if allocation fails.
 */
char *str_concat(char *s1, char *s2)
{
	char *conct;
	int i = 0, ci = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;

	while (s2[ci] != '\0')
		ci++;

	conct = malloc(sizeof(char) * (i + ci + 1));

	if (conct == NULL)
		return (NULL);

	i = ci = 0;

	while (s1[i] != '\0')
	{
		conct[i] = s1[i];
		i++;
	}

	while (s2[ci] != '\0')
	{
		conct[i] = s2[ci];
		i++, ci++;
	}

	conct[i] = '\0';

	return (conct);
}
