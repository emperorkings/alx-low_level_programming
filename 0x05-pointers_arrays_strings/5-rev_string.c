#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: The string to be reversed.
 */
void rev_string(char *s)
{
	char temp;
	int len = 0;
	char *ptr_start = s;
	char *ptr_end = s;

	while (*ptr_end != '\0')
	{
		ptr_end++;
		len++;
	}

	ptr_end--;

	while (ptr_start < ptr_end)
	{
		temp = *ptr_start;
		*ptr_start = *ptr_end;
		*ptr_end = temp;
		ptr_start++;
		ptr_end--;
	}
}

