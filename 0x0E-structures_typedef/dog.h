#ifndef DOG_H
#define DOG_H
#include <stddef.h>

/**
 * struct dog - A structure of a dog.
 * @name: Name of dog.
 * @age: Age of dog.
 * @owner: Dog's owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
