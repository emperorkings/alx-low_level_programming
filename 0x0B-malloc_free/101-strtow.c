#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * count_words - Counts the number of words in a string.
 * @str: The string to count words in.
 *
 * Return: The number of words.
 */
int count_words(char *str)
{
	int count = 0;
	int in_word = 0; /* Flag to track if we are inside a word */

	while (*str)
	{
		if (*str == ' ')
		{
			if (in_word)
			{
				in_word = 0;
				count++;
			}
		}
		else
		{
			in_word = 1;
		}
		str++;
	}

	/* If the last character was part of a word, increment the count */
	if (in_word)
	{
		count++;
	}

	return (count);
}

/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 *
 * Return: A pointer to an array of strings (words).
 */
char **strtow(char *str)
{
	if (str == NULL || *str == '\0')
		return (NULL);

	int word_count = count_words(str);

	if (word_count == 0)
		return (NULL);

	char **words = malloc(sizeof(char *) * (word_count + 1));

	if (words == NULL)
		return (NULL); /* Memory allocation failed */

	int i = 0;
	char *token = strtok(str, " ");

	while (token != NULL)
	{
		words[i] = _strdup(token);
		if (words[i] == NULL)
		{
			for (int j = 0; j < i; j++)
				free(words[j]);
			free(words);
			return (NULL);
		}
		i++;
		token = strtok(NULL, " ");
	}

	words[i] = NULL;
	return (words);
}

/**
 * main - Entry point for testing the strtow function.
 *
 * Return: 0 on success, 1 on failure.
 */
int main(void)
{
	char **tab;

	tab = strtow("ALX School  #cisfu");
	if (tab == NULL)
	{
		printf("Failed\n");
		return (1);
	}
	print_tab(tab);
	return (0);
}

/**
 * print_tab - Prints an array of strings.
 * @tab: The array to print.
 *
 * Return: Nothing.
 */
void print_tab(char **tab)
{
	int i;

	for (i = 0; tab[i] != NULL; ++i)
	{
		printf("%s\n", tab[i]);
	}
}

