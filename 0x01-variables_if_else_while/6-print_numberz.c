/**
* main - Entry point of program
* program prints all digits of base 10 followed by a newline
* without using printf, scanf etc...
* using putchar only twice in the code
* all codes should be in the main function
* Return: Always 0 (Success)
*/

#include <stdio.h>

int main(void)
{
	int i = '0';

	for (; i <= '9'; i++)
{
	putchar(i);
}
	putchar('\n');

	return (0);
}

