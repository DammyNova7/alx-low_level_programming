#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 *
 * @n: the number of times the character _ should be printed
 *
 * Return: 0.
 */

void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (n > 0)
		{
			_putchar(95);
		}
		else
		{
			_putchar(10);
		}
	}
		_putchar(10);
}
