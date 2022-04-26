#include "main.h"
/**
 * _memcpy - copies n bytes from memory area src to memory area dest.
 * @dest: memory area to be copied to.
 * @src: memory area to copy from.
 * @n: number of bytes to copy.
 * Return: A pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
