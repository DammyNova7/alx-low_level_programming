#include "lists.h"


/**
 * sum_listint - returns the sum of all the data (n) of a
 * listint_t linked list.
 * @head: the linked list
 *
 * Return: the sum of all the data(n), returns 0 if list is empty.
 */


int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);


	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
