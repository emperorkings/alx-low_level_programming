#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints the lowercase alphabet in reverse order.
 * Return: Always 0 (Success)
 */

int main(void)
{
	int d;

	for (d = 122; d >= 97; d--)
	{
		putchar(d);
	}

	putchar('\n');

	return (0);
}
