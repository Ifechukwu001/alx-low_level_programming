#include "lists.h"

/**
 * add_node - Adds a node to the beginning of a singly linked list.
 * @head: Pointer to the head of the list.
 * @str: String to be added to the list.
 * Return: Address of the new element.
 */
list_t *add_node(list_t **head, const char *str)
{
	int lenght = 0;
	list_t *pt;
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
	pt->next = *head;
	*head = pt;
	return (pt);
}
