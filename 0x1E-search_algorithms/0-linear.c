#include "search_algos.h"
#include <stdio.h>

/**
 * linear_search - Searches an array for a value.
 * @array: The array to be searched.
 * @size: Size of the array.
 * @value: Value to be found.
 * Return: Index of the searched value or -1 if unsuccessful.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
