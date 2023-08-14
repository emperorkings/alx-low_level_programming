#include <stdio.h>
/**
 * main - entry
 * return: always 0 (final)
 */
int main(void)

{
	char d = 'a';

	while (d <= 'z')
	{
		if (d != 'e' && d != 'q')
		{
			putchar(d);
		}
		d++;
	}

	putchar('\n');

	return (0);
}
