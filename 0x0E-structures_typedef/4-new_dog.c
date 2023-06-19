#include <stdlib.h>
#include "dog.h"


/**
 * *new_dog - creates a new dog.
 *
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of the dog
 *
 * Return: pointer to new_dog.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *carl;
	int i, j, n;
	char *m, *o;

	carl = malloc(sizeof(dog_t));
	if (carl == NULL)
		return (NULL);

	for (i = 0; name[i] != '\0'; i++)
		;
	for (j = 0; owner[j] != '\0'; j++)
		;

	m = malloc(sizeof(char) * i + 1);
	if (m == NULL)
	{
		free(carl);
		return (NULL);
	}

	o = malloc(sizeof(char) * j + 1);
	if (o == NULL)
	{
		free(m);
		free(carl);
		return (NULL);
	}

	for (n = 0; n <= i; n++)
		m[n] = name[n];

	for (n = 0; n <= j; n++)
		o[n] = owner[n];


	carl->name = m;
	carl->age = age;
	carl->owner = o;

	return (carl);
}
