#include "main.h"


/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * and if b is NULL.
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int result = 0;

	if (!b)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			result = result << 1;
			if (b[i] == '1')
				result += 1;
		}
		else
		{
			return (0);
		}
	}

	return (result);
}
