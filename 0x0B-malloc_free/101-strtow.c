#include <stdlib.h>
#include "main.h"

/**
 * count_words - Count words in a string.
 * @s: Input string.
 * Return: Number of words.
 */
int count_words(char *s)
{
	int flag = 0;
	int word_count = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			word_count++;
		}
		i++;
	}

	return (word_count);
}

/**
 * allocate_strings - Allocate memory for an array of strings.
 * @str: Input string.
 * @matrix: Matrix to store strings.
 * Return: 1 (Success) or 0 (Error).
 */
int allocate_strings(char *str, char **matrix)
{
	char *tmp;
	int i = 0;
	int k = 0;
	int len = 0;
	int c = 0;
	int start, end;

	while (str[len])
		len++;

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *)malloc(sizeof(char) * (c + 1));

				if (tmp == NULL)
					return (0);

				while (start < end)
					*tmp++ = str[start++];

				*tmp = '\0';

				matrix[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
		{
			start = i;
		}
	}

	matrix[k] = NULL;

	return (1);
}

/**
 * strtow - Split a string into words.
 * @str: Input string.
 * Return: Array of strings (Success) or NULL (Error).
 */
char **strtow(char *str)
{
	char **matrix;
	int words = count_words(str);

	if (words == 0)
		return (NULL);

	matrix = (char **)malloc(sizeof(char *) * (words + 1));

	if (matrix == NULL)
		return (NULL);

	if (!allocate_strings(str, matrix))
		return (NULL);

	return (matrix);
}

