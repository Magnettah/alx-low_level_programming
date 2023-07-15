#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatnates two strings
 * @s1: pointer to new allocated memory
 * @s2: the second string
 * @n: unsigned int type
 *
 * Return: pointer to the new allocated mem
 *
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *num;
	unsigned int j = 0, i = 0, k = 0;

	while (s1[j])
		j++;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	num = malloc(sizeof(char) * (j + n + 1));

	if (num == NULL)
		return (NULL);

	while (s1[i])
		num[k++] = s1[i++];

	i = 0;
	while (i < n && s2[i])
		num[k++] = s2[i++];

	num[k] = '\0';

	return (num);
}
