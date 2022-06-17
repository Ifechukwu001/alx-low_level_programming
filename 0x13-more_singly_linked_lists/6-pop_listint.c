#include "lists.h"

/**
 * pop_listint - Deletes the head node.
 * @head: Pointer to the HEAD.
 * Return: Data value of the popped node.
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *pop, *temp;

	if (*head == NULL)
		return (0);
	
	pop = *head;
	temp = pop->next;
	*head = temp;
	n = pop->n;
	free(pop);
	
	if (n)
		return (n);
	return (0);
}
