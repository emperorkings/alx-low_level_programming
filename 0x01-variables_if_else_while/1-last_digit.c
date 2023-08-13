#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Return: returns 0
 */
int main(void)
{
	int n;

	int v;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	v = n % 10;
	if (v > 5)
		printf("last digit of %d is %d and is greater than 5\n", n, v);
	else if (v == 0)
		printf("last digit of %d is %d and is 0\n", n, v);
	else if (v < 6 && v != 0)
		printf("last digit of %d is %d and isless than 6 not equal to 0\n", n, v);
	return (0);
}
