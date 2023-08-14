#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints all numbers of base 16.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d;

	for (d = 48; d <= 57; d++)
	{
		putchar(d);
	}

	for (d = 97; d <= 102; d++)
	{
		putchar(d);
	}

	putchar('\n');

	return (0);
}
