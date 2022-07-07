#include "lists.h"

/**
 * dlistint_len - Counts the elements in a doubly linked list.
 * @h: Pointer to the HEAD of the list.
 * Return: Number of elements.
 */
size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *current;
	int elems = 0;

	current = (dlistint_t *)h;
	while (current)
	{
		elems++;
		current = current->next;
	}
	return (elems);
}
