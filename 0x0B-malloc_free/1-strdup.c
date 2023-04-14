#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str: string to duplicate
 *
 * Return: pointer to duplicated string.
 */

char *_strdup(char *str)
{
	char *str2;
	int len, i;

	if (str == NULL)
	{
		return (NULL);
	}

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	str2 = malloc(len * sizeof(char));

	if (str2 == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (str[i] != '\0')
	{
		str2[i] = str[i];
		i++;
	}

	return (str2);
}
