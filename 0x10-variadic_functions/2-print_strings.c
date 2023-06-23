#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>


/**
 * print_strings - prints strings, followed by a new line.
 *
 * @separator: string to be printed between the strings
 * @n: number of strings to be printed
 *
 * Return: nothing.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;

	va_list strings;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(strings, char *);

		if (s != NULL)
		{
			printf("%s", s);
		}
		else
		{
			printf("nil");
		}

		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	va_end(strings);

	printf("\n");
}
