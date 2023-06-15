#include "main.h"
#include <stdlib.h>


/**
 * *malloc_checked - allocates memory using malloc.
 *
 * @b: size of the memory to allocate
 * Return: pointer to the allocated memory on success.
 */


void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
