#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Duplicates a string to a new memory
 * @str: Input string
 *
 * Description: This function allocates memory for a duplicated string
 * Return: Pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	char *aaa;
	int i, r = 0;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
		i++;

	aaa = malloc(sizeof(char) * (i + 1));

	if (aaa == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		aaa[r] = str[r];

	aaa[r] = '\0';

	return (aaa);
}

