#include "main.h"
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
