#include <stdlib.h>
#include <string.h>
#include "dog.h"

#include "main.h"
/**
 * _strlen - checks the lenght of the string.
 * @s: Character array (string).
 * Return: int (the lenght of the string).
 */
int _strlen(char *s)
{
	int i, len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		++len;
	}
	return (len);
}

/**
 * _strdup - creates a memory array and dumps a string there.
 * @str: String to be dumped.
 * Return: Pointer to the memory array.
 */
char *_strdup(char *str)
{
	int i, str_size = _strlen(str);
	char *ptr;

	if (str)
	{
		ptr = malloc(str_size + 1);
		if (ptr)
		{
			for (i = 0; i < str_size + 1; i++)
				ptr[i] = str[i];
		}
	}
	else
		return (0);
	return (ptr);
}

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
	new->name = _strdup(name);
	new->age = age;
	new->owner = _strdup(owner);

	return (new);
}
