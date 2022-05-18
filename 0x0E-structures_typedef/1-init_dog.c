#include "dog.h"

/**
 * init_dog - Initializes the structure of dog.
 * @d: Dog structure.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner of dog.
 * Return: Void.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
