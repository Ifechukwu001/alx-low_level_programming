#include "main.h"
/**
 * _strncat - concatenates a string to another depending on the string bytes..
 * @dest: Root string.
 * @src: String to add.
 * @n: Number of bytes of the second string.
 * Return: Pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
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

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		*ptr = src[i];
		ptr++;
	}
	*ptr = '\0';
	return (dest);
}

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
 * _strncpy - copies a string to another string.
 * @dest: String copied to.
 * @src: String copied from.
 * @n: Number of bytes to be copied.
 * Return: A pointer to dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

/**
 * string_nconcat - Stores a concantenated string in a memory location.
 * @s1: First string.
 * @s2: Second string to be concatenated.
 * @n: Number of bytes of the second string.
 * Return: Pointer to memory, NULL if unsuccessful.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int s1_size;
	char *ptr;

	s1 = (*s1 == 0) ? '\0' : s1;
	s2 = (*s2 == 0) ? '\0' : s2;

	s1_size = _strlen(s1);
	ptr = malloc(s1_size + n + 1);

	if (ptr)
	{
		_strncpy(ptr, s1, s1_size);
		*(ptr + s1_size) = '\0';
		_strncat(ptr, s2, n);
	}
	else
		return (0);
	return (ptr);
}
