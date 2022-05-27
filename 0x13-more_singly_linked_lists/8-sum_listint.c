#include "lists.h"

/**
 * sum_listint - Sums all the data values in the list.
 * @head: Pointer to the head node.
 * Return: Sum of all data values.
 */
int sum_listint(listint_t *head)
{
	if (head == NULL)
		return (0);
	if (head->next == NULL)
		return (head->n);
	else
		return ((head->n) + sum_listint(head->next));
}
