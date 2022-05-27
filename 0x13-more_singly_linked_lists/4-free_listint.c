#include "lists.h"

/**
 * free_listint - Frees the memories allocated to a list.
 * @head: Pointer to the HEAD of the list.
 * Return: Void.
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current);
	}
}
