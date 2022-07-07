#include "lists.h"

/**
 * print_dlistint - Prints the data integers in a doubly linked list.
 * @h: Pointer to the HEAD of the list.
 * Return: Number of Nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *current;
	int elems = 0;

	current = (dlistint_t *)h;
	while (current)
	{
		printf("%d\n", current->n);
		elems++;
		current = current->next;
	}
	return (elems);
}
