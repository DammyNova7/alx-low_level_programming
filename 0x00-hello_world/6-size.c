/**
 * main - Entry point
 * warnings are allowed
 * Return: Always 0 (Success)
 */

#include <stdio.h>

int main(void)
{
	printf("Size of a char: %zu bytes\n", sizeof(char));
	printf("Size of an int: %zu bytes\n", sizeof(int));
	printf("Size of a long: %zu bytes\n", sizeof(long));
	printf("Size of a long long: %zu bytes\n", sizeof(long long));
	printf("Size of a float: %zu bytes\n", sizeof(float));
	return (0);
}
