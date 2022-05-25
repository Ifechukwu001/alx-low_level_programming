#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the data in a linked list.
 * @h: Head of the linked list.
 * Return: Size of the list.
 */
size_t print_list(const list_t *h)
{
	char *string = h->str;

	if (string)
		printf("[%d] %s\n", h->len, string);
	else
		printf("[0] (nil)\n");

	if (h->next == NULL)
		return (1);
	else
		return (1 + print_list(h->next));
}
