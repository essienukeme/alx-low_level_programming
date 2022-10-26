#include "lists.h"

/**
 * add_nodeint - add node at the beginning of a list
 * @head: pointer to the reference of the head
 * @n: integer to be added
 *
 * Return: the address of the new element, NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
