#include "main.h"

/**
 * actual_prime - Recursively determines if a number is prime.
 * @n: The number to evaluate.
 * @i: The iterator for checking potential divisors.
 *
 * Return: 1 if n is prime, 0 if not.
 */
int actual_prime(int n, int i);

/**
 * is_prime_number - Checks if a number is prime.
 * @n: The number to evaluate.
 *
 * Return: 1 if n is prime, 0 if not.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0); /* Numbers less than or equal to 1 are not prime */

	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - Recursively determines if a number is prime.
 * @n: The number to evaluate.
 * @i: The iterator for checking potential divisors.
 *
 * Return: 1 if n is prime, 0 if not.
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1); /* 1 is prime */

	if (n % i == 0 && i > 0)
		return (0); /* n is divisible by a number other than 1 and itself */

	return (actual_prime(n, i - 1)); /* Recurse with a decremented i */
}

