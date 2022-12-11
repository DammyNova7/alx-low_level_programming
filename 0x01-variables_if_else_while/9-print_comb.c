/**
* main - Entry point of code
* Description: prints all possible combinations of single-digit numbers
* must be seperated by commas and spaces
* print in ascending order
* using only putchar four times
* Return: 0
*/

#include <stdio.h>

int main(void)

{
	int i = 48;

	for (; i < 58; i++)
{
	putchar(i);
	if (i < 48)

	{
	putchar(44);
	putchar(32);
	}
}

	putchar('\n');

return (0);
}
