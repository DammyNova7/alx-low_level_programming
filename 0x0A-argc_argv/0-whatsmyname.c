#include <stdio.h>

/**
 * main - prints name of executeable followed by a new line.
 *
 * @argc: number of arguements
 * @argv: array of strings
 *
 * Return: 0 success.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	printf("%s\n", argv[0]);

	return (0);
}
