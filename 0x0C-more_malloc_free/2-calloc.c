#include "main.h"
#include <stdlib.h>

/**
 * _memset - copy char
 * @s: string
 * @b: input
 * @n: bytes
 * Return: string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}


/**
 * _calloc - allocates memory to an array.
 * @nmemb: Number of elements in the array.
 * @size: Size of each element of the array.
 * Return: Pointer to the allocated space.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (0);

	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (0);

	_memset(arr, 0, (nmemb * size));
	return (arr);
}
