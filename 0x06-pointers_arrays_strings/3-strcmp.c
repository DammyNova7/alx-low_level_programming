#include "main.h"

/**
 * _strcmp - function compares two strings
 * @s1: first string to compare
 * @s2: second string to compare against
 *
 * Return: difference between the ASCII values of the unidentical characters
 * in the index. Returns 0 is both strings are identical.
 */

int _strcmp(char *s1, char *s2)
{
	int i, n;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			n = s1[i] - s2[i];
			break;
		}
		else
		{
			n = 0;
		}
	}
	return (n);
}
