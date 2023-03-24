#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>


/**
 * print_strings - prints strings.
 * @separator: The string to be printed between strings.
 * @n: number of strings passed to the function.
 *
 * Return: Nothing, if separator is NULL,
 * and print (nil)if one of the strings if NULL
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strg;
	char *str;
	unsigned int index;


	va_start(strg, n);


	for (index = 0; index < n; index++)
	{
		str = va_arg(strg, char *);


		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);


		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}


	printf("\n");


	va_end(strg);
}
