#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - a function that searches for an integer
 * @array: the array to search
 * @size: Number of elements in the array
 * @cmp: pointer to function to be used to compare values
 *
 * Return: index of first element  when the cmp function or -1
 *
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 1)
			return (i);
	}
	return (-1);
}
