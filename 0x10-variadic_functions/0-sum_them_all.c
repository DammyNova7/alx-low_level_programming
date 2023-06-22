#include "variadic_functions.h"
#include <stdarg.h>


/**
 * sum_them_all - returns the sum of all its parameters.
 *
 * @n: number of integers to sum
 *
 * Return: result.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int result = 0;

	va_list sum;

	va_start(sum, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		result = result + va_arg(sum, unsigned int);

	va_end(sum);

	return (result);
}
