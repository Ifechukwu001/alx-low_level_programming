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
	list_t *pt, *temp;
	char *ptr = (char *)str;

	while (*ptr != '\0')
	{
		lenght++;
		ptr++;
	}
	pt = malloc(sizeof(list_t));
	if (pt == NULL)
		return (0);
	pt->str = strdup(str);
	pt->len = lenght;
	pt->next = NULL;
	temp = *head;
	if (temp == NULL)
	{
		*head = pt;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = pt;
	}
	return (pt);
}
