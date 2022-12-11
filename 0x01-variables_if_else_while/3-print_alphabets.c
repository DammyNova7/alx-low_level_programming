/**
* main - Entry point
* This program prints the letters of the alphabet in both lower
* and uppercase
* putchar can only be used three times
* all other functions such as printf, scanf etc.. are forbidded
* all codes should be only in the main function
* Return: Always 0 (Success)
*/

#include <stdio.h>

int main(void)

{
	int i = 'a';
	int n = 'A';

	for (; i <= 'z'; i++)

{
	putchar(i);
}

	for (; n <= 'Z'; n++)

{
	putchar(n);
}

	putchar('\n');

	return (0);
}
