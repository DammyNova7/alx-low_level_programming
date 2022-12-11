/**
* main - Entry point of code
* This program prints the letters of the alphabet on one line
*followed by a new line
* Return: Always 0 (Success)
*/

#include <stdio.h>

int main(void)

{
	int i = 'a';

	for (; i <= 'z'; i++)
	{
	putchar(i);

	}
	putchar('\n');

	return (0);
}
