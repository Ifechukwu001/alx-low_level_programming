#include "hash_tables.h"

/**
 * key_index - Generates the index of key/value pair in the hash table.
 * @key: Key used to generate the index.
 * @size: Size of the hash table.
 * Return: Index to save the data.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;
	return (index);
}
