#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to be printed
 * Return: 1 if true, 0 if false
 * On error, -1 return
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
