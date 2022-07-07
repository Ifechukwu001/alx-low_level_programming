#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at an index.
 * @head: Pointer to pointer to HEAD of list.
 * @index: Index of element to be deleted.
 * Return: 1 if it succeeded, -1 if it fails.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *prev_t, *current, *next_t;
	unsigned int i;

	current = *head;
	for (i = 0; i < index; i++)
	{
		if (current == NULL)
			return (-1);
		current = current->next;
	}

	if (current)
	{
		prev_t = current->prev;
		next_t = current->next;

		if (prev_t)
			prev_t->next = next_t;
		else
			*head = next_t;
		if (next_t)
			next_t->prev = prev_t;
		free(current);
		return (1);
	}
	return (-1);
}
