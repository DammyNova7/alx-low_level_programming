#include <stdio.h>

/**
 * main - Entry point
 *
 * program prints Fizz for integers that are multiples of 3
 * prints Buzz for integers that are multiples of 5
 * and prints FizzBuzz for integers of both multiples of 3 and 5
 *
 * Return: 0 Success
 */

int main(void)
{
	int i;

	for (i = 1; i < 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
		printf("\n");

	return (0);
}
