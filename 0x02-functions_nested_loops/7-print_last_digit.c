#include "main.h"
/**
 * print_last_digit - Printis the last digit of a number.
 * @zee: The integer input.
 * Return: The value of the last digit.
 */
int print_last_digit(int zee)
{
	int last_digit;

	if (zee < 0)
		last_digit = -1 * (zee % 10);
	else
		last_digit = zee % 10;

	_putchar(last_digit + '0');

	return (last_digit);
}
