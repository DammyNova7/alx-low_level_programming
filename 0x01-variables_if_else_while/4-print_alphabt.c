#include <stdio.h>

/**
 * main - Entry point of program
 *
 * program prints the alphabet except letters  q and e
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i = 97;

	while (i <= 122)
	{
		if (i != 113 && i != 101)

		putchar(i);
		i++;
	}
		putchar(10);

	return (0);
}
