#include "lists.h"

/**
 * sum_listint - sum of all the data in a list
 * @head: reference to the head
 *
 * Return: sum of all data(n), 0 if the list is empty
 */

int sum_listint(listint_t *head)
{
	int res = 0;

	while (head)
	{
		res += head->n;
		head = head->next;
	}
	return (res);
}
