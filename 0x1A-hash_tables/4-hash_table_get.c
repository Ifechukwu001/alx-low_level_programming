#include "hash_tables.h"

/**
 * hash_table_get - Gets the value associated with a key.
 * @ht: Pointer to the hash table.
 * @key: Key to the value.
 * Return: The Value associated with the key or NULL if unsuccessful.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *current;
	unsigned long int idx;

	if (ht == NULL || key == NULL)
		return (NULL);

	idx = key_index((unsigned char *)key, ht->size);
	current = ht->array[idx];
	while (current)
	{
		if ((strcmp(key, current->key)) == 0)
			return (current->value);
		current = current->next;
	}
	return (NULL);
}
