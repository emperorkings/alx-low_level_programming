#include "main.h"

/**
 * check_pal - Recursively checks if a string is a palindrome.
 * @s: The string to check.
 * @i: The iterator for the start of the string.
 * @len: The length of the string.
 *
 * Return: 1 if it's a palindrome, 0 if not.
 */
int check_pal(char *s, int i, int len);

/**
 * _strlen_recursion - Recursively returns the length of a string.
 * @s: The string to calculate the length of.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s);

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to check.
 *
 * Return: 1 if it's a palindrome, 0 if not.
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1); /* An empty string is considered a palindrome */

	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * check_pal - Recursively checks if a string
 * @s: The string to check.
 * @i: The iterator for the start of the string.
 * @len: The length of the string.
 *
 * Return: 1 if it's a palindrome, 0 if not.
 */
int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0); /* Characters at both ends don't match, not a palindrome */

	if (i >= len)
		return (1); /* All characters have been checked, it's a palindrome */

	return (check_pal(s, i + 1, len - 1)); /* Recurse with updated indices */
}

/**
 * _strlen_recursion - Recursively returns
 * @s: The string to calculate the length of.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0); /* Base case: end of string reached */

	return (1 + _strlen_recursion(s + 1)); /* Recurse with the next character */
}

