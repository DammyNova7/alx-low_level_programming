#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 *
 */

void times_table(void)
{
	int row = 0;
	int column = 0;
	int product = 0;

	for (row = 0; row <= 9; row++)
	{
		_putchar(48);
		_putchar(44);
		for (column = 1; column < 10; column++)
		{
			product = row * column;
			if ((product / 10) > 0)
			{
				_putchar((product / 10) + '0');
			}
			else
			{
				_putchar(32);
			}
				_putchar((product % 10) + '0');
			if (column < 9)
			{
				_putchar(44);
				_putchar(32);
			}
		}
		_putchar(10);
	}
}
