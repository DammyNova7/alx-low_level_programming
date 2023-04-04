#include "main.h"

/**
 * *_strchr - locates a character in a string.
 *
 * @s: string to search through
 * @c: character to search for
 *
 * Return: pointer to the first occurrence of the character c in the string s
 * Returns NULL if the character is not found.
 */


char *_strchr(char *s, char c)
{
	int i;
	char *ptr = 0;

	i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			ptr = &s[i];
		}
		i++;
	}

	return (ptr);
}
