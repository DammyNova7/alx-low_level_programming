#include "main.h"

/**
 * more_numbers(void)-function
 * function that prints the numbers from 0 - 14
 * Return: void
 */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)

			_putchar((j / 10) + '0');

			_putchar((j % 10) + '0');
		}
	_putchar('\n');
	}
}
