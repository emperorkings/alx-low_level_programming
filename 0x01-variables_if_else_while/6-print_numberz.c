#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: This program prints all single digit numbers
 * Return: Always 0 (Success)
 */

int main(void)
{
	int d;

	for (d = 0; d <= 9; d++)
	{
		putchar(d + '0');
	}

	putchar('\n');

	return (0);
}
