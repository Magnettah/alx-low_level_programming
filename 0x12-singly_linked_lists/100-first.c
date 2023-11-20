#include <stdio.h>

void first(void) __attribute__((constructor));
/**
 * A function that prints a specified string before the main
 * Return: Nothing
 */

void first(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
