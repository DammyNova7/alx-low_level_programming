#include <stdio.h>

/**
 * main - program that prints all arguments it receives.
 *
 * @argc: number of arguments
 * @argv: pointer to array of strings
 *
 * Return: 0 success.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	printf("%s\n", argv[i]);

	return (0);
}
