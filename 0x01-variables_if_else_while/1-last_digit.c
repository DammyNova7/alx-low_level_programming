#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - code test for last digit of user input
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int i;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	i = n % 10;

	if (i > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, i);
	}
	else if (i == 0)
	{
		printf("Last digit of %i is %i and is 0\n", n, i);
	}
	else
	{
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, i);
	}
	return (0);
}
