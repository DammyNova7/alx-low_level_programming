#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line.
 *
 * @s: string to print
 *
 * Return: nothing.
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar(10);
		return;
	}

	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
