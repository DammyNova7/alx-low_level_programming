#include "lists.h"

/**
 * free_dlistint - frees a list
 * @head: the list
 *
 * Return: nothing.
 */


void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *temp;

	if (head != NULL)
	{
		while (current != NULL)
		{
			temp = current->next;
			free(current);
			current = temp;
		}
	}

}
