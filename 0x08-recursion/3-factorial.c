#include "main.h"

/**
 * factorial - Calculate the factorial of a number
 * @n: The number to calculate the factorial of.
 * Return: The factorial of n, is 0
 */
int factorial(int n)
{
	if (n == 0)
		return (1);

	if (n < 0)
		return (-1);

	return (n * factorial(n - 1));
}

