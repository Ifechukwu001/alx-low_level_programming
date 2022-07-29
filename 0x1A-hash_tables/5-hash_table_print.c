#include "hash_tables.h"

/**
 * hash_table_print - Prints all the nodes in a hash table.
 * @ht: Pointer to the hash table.
 * Return: Void.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current;
	unsigned long int idx;
	int first_flag = 1;

	putchar('{');

	for (idx = 0; idx < ht->size; idx++)
	{
		current = ht->array[idx];
		while (current)
		{
			if (first_flag)
				first_flag = 0;
			else
				printf(", ");
			printf("'%s': '%s'", current->key, current->value);
			current = current->next;
		}
	}

	printf("}\n");
}
