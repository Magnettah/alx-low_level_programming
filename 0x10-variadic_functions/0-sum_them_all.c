#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all parameters
 * @n: number of parameters of the function
 *
 * Return: 0, if n == 0 and sum, otherwise
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list val;
	unsigned int i;
	int sum = 0;

	va_start(val, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(val, int);
	}

	va_end(val);

	return (sum);
}
