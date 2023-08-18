#include "main.h"
/**
* print_sign - prints the sogn of a number
* @n: the number being checked
* Return: 1 returns if positive, -1 if negative
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
