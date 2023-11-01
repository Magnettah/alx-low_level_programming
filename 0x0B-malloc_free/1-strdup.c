#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer of duplicate to a new memory
 * @str: string to duplicate
 *
 * Return: 0
 *
 */

char *_strdup(char *str)
{
	char *dup;

	int i, len = 0;

	if (str == NULL)

		return (NULL);

	while (str[len] != '\0')

		len++;

	dup = malloc(sizeof(char) * (len + 1));

	if (dup == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		dup[i] = str[i];

	dup[len] = '\0';

	return (dup);
}
