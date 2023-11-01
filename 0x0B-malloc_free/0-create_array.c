#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of size (size) and assigns character c
 * @size: size of array
 * @c: char to assign to the array
 *
 * Return: Pointer to an array, NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *str;

	unsigned int a;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)

		return (NULL);

	for (a = 0; a < size; a++)

		str[a] = c;

	return (str);
}
