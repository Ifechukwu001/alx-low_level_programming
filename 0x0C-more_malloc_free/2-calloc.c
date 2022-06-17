#include "main.h"
#include <stdlib.h>

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

	return (arr);

	for (i = 0; i < size; i++)
		arr[1] = 0;
}
