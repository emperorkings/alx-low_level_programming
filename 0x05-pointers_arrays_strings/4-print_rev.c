#include "main.h"
/**
 * print_rev - Prints a string in reverse followed by a new line.
 * @s: The string to be printed in reverse.
 */
void print_rev(char *s)
{
	int length = 0;

	/* Calculate the length of the string */
	while (s[length] != '\0')
	{
		length++;
	}

	/* Print the string in reverse */
	while (length > 0)
	{
		length--;
		putchar(s[length]);
	}

	putchar('\n'); /* Print a newline character at the end */
}
