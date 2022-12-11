/**
* main - Entry point of program
* program will print the letters of the alphabet in reverse
* without using printf, scanf etc..
* using putchar only twice
* Return: Always 0 (Success)
*/

#include <stdio.h>

int main(void)

{
	int i = 'z';

	for (; i >= 'a'; i--)
{
	putchar(i);
}
	putchar('\n');

	return (0);
}
