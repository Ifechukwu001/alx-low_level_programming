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
