#include <stdio.h>

/**
 * main - Entry point of program
 *
 * prints the alphabet using putchar in a for loop
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i = 97;

	for (; i <= 122; i++)
	{
		putchar(i);
	}
		putchar(10);
return (0);
}
