#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes function on each element of the array
 * @array: the array to iterate
 * @size: the size of the array
 * @action: pointer to the function you need to use
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t j;

	if (array == NULL || action == NULL)
		return;
	for (j = 0; j < size; j++)
		action(array[j]);
}

