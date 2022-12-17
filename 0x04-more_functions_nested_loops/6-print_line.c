#include "main.h"

/**
 * print_line(int n)-print_line function
 * @n: number of times to print
 * If n is 0 or less, the function should only print \n
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('_');
		}
	}
		_putchar('\n');
}
