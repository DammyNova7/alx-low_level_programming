#include <stdlib.h>
#include "function_pointers.h"


/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array.
 *
 * @array: array to print from
 * @size: size of array
 * @action: pointer to a function
 *
 * Return: nothing.
 */


void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action == NULL || array == NULL)
	{
		return;
	}
	else
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
