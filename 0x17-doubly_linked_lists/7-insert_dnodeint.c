#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a node at an index.
 * @h: Pointer to pointer to HEAD of list.
 * @idx: Index of the new node.
 * @n: Data integer of the node.
 * Return: Pointer to the new node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *current, *prevs;
	unsigned int i;

	current = *h;
	for (i = 0; i < idx; i++)
	{
		if (current == NULL)
			return (0);
		current = current->next;
	}

	if (current)
	{
		new = malloc(sizeof(dlistint_t));
		if (new == NULL)
			return (0);

		new->n = n;

		prevs = current->prev;
		new->next = current;
		current->prev = new;
		prevs->next = new;
		new->prev = prevs;

		return (new);
	}
	return (0);
}
