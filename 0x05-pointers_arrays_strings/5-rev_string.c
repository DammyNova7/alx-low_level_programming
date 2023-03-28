#include "main.h"

/**
 * rev_string - reverses a string.
 *
 * @s: string to reverse
 *
 * Return: nothing.
 */

void rev_string(char *s)
{
	int len = 0;
	char *f, *l, swap;


	while (s[len] != '\0')
	len++;

	f = s;
	l = s + len - 1;

	while (f < l)
	{
		swap = *f;
		*f++ = *l;
		*l-- = swap;
	}
}
