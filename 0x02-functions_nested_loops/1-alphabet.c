#include "main.h"

/**
 * main - Entry point of program
 *
 * prints the alphabet in lower case using _putchar
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		_putchar(n);
		n++;
	}
		_putchar(10);
	return (0);
}
