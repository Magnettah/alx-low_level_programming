#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: The first string
 * @s2: second string to concatenate
 *
 * Return: pointer to the string containing concat s1 and s2
 *
 */

char *str_concat(char *s1, char *s2)
{
	char *concat_str;

	int i, j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	i = j = 0;

	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0')
		j++;

	concat_str = malloc(sizeof(char) * (i + j + 1));

	if (concat_str == NULL)
		return (NULL);
	i = j = 0;

	while (s1[i] != '\0')

	{

		concat_str[i] = s1[i];

		i++;
	}

	while (s2[j] != '\0')

	{
		concat_str[i] = s2[j];

		i++, j++;
	}

	concat_str[i] = '\0';

	return (concat_str);
}
