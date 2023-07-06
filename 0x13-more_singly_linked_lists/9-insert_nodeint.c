#include "lists.h"


/**
 * insert_nodeint_at_index -  inserts a new node at a given position.
 * @head: pointer to head node of a list
 * @idx: index of the list where node should be added
 * @n: the data of the node
 *
 * Return: a pointer to the new node on success and NULL on failure.
 * returns NULL when position does not exist.
 */


listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp;
	size_t len, i = 0;

	len = 0;
	temp = *head;

	while (temp != NULL)
	{
		temp = temp->next;
		len++;
	}

	if (idx > len)
		return (NULL);

	else
	{
		temp = *head;

		while (i < idx - 1)
		{
			temp = temp->next;
			i++;
		}

		new_node = (listint_t *)malloc(sizeof(listint_t));

		if (new_node == NULL)
			return (NULL);

		new_node->n = n;
		new_node->next = temp->next;
		temp->next = new_node;
	}

	return (new_node);
}
