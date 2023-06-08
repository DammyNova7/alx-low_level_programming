#include "main.h"

/**
 * is_prime_number - tests for prime numbers
 *
 * @n: number to test
 *
 * Return: 1 if n is a prime number and 0 otherwise.
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (check_prime_num(n, 2));
	}
}

/**
 * check_prime_num - help to test for prime numbers.
 *
 * @i: number to test
 * @m: divisor
 *
 * Return: prime number.
 */

int check_prime_num(int i, int m)
{
	if (i == m)
		return (1);

	if (i % m == 0)
		return (0);

	return (check_prime_num(i, m + 1));
}
