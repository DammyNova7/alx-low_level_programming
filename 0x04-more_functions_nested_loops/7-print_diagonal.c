#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 *
 * @n: the number of times the character \ should be printed
 *
 * Return: 0.
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar(10);
	for (i = 0; i < n; i++)
	{
		for (j = i; j > 0; j--)
			_putchar(32);
		_putchar(92);
		_putchar(10);
	}
}
