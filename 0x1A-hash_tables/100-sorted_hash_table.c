#include "hash_tables.h"

/**
 * shash_table_create - Creates a new sorted hash table.
 * @size: Size of the hash table.
 * Return: Pointer to the hash table.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_table;
	unsigned long int i;

	new_table = malloc(sizeof(shash_table_t));
	if (new_table == NULL)
		return (NULL);

	new_table->array = malloc(sizeof(shash_node_t *) * size);
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		new_table->array[i] = NULL;

	new_table->shead = NULL;
	new_table->stail = NULL;
	new_table->size = size;
	return (new_table);
}

/**
 * shash_table_set - Adds a new key-value pair to the shash table.
 * @ht: Pointer to the shash table.
 * @key: String key to the data.
 * @value: String value data.
 * Return: 1 if successful, 0 otherwise.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new, *tmp;
	unsigned long int index;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	if (strlen(key) == 0)
		return (0);
	new = malloc(sizeof(shash_node_t));
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
	if (ht->shead == NULL && ht->stail == NULL)
	{
		ht->shead = new;
		ht->stail = new;
		new->sprev = NULL;
		new->snext = NULL;
	}
	else
	{
		tmp = ht->shead;
		while (tmp)
		{
			if (strcmp(new->key, tmp->key) <= 0)
			{
				new->snext = tmp;
				if (tmp->sprev != NULL)
					tmp->sprev->snext = new;
				new->sprev = tmp->sprev;
				tmp->sprev = new;
				break;
			}
			tmp = tmp->snext;
		}
		if (tmp == ht->shead)
			ht->shead = new;
		if (tmp == NULL)
		{
			ht->stail->snext = new;
			new->sprev = ht->stail;
			new->snext = NULL;
			ht->stail = new;
		}
	}
	return (1);
}

/**
 * shash_table_get - Gets the value associated with a key.
 * @ht: Pointer to the shash table.
 * @key: Key to the value.
 * Return: The Value associated with the key or NULL if unsuccessful.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *current;
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

/**
 * shash_table_print - Prints all the nodes in a shash table.
 * @ht: Pointer to the shash table.
 * Return: Void.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *current;
	int first_flag = 1;

	if (ht != NULL)
	{
		putchar('{');

		current = ht->shead;
		while (current)
		{
			if (first_flag)
				first_flag = 0;
			else
				printf(", ");
			printf("'%s': '%s'", current->key, current->value);
			current = current->snext;
		}
		printf("}\n");
	}
}

/**
 * shash_table_print_rev - Prints all the nodes in reverse in a shash table.
 * @ht: Pointer to the shash table.
 * Return: Void.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *current;
	int first_flag = 1;

	if (ht != NULL)
	{
		putchar('{');

		current = ht->stail;
		while (current)
		{
			if (first_flag)
				first_flag = 0;
			else
				printf(", ");
			printf("'%s': '%s'", current->key, current->value);
			current = current->sprev;
		}
		printf("}\n");
	}
}

/**
 * shash_table_delete - Deletes the whole shash table.
 * @ht: Pointer to the shash table.
 * Return: Void.
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *current, *temp;
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
