#include <stdio.h>

/**
 * main - Entry point of program
 *
 * prints numbers from 0 - 9 with commas and spaces
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i = '0';

	for (; i <= '9'; i++)
	{
		putchar(i);
		if (i < '9')
		{
		putchar(',');
		putchar(' ');
		}
	}
		putchar('\n');

	return (0);
}
