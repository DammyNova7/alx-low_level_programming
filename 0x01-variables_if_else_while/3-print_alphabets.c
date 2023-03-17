#include <stdio.h>

/**
 * main - Entry point of program
 *
 * prints the alphabet in lowercase and uppercase
 * using a while loop
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i = 97;
	int n = 65;

	while (i <= 122)
	{
		putchar(i);
		i++;
	}

	while (n <= 90)
	{
		putchar(n);
		n++;
	}
		putchar(10);

	return (0);
}
