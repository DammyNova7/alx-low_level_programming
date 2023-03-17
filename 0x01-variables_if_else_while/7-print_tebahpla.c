#include <stdio.h>

/**
 * main - Entry point of a program
 *
 * prints the alphabet in reverse order
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i = 122;

	for (; i >= 97; i--)
	{
		putchar(i);
	}
		putchar(10);

	return (0);
}
