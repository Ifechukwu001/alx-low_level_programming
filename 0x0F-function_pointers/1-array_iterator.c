#include <stddef.h>
/**
 * array_iterator - Performs on each element of an array a function.
 * @array: Array to work on.
 * @size: Size of the array.
 * @action: Function to be performed on the array element.
 * Return: Void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
