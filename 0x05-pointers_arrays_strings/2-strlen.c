#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: The string to calculate the length of.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	int zee = 0;

	while (*s != '\0')
	{
		zee++;
		s++;
	}

	return (zee);
}
