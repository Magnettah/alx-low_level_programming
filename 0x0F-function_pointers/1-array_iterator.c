#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * array_iterator - prints each element of an array
 * @array: array
 * @size: number of array elements
 * @action: pointer to a function
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for ( i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
