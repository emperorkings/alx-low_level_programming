#include "main.h"

/**
 * puts2 - Prints every other character of a string.
 * @str: The string to be printed.
 */
void puts2(char *str)
{
	int i = 0;

	while (str != NULL && str[i] != '\0')
	{
		putchar(str[i]);
		i += 2;
	}

	putchar('\n');
}

