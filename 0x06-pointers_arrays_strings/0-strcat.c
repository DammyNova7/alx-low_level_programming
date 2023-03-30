#include "main.h"

/**
 * *_strcat - concatenates two strings.
 *
 * @dest: destination string
 * @src: source string
 *
 * Return: dest.
 */

char *_strcat(char *dest, char *src)
{
	int dest_len, i;
	int len = 0;

	while (dest[len] != '\0')
	{
		len++;
	}
	dest_len = len;

	i = 0;

	while (src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}

	dest[dest_len + i] = '\0';

	return (dest);

}
