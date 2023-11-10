#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of the parameters in a functions
 * @n: number of arguments in the function
 *
 * Return: Sum of all parameters, or 0 if n == 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list arguments;

	unsigned int i;
	int sum = 0;

	va_start(arguments, n);
	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(arguments, int);
	}
	va_end(arguments);

	return (sum);
}
