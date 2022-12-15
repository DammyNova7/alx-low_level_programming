#include "main.h"

/**
 * print_sign(int)-function
 * @n: number to print
 * this program prints the sign of a number.
 * Returns 1 and prints + if n is greater than zero
 * Returns 0 and prints 0 if n is zero
 * Returns -1 and prints - if n is less than zero
 * Return: 0 success
 */

int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}

	return (0);
}
