#include <stdio.h>

/**
 * main - program prints all possible combinations of two two-digit numbers.
 * the number ranges from 0 to 99
 *
 * Return: 0 success.
 */

int main(void)
{
	int i, j;

	for (i = 0; i < 100; i++)
	{
		for (j = 0; j < 100; j++)
		{
			if (i < j)
			{
				putchar((i / 10) + '0');
				putchar((i % 10) + '0');
				putchar(' ');
				putchar((j  / 10) + '0');
				putchar((j  % 10) + '0');

				if (!(i == 98 && j == 99))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar(10);

	return (0);
}
