#include "lists.h"

/**
 * listint_len - Prints all the elements of the list.
 * @h: Pointer to the head of the list.
 * Return: Size of list.
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
