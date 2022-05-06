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
 * _strcat - concatenates two strings together.
 * @dest: Root string.
 * @src: String to add.
 * Return: Pointer to dest.
 */
char *_strcat(char *dest, char *src)
{
	int i;
	char *ptr;

	for (i = 0; ; i++)
	{
		if (dest[i] == '\0')
		{
			ptr = &dest[i];
			break;
		}
	}

	for (i = 0; src[i] != '\0'; i++)
	{
		*ptr = src[i];
		ptr++;
	}
	*ptr = '\0';
	return (dest);
}

/**
 * str_concat - concatenetes two strings in a memory array.
 * @s1: First string.
 * @s2: Second string.
 * Return: Pointer to the memory array,
 */
char *str_concat(char *s1, char *s2)
{
	int total_len = _strlen(s1) + _strlen(s2) + 1, i;
	char *ptr;

	ptr = malloc(total_len);
	if (ptr)
	{
		for (i = 0; s1[i] != '\0'; i++)
			ptr[i] = s1[i];
		ptr[i] = '\0';

		_strcat(ptr, s2);
	}
	else
		return (0);
	return (ptr);
}
