#include "lists.h"

/**
 * free_dlistint - Frees the memory allocated to a doubly linked list.\
 * @head: Pointer to the HEAD of the list.
 * Return: Void.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current, *temp;

	current = head;
	while (current)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
}
