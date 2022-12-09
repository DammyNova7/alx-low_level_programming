/**
 * main - Entry point
 * warnings are allowed
 * Return: Always 0 (Success)
 */

#include <stdio.h>

int main(void)
{
	printf("char size: %zu bytes\n", sizeof(char));
	printf("int size: %zu bytes\n", sizeof(int));
	printf("long size: %zu bytes\n", sizeof(long));
	printf("long long size: %zu bytes\n", sizeof(long long));
	printf("float size: %zu bytes\n", sizeof(float));
	return (0);
}
