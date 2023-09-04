#include "main.h"
#include <stdlib.h>

/**
 * create_array - Create an array of size 'size'
 * @size: Size of the array
 * @c: Character to assign
 * Description: This function dynamically allocates an array of characters.
 * Return: NULL if allocation fails.
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

