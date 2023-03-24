#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>


/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 *
 * Return: Nothing, if separator == NULL
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	char *sep;
	unsigned int i;
	va_list num;

	if (separator == NULL || *separator == 0)
		sep = "";
	else
		sep = (char *) separator;
	va_start(num, n);

	if (n > 0)
		printf("%d", va_arg(num, int));
	for (i = 1; i < n; i++)
		printf("%s%d", sep, va_arg(num, int));
	printf("\n");
	va_end(num);
}
