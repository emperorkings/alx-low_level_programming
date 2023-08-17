#include "main.h"

/**
 * print_alphabet_x10 - Prints the lowercase alphabet 10 time.
 */
void print_alphabet_x10(void)
{
	int counter = 0;
	char letter;

	while (counter < 10)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		counter++;
	}
}

