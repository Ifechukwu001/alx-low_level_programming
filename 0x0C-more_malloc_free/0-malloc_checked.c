#include "main.h"

/**
 * malloc_checked - Creates a memory space.
 * @b: Size of the memory in bytes.
 * Return: Pointer to location if successful, 98 if fails.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (!ptr)
		exit(98);
	return (ptr);
}
