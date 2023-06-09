#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 *
 * @argc: argument count
 * @argv: argument passed to main
 *
 * Return: 0 success.
 */

int main(int argc, char *argv[])
{
	int i, n, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);
	n = atoi(argv[2]);
	result = i * n;

	printf("%d\n", result);

	return (0);
}
