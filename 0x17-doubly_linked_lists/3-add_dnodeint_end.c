#include "lists.h"

/**
 * add_dnodeint_end - Adds a node to the end of a doubly linked list.
 * @head: Pointer to pointer to HEAD of the list.
 * @n: Data integer to add to the list.
 * Return: Pointer to the new node.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *current;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (0);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		new->prev = NULL;
	}
	else
	{
		current = *head;
		while (current->next)
			current = current->next;
		current->next = new;
		new->prev = current;
	}
	return (new);
}
