#include "lists.h"

/**
 * get_nodeint_at_index - Gets a node at the the index number.
 * @head: Head pointer to the linked list.
 * @index: Index number of the node.
 * Return: Pointer to the node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;
	listint_t *current;

	if (head == NULL)
		return (0);
	current = head;
	while (n != index)
	{
		if (current == NULL)
			return (0);
		current = current->next;
		n++;
	}
	return (current);
}
