#include "main.h"
#include <stdlib.h>


/**
 * *_strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str: string to be duplicated
 *
 * Return: pointer to the duplicate string if not NULL.
 */

char *_strdup(char *str)
{
	unsigned int n, len;
	char *dup;

	if (str == NULL)
	{
		return (NULL);
	}

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	dup = (char *)malloc(sizeof(char) * (len + 1));

	if (dup == NULL)
	{
		return (NULL);
	}

	for (n = 0; n <= len; n++)
	{
		dup[n] = str[n];
	}

	return (dup);
}
