#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a list
 * @head: the list
 * @n: data to add
 *
 * Return: the address of the new element or NULL if it failed.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *current = *head;

	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = current;
	*head = new_node;

	if (current != NULL)
	{
		current->prev = new_node;
	}

	return (new_node);
}
