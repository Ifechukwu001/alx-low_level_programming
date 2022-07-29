#include "hash_tables.h"

/**
 * hash_table_set - Adds a new key-value pair to the hash table.
 * @ht: Pointer to the hash table.
 * @key: String key to the data.
 * @value: String value data.
 * Return: 1 if successful, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new, *tmp;
	unsigned long int index;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	if (strlen(key) == 0)
		return (0);

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);

	new->key = strdup(key);
	new->value = strdup(value);
	if (new->key == NULL || new->value == NULL)
	{
		free(new);
		return (0);
	}

	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
	{
		ht->array[index] = new;
		new->next = NULL;
	}
	else
	{
		tmp = ht->array[index];
		new->next = tmp;
		ht->array[index] = new;
	}
	return (1);
}
