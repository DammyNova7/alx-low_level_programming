#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 *
 * @n: integer to get its factorial
 *
 * Return: -1 for error, returns 1 when it's 0, returns factorial(n).
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
