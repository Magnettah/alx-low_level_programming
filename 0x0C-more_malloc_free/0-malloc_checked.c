#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - allocated memory using malloc
 * @b: unsigned integer
 *
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *t;

	t = malloc(b);
	if (t == NULL)
		exit(98);
	return (t);

}
