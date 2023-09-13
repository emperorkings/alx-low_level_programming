#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Print a name using a pointer to a function.
 * @name: The string to add.
 * @f: Pointer to the function to apply to the name.
 *
 * Return: Nothing.
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}

