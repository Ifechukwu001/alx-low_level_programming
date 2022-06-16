#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees the space assigned to the dog structure.
 * @d: Pointer to the dog structure.
 * Return: void.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
