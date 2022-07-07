#include "lists.h"

/**
 * sum_dlistint - Sums all the data integers in a doubly linked list.
 * @head: Pointer to the HEAD of the list.
 * Return: Sum of the numbers.
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int sum = 0;

	current = head;
	while (current)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
