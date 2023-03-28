#include "main.h"

/**
 * puts2 - prints every other character of a string,
 * starting with the first character, followed by a new line.
 *
 * @str: string to print
 *
 * Return: nothing.
 */

void puts2(char *str)
{
	int n = 0;

	while (str[n] != '\0')
	{
		if (str[n] % 2 == 0)
		_putchar(str[n]);
		n++;
	}
	_putchar(10);
}
