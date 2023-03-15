#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings
 * @s1: first input to concatenate
 * @s2: seconf imput to concatenate
 *
 * Return: pointer to the new concatenated string, or NULL (Error)
 */
char *str_concat(char *s1, char *s2)
{
	char *concat1;
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;
	concat1 = malloc(sizeof(char) * (len1 + len2 + 1));
	if (concat1 == NULL)
		return (NULL);

	i = 0;
	j = 0;

	if (s1)
	{
		while (i < len1)
		{
			concat1[i] = s1[i];
			i++;
		}
	}
	if (s2)
	{
		while (i < (len1 + len2))
		{
			concat1[i] = s2[j];
			i++;
			j++;
		}
	}
	concat1[i] = '\0';
	return (concat1);
}
