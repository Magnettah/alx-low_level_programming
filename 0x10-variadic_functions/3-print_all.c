#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the fucntion
 */

void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	char *strg, *separator = "";

	va_list anything;

	va_start(anything, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(anything, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(anything, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(anything, double));
					break;
				case 's':
					strg = va_arg(anything, char *);
					if (strg == NULL)
						strg = "nil";
					printf("%s%s", separator, strg);
					break;
				default:
					i++;
					continue;
			}
			separator = ", ";
			i++;
		}
	}
	printf("\n");

	va_end(anything);

}
