#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 *
 * @n: integer to compute the absolute value
 *
 * Return: returns an integer value
 */

int _abs(int n)
{

	if (n < 0)
	{
		return ((n = n * -1));
	}
	else
	{
		return (n);
	}
}
