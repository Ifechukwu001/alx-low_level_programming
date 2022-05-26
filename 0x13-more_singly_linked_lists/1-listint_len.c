#include "lists.h"

/**
 * listint_len - Prints all the elements of the list.
 * @h: Pointer to the head of the list.
 * Return: Size of list.
 */
size_t listint_len(const listint_t *h)
{
	if (h == (void *)0)
		return (0);
	if (h->next == (void *)0)
		return (1);
	else
		return (1 + listint_len(h->next));
}
