#include "main.h"
/**
 * _islower(int)-function
 * program checks if c is a lowercase alphabet
 * @c: character to test
 * return 1 if c is lowercase
 * return 0 if c is not
 * Return: 0 success
 */

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

	return (0);

}
