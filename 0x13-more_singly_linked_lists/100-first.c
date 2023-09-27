#include <stdio.h>

/**
 * kinging - Prints a message before the main function is executed.
 */
void kinging(void) __attribute__ ((constructor));

/**
 * kinging - Prints a message before the main function is executed.
 */
void kinging(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

