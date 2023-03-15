#include "main.h"
#include <stdlib.h>

/**
 * *argstostr - concatenates all the arguments of the program
 * @ac: int input
 * @av: array of arguments
 *
 * Return: 0
 */

char *argstostr(int ac, char **av)
{
	int i, n, j = 0, r = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			j++;
	}
	j += ac;
	str = malloc(sizeof(char) * j + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
		{
			str[r] = av[i][n];
			r++;
		}
		if (str[r] == '\0')
		{
			str[r++] = '\n';
		}
	}
	return (str);
}
