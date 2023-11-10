#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings , followed by a new line
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 *
 * Return: Nothing if the separator is NULL and (nil) if the string == NULL
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int i;

	va_start(str, n);

	for (i = 0; i < n; i++)
	{
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", va_arg(str, char *));

		if (separator != NULL && i != (n - 1)
			printf("%s", separator);
	}

	printf("\n");

	va_end(str);

}
