#include "lists.h"


/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: head node of list
 * @n: data elements of list
 *
 * Return: pointer to new node.
 */


listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *temp;

	new_node = (listint_t *)malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		new_node->n = n;
		temp->next = new_node;
	}

	return (new_node);
}
