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
	printf("Last digit of %d is %d", n, i);

	if (i > 5)
	{
		printf("and is greater than 5");
	}
	if (i == 0)
	{
		printf("and is 0");
	}
	if (i < 6 && i != 0)
	{
		printf("and is less than 6 and not 0");
	}
	return (0);
}
