#include "search_algos.h"
#include <stdio.h>

/**
 * binary_search - Sraeches for a value in an array.
 * @array: Array to be searched.
 * @size: Size of the array.
 * @value: Value to be found.
 * Return: index of the value in array, or -1 if unsuccessful.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, left, right, middle;

	if (array == NULL)
		return (-1);

	left = 0;
	right = size - 1;

	while (left <= right)
	{
		printf("Searching in array:");
		for (i = left; i <= right; i++)
		{
			printf(" %d", array[i]);
			if (i != right)
				printf(",");
			else
				printf("\n");
		}
		middle = (left + right) / 2;

		if (array[middle] < value)
			left = middle + 1;
		else if (array[middle] > value)
			right = middle - 1;
		else
			return (middle);
	}
	return (-1);
}
