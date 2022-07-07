#include "lists.h"

/**
 * get_dnodeint_at_index - gets the node at an index.
 * @head: Pointer to the HEAD of the list.
 * @index: Position of the node (from 0).
 * Return: Node at that index.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i = 0;

	current = head;
	while (i < index)
	{
		if (current == NULL)
			return (0);
		current = current->next;
		i++;
	}
	return (current);
}
