#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints the lowercase alphabet excluding 'q' and 'e',
 *              followed by a new line.
 * Return: Always 0 (Success)
 */

int main(void)
{
	char d;

	for (d = 'a'; d <= 'z'; d++)
	{
		if (d != 'q' && d != 'e')
		{
			putchar(d);
		}
	}

	putchar('\n');

	return (0);
}
