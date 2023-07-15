#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - allocates memory to an array on nmenb elements
 * @nmemb: Elements in an array
 * @size: size of the elements
 *
 * Return: Pointer to the new memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *t;

	if (size == 0 ||nmemb == 0)
		return (NULL);
	t = malloc(nmemb * size);
	if (t == NULL)
	{
		return (NULL);
	}

}
