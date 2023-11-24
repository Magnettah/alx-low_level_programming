#include "main.h"
/**
 * binary_to_uint - converts a binary number to  unsigned int
 * @b: pointer to a string of binary numbers(0 and 1)
 *
 * Return: converted number, or 0 if b is NULL,
 * return 0 if there's one or more chars in b that is not 0 or 1.
 *
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int power = 0;
	unsigned int base = 1;

	if (b == NULL)
		return (0);

	while (b[power] != '\0')
		power++;

	while (power > 0)
	{
		power--;

		if (b[power] != '0' && b[power] != '1')
			return (0);

		num = num + ((b[power] - '0') * base);
		base = base * 2;
	}

	return (num);
}
