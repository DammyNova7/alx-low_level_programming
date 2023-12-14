#include <stdio.h>

/**
 * main - entry point
 * program that prints all possible different combinations of two digits.
 *
 * Return: 0 success.
 */

int main(void)
{
	int i, j;

	for (i = 48; i < 57; i++)
	{
		for (j = 49; j < 58; j++)
		{
			if (i == j || i > j)
				continue;

			putchar(i);
			putchar(j);

			if (i == 56 && j == 57)
				break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar(10);

	return (0);
}
