#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - duplicate to new memory space location
 * @str: The string to be duplicated
 * Return: 0
 */

char *_strdup(char *str)
{
	char *dup;

	int i, r = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	i++;

	dup = malloc(sizeof(char) * (i + 1));

	if (dup == NULL)
		return (NULL);
	for (r = 0; str[r]; r++)
		dup[r] = str[r];
	return (dup);
}
