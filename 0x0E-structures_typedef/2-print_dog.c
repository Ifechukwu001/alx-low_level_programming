#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints the attributes of a dog.
 * @d: Pointer to the dog structure.
 * Return: void.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name)
		printf("Name: %s\n", d->name);
	else
		printf("Name: %s\n", "(nil)");
	if (d->age)
		printf("Age: %f\n", d->age);
	else
		printf("Age: %s\n", "(nil)");
	if (d->owner)
		printf("Owner: %s\n", d->owner);
	else
		printf("Owner: %s\n", "(nil)");
}
