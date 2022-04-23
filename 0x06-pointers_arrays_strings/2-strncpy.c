#include "main.h"
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
