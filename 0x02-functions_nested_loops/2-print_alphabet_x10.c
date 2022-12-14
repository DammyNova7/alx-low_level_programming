#include "main.h"

/**
 * print_alphabet_x10(void)-function
 * prints the alphabets 10 times with a newline
 */


void print_alphabet_x10(void)
{

	int i = 0, j;

	while (i < 10)
	{
	j = 'a';

	while (j <= 'z')
	{
	_putchar(j);
	j++;
	}

	_putchar('\n');
	i++;

	}
}
