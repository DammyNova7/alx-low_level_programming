#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - program that adds positive numbers.
 *
 * @argc: number of arguments
 * @argv: pointer to array of strings
 *
 * Return: 0 success.
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		char *num_str = argv[i];
		int j, num;

		for (j = 0; num_str[j] != '\0'; j++)
		{
			if (!isdigit(num_str[j]))
			{
				printf("Error\n");
				return (1);
			}
		}

		num = atoi(num_str);
		sum += num;
	}
	printf("%d\n", sum);

	return (0);
}
