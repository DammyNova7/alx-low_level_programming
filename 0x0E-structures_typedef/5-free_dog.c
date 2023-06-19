#include <stdlib.h>
#include "dog.h"


/**
 * free_dog - frees dogs.
 *
 * @d: an array
 * description: free memory for dog
 *
 * Return: nothing.
 */


void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
