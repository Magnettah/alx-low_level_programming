#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - executes a function and prints each element of an array
 * @array: array
 * @size: size of the array
 * @action: a pointer to the function to use
 *
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL)
		return;
	if (action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
