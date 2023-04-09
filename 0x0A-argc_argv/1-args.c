#include <stdio.h>

/**
 * main - prints the number of arguments passed into it.
 *
 * @argc: number of arguments
 * @argv: pointer to array of strings
 *
 * Return: 0 success.
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
