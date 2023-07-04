#include "lists.h"


/**
 * *add_node - adds a new node at the beginning of a list_t list.
 * @head: double pointer to head of linked list
 * @str: data in the list
 *
 * Return: address of the new element on success.
 * NULL if it failed.
 */


list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
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
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
