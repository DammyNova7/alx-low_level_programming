#include "main.h"

/**
 * *_memset - fills memory with a constant byte.
 *
 * @s: pointer to the first address of the memory block
 * @b: value to be filled in the specified memory block
 * @n: number of bytes to be filled.
 *
 * Return: *s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
