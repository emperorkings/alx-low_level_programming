#include "main.h"
#include <stdlib.h>

/**
 * create_array - Create an array of characters and initialize
 *
 * @size:   Size of the array.
 * @c:      Character to initialize.
 *
 * Description: This function allocates an array of characters
 * Return: A pointer to the created array or NULL.
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;

	return (str);
}

