#include "lists.h"

/**
 * add_nodeint_end - Adds a node to the list.
 * @head: Pointer to the HEAD of the list.
 * @n: Data value.
 * Return: Pointer to the new node.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	if (head  == (void *)0)
		return (0);
	new = malloc(sizeof(listint_t));
	if (new == (void *)0)
		return (0);
	new->n = n;
	new->next = (void *)0;
	temp = *head;
	if (temp == (void *)0)
		*head = new;
	else
	{
		while (temp->next)
			temp = temp->next;
		temp->next = new;
	}
	return (new);
}
