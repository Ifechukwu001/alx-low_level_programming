#include "lists.h"

/**
 * add_nodeint - Adds a node to the list.
 * @head: Pointer to the HEAD of the list.
 * @n: Data value.
 * Return: Pointer to the new node.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head  == (void *)0)
		return (0);
	new = malloc(sizeof(listint_t));
	if (new == (void *)0)
		return (0);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
