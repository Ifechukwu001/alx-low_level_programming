#include "lists.h"

/**
 * print_listint - Prints all the elements of the list.
 * @h: Pointer to the head of the list.
 * Return: Number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
