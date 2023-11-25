#include "main.h"
/**
 * get_bit - Returns the value of a bit at a given index
 * @n: unsigned long int
 * @index: index starting from 0 of the bit
 * Return: value of the bit at index or -1 on error
 *
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	for (i = 0; i <= index; i++)
	{
		if (i == index)
			return ((n >> i) & 1);
	}

	return (-1);
}
