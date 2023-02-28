#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int z, n, longi;

	longi = 0;

	for (z = 0; str[z] != '\0'; z++)
		longi++;

	n = (longi / 2);

	if ((longi % 2) == 1)
		n = ((longi + 1) / 2);

	for (z = n; str[z] != '\0'; z++)
		_putchar(str[z]);
	_putchar('\n');
}
