#include "main.h"
/**
 * print_alphabet - Prints alphabet in lower case
 *
 * Return: always 0
 */

void print_alphabet(void)
{
	char m;

	for (m = 'a'; m <= 'z'; m++)
	{
		_putchar(m);
	}

	_putchar('\n');
}
