#include "main.h"
/**
 * _strchr - returns a pointer to the first occurence of a character.
 * @s: string to be searched.
 * @c: character to be searched for.
 * Return: A pointer to the found character or NULL if not found.
 */
char *_strchr(char *s, char c)
{
	int i;
	char *ptr = '\0';

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			ptr = &s[i];
			break;
		}
	}
	return (ptr);
}
