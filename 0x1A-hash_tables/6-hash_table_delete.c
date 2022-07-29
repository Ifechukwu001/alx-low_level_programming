#include "hash_tables.h"

/**
 * hash_table_delete - Deletes the whole hash table.
 * @ht: Pointer to the hash table.
 * Return: Void.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current, *temp;
	unsigned long int idx;

	for (idx = 0; idx < ht->size; idx++)
	{
		current = ht->array[idx];
		while (current)
		{
			temp = current;
			current = current->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
		ht->array[idx] = NULL;
	}
	free(ht->array);
	free(ht);
}
