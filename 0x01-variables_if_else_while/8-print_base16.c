#include <stdio.h>

/**
 * main - Entry point of program
 *
 * prints numbers of base 16 in lowercase
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int b = 48;
	int m = 97;

	while (b <= 57)
	{
		putchar(b);
		b++;
	}
	while (m <= 102)
	{
		putchar(m);
		m++;
	}
		putchar(10);

	return (0);
}
