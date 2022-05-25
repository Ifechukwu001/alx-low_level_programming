#include "lists.h"

/**
 * list_len - gets the length of a singly linked list.
 * @h: Head of the list.
 * Return: Length of the list.
 */
size_t list_len(const list_t *h)
{
	if (h->next == NULL)
		return (1);
	else
		return (1 + list_len(h->next));
}
