#include "main.h"
/**
 * print_square - prints out # in a square form.
 * @size: The size of the square to print.
 * Return: Void.
 */
void print_square(int size)
{
	int i = 0, j;

	while (i < size)
	{
		j = 0;

		while (j < size)
		{
			_putchar('#');
			j++;
		}

		if (i != size - 1)
			_putchar('\n');
		i++;
	}
	_putchar('\n');
}
