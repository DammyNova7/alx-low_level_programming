#include "main.h"

/**
 * print_square - prints a square
 *
 * @size: the size of the square
 *
 * Return: 0.
 */

void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar(35);
		}
			if (i != size)
			{
				_putchar(10);
			}
	}
	_putchar(10);
}
