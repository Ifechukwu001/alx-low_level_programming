#ifndef DOG_H
#define DOG_H

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

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
