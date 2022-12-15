#include "main.h"

/**
 * _abs(int)-fuction
 * @ab: the integer to return
 * Return: ab as absolute number
 */

int _abs(int ab)
{
	return (ab * ((ab > 0) - (ab < 0)));
}
