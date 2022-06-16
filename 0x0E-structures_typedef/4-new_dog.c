#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog structure.
 * @name: Dog name.
 * @age: Dog age.
 * @owner: Dog owner.
 * Return: Pointer to dog structure or NULL if unsuccessful.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (0);
	new->name = strdup(name);
	new->age = age;
	new->owner = strdup(owner);

	return (new);
}
