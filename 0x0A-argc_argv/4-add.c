#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


/**
 * main - adds positive numbers.
 *
 * @argc: argument count
 * @argv: argument passed to main
 *
 * Return: 0 success.
 */

int main(int argc, char *argv[])
{
	int i, n, num, result;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	result = 0;

	for (i = 1; i < argc; i++)
	{
		num = 0;
		n = 0;

		while (argv[i][n] != '\0')
		{
			if (!isdigit(argv[i][n]))
			{
				printf("Error\n");
				return (1);
			}

			num = num * 10 + (argv[i][n] - '0');
			n++;
		}

		result += num;
	}

	printf("%d\n", result);

	return (0);
}
