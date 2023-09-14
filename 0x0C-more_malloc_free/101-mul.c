#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

/**
 * is_digit - checks if a string contains only digit characters
 * @s: string to be evaluated
 *
 * Return: 1 if all characters are digits, 0 otherwise
 */
int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}

	return (1);
}

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * errors - handles errors by printing an error message and exiting with status 98
 */
void errors(void)
{
	printf("%s\n", ERR_MSG);
	exit(98);
}

/**
 * initialize_result - initializes an integer array to zeros
 * @result: the array to initialize
 * @len: the length of the array
 */
void initialize_result(int *result, int len)
{
	for (int i = 0; i < len; i++)
		result[i] = 0;
}

/**
 * perform_multiplication - calculates the product of two input strings and stores the result
 * @s1: the first input string
 * @s2: the second input string
 * @result: an integer array to store the product
 */
void perform_multiplication(char *s1, char *s2, int *result)
{
	int len1 = _strlen(s1);
	int len2 = _strlen(s2);

	for (int len1_idx = len1 - 1; len1_idx >= 0; len1_idx--)
	{
		int digit1 = s1[len1_idx] - '0';
		int carry = 0;

		for (int len2_idx = len2 - 1; len2_idx >= 0; len2_idx--)
		{
			int digit2 = s2[len2_idx] - '0';
			carry += result[len1_idx + len2_idx + 1] + (digit1 * digit2);
			result[len1_idx + len2_idx + 1] = carry % 10;
			carry /= 10;
		}

		if (carry > 0)
			result[len1_idx + len2_idx + 1] += carry;
	}
}

/**
 * print_result - prints the result stored in an integer array
 * @result: the integer array containing the result
 * @len: the length of the result array
 */
void print_result(int *result, int len)
{
	int a = 0;
	for (int i = 0; i < len - 1; i++)
	{
		if (result[i])
			a = 1;
		if (a)
			putchar(result[i] + '0');
	}

	if (!a)
		putchar('0');

	putchar('\n');
}

int main(int argc, char *argv[])
{
	char *s1, *s2;
	int len1, len2, len, *result;

	s1 = argv[1], s2 = argv[2];

	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	len = len1 + len2 + 1;

	result = malloc(sizeof(int) * len);

	if (!result)
		return (1);

	initialize_result(result, len);
	perform_multiplication(s1, s2, result);
	print_result(result, len);

	free(result);

	return (0);
}

