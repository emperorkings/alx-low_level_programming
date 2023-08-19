#include "main.h"
/**
 * print_last_digit - Printa the last digit of a number.
 * @zee: Tje integer input.
 * Return: The value of the last digit.
 */
int print_last_digit(int zee)
{
	int last_digit = zee % 10;

	if (last_digit < 0)
		last_digit = -last_digit;

	last_digit += '0';
	return (last_digit - '0');
}
