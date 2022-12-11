/**
* main - Entry point of program
* program prints all digits of base 16 in lowecase
* without using printf or scanf
* prints using putchar only 3 times
* Return: Always 0 (Success)
*/

#include <stdio.h>

int main(void)

{
	int i = '0';
	int n = 'a';

	for (; i <= '9'; i++)
{
	putchar(i);
}

	for (; n <= 'f'; n++)
{
	putchar(n);
}
	putchar('\n');

	return (0);
}
