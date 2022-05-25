#include "lists.h"

/**
 * add_node_end - Adds a node to the end of a singly linked list.
 * @head: Pointer to the head of the list.
 * @str: String to be added to the list.
 * Return: Address of the new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int lenght = 0;
	list_t *pt;
	char *ptr = (char *)str;

	while (ptr != NULL)
	{
		lenght++;
		ptr++;
	}
	pt = malloc(sizeof(list_t));
	if (!pt)
		return (0);
	pt->str = ptr;
	pt->len = lenght;
	while ((*head)->next)
		(*head) = (*head)->next;
	pt->next = NULL;
	*head = pt;
	return (pt);
}
