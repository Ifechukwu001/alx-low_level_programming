#include "lists.h"

/**
 * free_list - Frees up the memory locations of nodes in a singly linked list.
 * @head: Pointer to Head of Singly linked list.
 * Return: void.
 */
void free_list(list_t *head)
{
	list_t *ptr;

	while ((ptr = head) != NULL)
	{
		head = head->next;
		free(ptr->str);
		free(ptr);
	}
}
