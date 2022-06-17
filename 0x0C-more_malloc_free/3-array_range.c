#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: Minimum number.
 * @max: Maximum number.
 * Return: Pointer to the array.
 */
int *array_range(int min, int max)
{
	int size, i, j;
	int *arr;

	if (min > max)
		return (0);

	size = (max) - (min);
	if (size < 0)
		size *= -1;
	size++;

	arr = malloc(size * sizeof(int));
	if (arr == NULL)
		return (0);

	for (i = min, j = 0; i <= max; i++, j++)
		arr[j] = i;

	return (arr);
}
