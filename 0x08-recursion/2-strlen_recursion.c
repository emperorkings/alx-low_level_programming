#include "main.h"

/**
 * _strlen_recursion - Calculate the length of a string using recursion.
 *
 * @s: The input string.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length++;
		length += _strlen_recursion(s + 1);
	}

	return (length);
}
