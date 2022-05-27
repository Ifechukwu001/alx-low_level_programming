#include "lists.h"

/**
 * free_listint2 - Frees the memories allocated to a list.
 * @head: Pointer to the HEAD of the list.
 * Return: Void.
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		exit(EXIT_FAILURE);
	while ((current = (*head)) != NULL)
	{
		(*head) = (*head)->next;
		free(current);
	}
}
