#include "main.h"

/**
 * create_array - creates an unnamed array an fills it with a character.
 * @size: Array size.
 * @c: Character to fill the array with.
 * Return: Pointer to rhe array or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (0);
	ptr = malloc(size);
	if (ptr)
	{
		for (i = 0; i < size; i++)
			*(ptr + i) = c;
	}
	return (ptr);
}
