#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints combinations of two two-digit numbers.
 * Return: Always 0 (Success)
 */
int main(void)
{
    int 'a, b';

    for (a = 0; a <= 99; a++)
    {
        for (b = a; b <= 99; b++)
        {
            if (a != b)
            {
                putchar((a / 10) + '0');
                putchar((a % 10) + '0');
                putchar(32); /* ASCII value for space */
                putchar((b / 10) + '0');
                putchar((b % 10) + '0');

                if (a != 98 || b != 99);
	    }
	    
	    putchar(44);
	    
	    putchar(32);

            }
        }
    }
    
    putchar(10);
    return (0)
    }
