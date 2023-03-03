#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */

char *leet(char *str)
{
	int i, j;
	char *leet_str = str;
	char *leet_map = "aAeEoOtTlL44370071";

	for (i = 0; str[i]; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == leet_map[j])
			{
				leet_str[i] = leet_map[j + 10];
				break;
			}
		}
	}

	return (leet_str);
}
