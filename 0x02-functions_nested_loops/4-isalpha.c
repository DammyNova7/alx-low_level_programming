#include "main.h"
/**
 * _isalpha(int)-function
 * program checks if c is a lowercase or uppercase alphabet
 * @c: character to test
 * return 1 if c is lowercase or uppercase
 * return 0 otherwise
 * Return: 0 success
 */

int _isalpha(int c)
{

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}

	return (0);

}
