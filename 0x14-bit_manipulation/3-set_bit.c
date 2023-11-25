#include "main.h"
/**
 * set_bit - sets the value  of a bit to 1 at a given index
 * @n: points to an unsigned long integer
 * @index: Index of the bit, staring from 0
 * Return: 1 on success and -1 on error
 *
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int a;

	a = 1 << index;
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n = (*n | a);

	return (1);
}
