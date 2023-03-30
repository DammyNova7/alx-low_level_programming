#include "main.h"

/**
 * *_strncat - concatenates two strings.
 * and copies a specified number of bytes from the source string,
 * to the end of the destination string.
 *
 * @dest: destination string
 * @src: source string
 * @n: number bytes to be copied
 *
 * Return: dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int x;
	int dest_len;

	dest_len = 0;
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	x = 0;
	while (x < n && src[x] != '\0')
	{
		dest[dest_len + x] = src[x];
		x++;
	}

	dest[dest_len + x] = '\0';

	return (dest);
}
