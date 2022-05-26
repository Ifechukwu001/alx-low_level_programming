#include "lists.h"

/**
 * print_listint - Prints all the elements of the list.
 * @h: Pointer to the head of the list.
 * Return: Number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	if (h == (listint_t *)0)
		return (0);
	printf("%d\n", h->n);
	if (h->next == ((void *)0))
		return (1);
	else
		return (1 + print_listint(h->next));
}
