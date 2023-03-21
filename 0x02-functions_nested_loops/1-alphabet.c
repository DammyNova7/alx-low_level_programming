#include "main.h"

/**
 * print_alphabet - prints the alphabet in lower case using _putchar
 *
 * Return: void
 */

void print_alphabet(void)
{
	int n = 97;

	while (n <= 122)
	{
		_putchar(n);
		n++;
	}
		_putchar(10);
}
