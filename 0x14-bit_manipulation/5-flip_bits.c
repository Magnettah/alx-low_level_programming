#include "main.h"
/**
 * flip_bits - Returns the number of bits needed to flip
 * to get from one number to another.
 * @n: unsigned long integer
 * @m: the second unsigned long int
 * Return: Number of bits needed to flip
 *
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int outcome = n ^ m;
	unsigned int num_bits = 0;

	while (outcome != 0)
	{
		num_bits = num_bits + (outcome & 1);
		outcome = outcome >> 1;
	}
	return (num_bits);
}
