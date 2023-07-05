#include "lists.h"


/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: linked list
 * @index: the position of a node
 *
 * Return: the nth node(the value of the requested position.
 */


listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t i;

	for (i = 0; (i < index) && (head->next); i++)
		head = head->next;

	if (i < index)
		return (NULL);

	return (head);
}
