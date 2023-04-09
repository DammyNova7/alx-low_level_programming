#include <stdio.h>
#include <stdlib.h>


/**
 * main - program that multiplies two numbers.
 *
 * @argc: number of arguments
 * @argv: pointer to array of strings
 *
 * Return: 0 success.
 */

int main(int argc, char *argv[])
{
	int i, j, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);
	j = atoi(argv[2]);

	result = i * j;

	printf("%d\n", result);

	return (0);
}

