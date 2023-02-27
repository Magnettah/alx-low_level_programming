#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase ten times
 *
 * Return: always 0
 */

void print_alphabet_x10(void)
{
	int a;
	char m;

	for (a = 1; a <= 10; a++)
	{
		for (m = 'a'; m <= 'z'; m++)
		{
			_putchar(m);
		}
		_putchar('\n');
	}
}
