#include "lists.h"


/**
 * *add_node_end - adds a new node at the end of a list_t list.
 * @head: double pointer to head of linked list
 * @str: data in the list
 *
 * Return: address of the new element on success.
 * NULL if it failed.
 */


list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode, *temp;
	char *dup;
	size_t i;

	if (str == NULL)
		return (NULL);

	newnode = (list_t *) malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);

	dup = strdup(str);

	for (i = 0; str[i]; i++)
		;

	newnode->len = i;
	newnode->str = dup;
	newnode->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = newnode;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = newnode;
	}

	return (newnode);
}
