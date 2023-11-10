#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	int i = 0, k = 0;
	char *strg, *separator = ", ";

	va_list anything;

	va_start(anything, format);
	while (format && format[i])
		i++;

	while (format && format[k])
	{
		if (k == (i - 1))
		{
			separator = "";
		}

		switch (format[k])
		{
			case 'c':
				printf("%c%s", va_arg(anything, int), separator);
				break;
			case 'i':
				printf("%d%s", va_arg(anything, int), separator);
				break;
			case 'f':
				printf("%f%s", va_arg(anything, double), separator);
				break;
			case 's':
				strg = va_arg(anything, char *);
				if (strg == NULL)
						strg = "(nil)";
				printf("%s%s", strg, separator);
				break;
		}
		k++;
	}
	printf("\n");

	va_end(anything);

}
