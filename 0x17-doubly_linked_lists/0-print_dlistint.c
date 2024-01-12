#include "lists.h"

/**
 * print_dlistint - prints all the elements of a list
 * @h: the list
 *
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;
	const dlistint_t *counter = h;

	while (counter != NULL)
	{
		printf("%d\n", counter->n);
		counter = counter->next;
		i++;
	}
	return (i);
}
