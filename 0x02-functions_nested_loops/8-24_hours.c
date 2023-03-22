#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59
 *
 */

void jack_bauer(void)
{
	int n, m, i, j;

	for (n = '0'; n <= '2'; n++)
	{
		for (m = '0'; m <= '9'; m++)
		{
			for (i = '0'; i <= '5'; i++)
			{
				for (j = '0'; j <= '9'; j++)
				{
					if (n >= '2' && m >= '4')
					break;

					_putchar(n);
					_putchar(m);
					_putchar(':');
					_putchar(i);
					_putchar(j);
					_putchar('\n');
				}
			}
		}
	}
}
