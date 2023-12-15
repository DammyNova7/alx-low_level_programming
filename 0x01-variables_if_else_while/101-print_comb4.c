#include <stdio.h>

/**
 * main - program prints all possible different combinations of three digits.
 * All three digits are different and printed in ascending order.
 *
 * Return: 0 success.
 */

int main(void)
{
	int i, j, n;

	for (i = 48; i < 58; i++)
	{
		for (j = 49; j < 58; j++)
		{
			for (n = 50; n < 58; n++)
			{
				if ((i == j || i == n || j == n) || (i > j || i > n || j > n))
				{
					continue;
				}

					putchar(i);
					putchar(j);
					putchar(n);

					if (i == 55 && j == 56 && n == 57)
						break;

					putchar(',');
					putchar(' ');
			}
		}
	}
	putchar(10);

	return (0);
}
