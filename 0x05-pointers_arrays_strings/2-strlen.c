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
