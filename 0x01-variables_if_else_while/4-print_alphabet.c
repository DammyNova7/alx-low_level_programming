/**
* main - Entry point of program
* program prints the alphabet in lowercase
* with exception of q and e letters
* Return: Always 0 (Success)
*/

#include <stdio.h>

int main(void)

{
	int i = 'a';

	for (; i <= 'z'; i++)

	if (i != 'q' && i != 'e')

	putchar(i);
	putchar('\n');

	return (0);
}
