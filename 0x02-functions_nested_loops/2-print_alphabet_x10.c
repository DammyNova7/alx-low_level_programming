#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times
 */

void print_alphabet_x10(void)
{
	int i = 0;
	int n;

	while (i <= 9)
	{
		n = 97;
		while (n <= 122)
		{
			_putchar(n);
			n++;
		}
			_putchar(10);
			i++;
	}
}
