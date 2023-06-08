#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 *
 * @n: integer to get the square root
 *
 * Return: -1 is n does not have a square root, else return square root.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (sqr_helper(n, 0, n));
	}
}

/**
 * sqr_helper - calculaters the square root of an integer.
 *
 * @i: integer
 * @start: start of guess
 * @end: end of guess
 *
 * Return: square root.
 */

int sqr_helper(int i, int start, int end)
{
	int mid;

	if (start > end)
	{
		return (-1);
	}
	mid = (start + end) / 2;

	if (mid * mid == i)
	{
		return (mid);
	}
	else if (mid * mid > i)
	{
		return (sqr_helper(i, start, mid - 1));
	}
	else
	{
		return (sqr_helper(i, mid + 1, end));
	}
}
