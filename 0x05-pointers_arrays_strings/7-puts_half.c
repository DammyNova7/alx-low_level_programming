#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 *
 * @str: string to manipulate
 *
 * Return: nothing.
 */

void puts_half(char *str)
{
	int i, l, n;

	l = 0;
	while (str[l] != '\0')
	l++;

	i = (l) / 2;

	n = 0;
	while (str[n] != '\0')
	{
		if (n >= i)
		_putchar(str[n]);
		n++;
	}
	_putchar(10);
}
