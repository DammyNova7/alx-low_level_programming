#include "main.h"
#include <stdio.h>

/**
 * main - prints the name of a file, followed by a new line.
 *
 * @argc: argument count
 * @argv: arguments to main
 *
 * Return: 0 success.
 */

int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);

	return (0);
}
