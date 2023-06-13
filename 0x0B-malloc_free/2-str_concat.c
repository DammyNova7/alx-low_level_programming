#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings.
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the concatenated string on success, NULL on failure.
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, len1, len2;
	char *ptrC;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = 0;
	while (s1[len1] != '\0')
	{
		len1++;
	}
	len2 = 0;
	while (s2[len2] != '\0')
	{
		len2++;
	}
	ptrC = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (ptrC == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
	{
		ptrC[i] = s1[i];
	}
	for (i = 0; i < len2; i++)
	{
		ptrC[len1 + i] = s2[i];
	}
	ptrC[len1 + len2] = '\0';
	return (ptrC);
}
