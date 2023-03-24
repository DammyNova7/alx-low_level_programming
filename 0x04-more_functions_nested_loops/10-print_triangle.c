#include "main.h"

/**
* print_triangle - print backwards triangle of n size
* @size: size of triangle
*/

void print_triangle(int size)
{
	int x = 0;
	int y = 0;
	int z = 0;

	if (size < 1)
		_putchar(10);

	for (x = 1; x <= size; x++)
	{
		for (y = x; y < size; y++)
		{
			_putchar(32);
		}
		for (z = 0; z < x; z++)
		{
			_putchar(35);
		}
		_putchar(10);
	}
}
