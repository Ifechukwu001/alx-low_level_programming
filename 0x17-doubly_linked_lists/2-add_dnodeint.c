#include "lists.h"

/**
 * add_dnodeint - Adds a node to the beginning of the doubly linked list.
 * @head: Pointer to a pointer to the HEAD of the list.
 * @n: Data of the new node.
 * Return: Pointer to the new node.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (0);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	*head = new;
	return (new);
}
