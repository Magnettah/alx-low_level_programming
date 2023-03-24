#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_all - prints anything
 * Description: c is char, i is int, f is float,
 * and s is char * (if null print (nil))
 * @format: list of types of arguments passed to the function
 *
 * Return: Always 0
 */

void print_all(const char * const format, ...)
{
	va_list list;
	int n = 0, i = 0;
	char *sep = ", ";
	char *str;

	va_start(list, format);

	while (format && format[i])
		i++;

	while (format && format[n])
	{
		if (n  == (i - 1))
		{
			sep = "";
		}
		switch (format[n])
		{
		case 'c':
			printf("%c%s", va_arg(list, int), sep);
			break;
		case 'i':
			printf("%d%s", va_arg(list, int), sep);
			break;
		case 'f':
			printf("%f%s", va_arg(list, double), sep);
			break;
		case 's':
			str = va_arg(list, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s%s", str, sep);
			break;
		}
		n++;
	}
	printf("\n");
	va_end(list);
}
