#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenate two strings.
 *
 * @s1: First input string.
 * @s2: Second input string.
 *
 * Description: This function concatenates two input strings, s1 and s2.
 *
 * Return: A pointer to the concatenated string or NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *concatenated;
	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = j = 0;

	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0')
		j++;

	concatenated = malloc(sizeof(char) * (i + j + 1));

	if (concatenated == NULL)
		return (NULL);

	i = j = 0;

	while (s1[i] != '\0')
	{
		concatenated[i] = s1[i];
		i++;
	}

	while (s2[j] != '\0')
	{
		concatenated[i] = s2[j];
		i++, j++;
	}

	concatenated[i] = '\0';

	return (concatenated);
}

