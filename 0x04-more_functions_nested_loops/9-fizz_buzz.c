#include <stdio.h>

/**
 * main - Entry point
 * program is the fizz-buzz game
 * Return: 0 success
 */

int main(void)
{
	int i = 0;

	for (; i <= 101; i++)
{
	if (i % 15)
	{
		printf("FizzBuzz ");
	}
	else if (i % 3)
	{
		printf("Fizz ");
	}
	else if (i % 5)
	{
		printf("Buzz ");
	}
	else
	{
		printf("%i ", i);
	}
}
printf("Buzz\n");
return (0);
}
