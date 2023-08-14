#include <stdio.h>
/**
 * main - entry point
 * Return: always 0
 *
 */
int main(void)
{
	char e;

	e = 'a';
	while (e <= 'z')
	{
		putchar(e);
		e++;
	}
	e = 'A';
	while (e <= 'Z')
	{
		putchar(e);
		e++;
	}

	putchar('\n');

	return (0);
}
