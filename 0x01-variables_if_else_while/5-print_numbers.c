#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints all single digit numbers of 10 starting from 0.
 * Return: Always 0
 */

int main(void)
{
	char king;

	for (king = '0'; king <= '9'; king++)
	{
		putchar(king);
	}

	putchar('\n');

	return (0);
}
