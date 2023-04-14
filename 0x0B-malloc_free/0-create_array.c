#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of chars, 
 * and initializes it with a specific char.
 *
 * @size: size of array
 * @c: character to initialize array to
 *
 * Returns NULL if size is o
 * Return: NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		i = 0;

		while (i < size)
		{
			arr[i] = c;
			i++;
		}
	}

	if (arr == NULL)
	{
		return (NULL);
	}

	return (arr);
}
