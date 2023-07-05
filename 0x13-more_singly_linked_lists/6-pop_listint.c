#include "lists.h"


/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: pointer to the head node of the list
 *
 * Return: the head node’s data (n) if list not empty,
 * returns 0 on empty list.
 */


int pop_listint(listint_t **head)
{
	listint_t *temp;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
			temp = *head;
			temp = (*head)->next;

			return (temp->n);
	}
}
