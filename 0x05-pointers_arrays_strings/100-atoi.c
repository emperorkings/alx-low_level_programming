#include "main.h"
/**
 * _atoi - Converts a string to an integer.
 * @s: The input string.
 * Return: The integer representation of the string.
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;

	while (*s)
	{
		if (*s == '-')
			sign = -sign;
		else if (*s >= '0' && *s <= '9')
		{
			result = result * 10 + (*s - '0');
		}
		else if (result != 0)
		{

			break;
		}
		s++;
	}

	return (result * sign);
}
