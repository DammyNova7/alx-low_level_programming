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
	int i = '0';

	for (; i < '9'; i++)
{
	putchar(i + '0');

	if (i < 9)

	{

		putchar(',');

		putchar(' ');
	}
}

	putchar('\n');

return (0);
}
