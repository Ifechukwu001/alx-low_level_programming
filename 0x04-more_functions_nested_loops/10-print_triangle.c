#include "main.h"
/**
 * print_triange - prints a triangle according to size.
 * @size: Size of the triangle.
 * Return: void.
 */
void print_triangle(int size)
{
	int i , j;

	for (i = 1; i <= size; i++)
	{
		for (j = size - i; j != 0; j--)
			_putchar(' ');
		for (j = 0; j < i; j++)
			_putchar('#');
		if (i != size)
			_putchar('\n');
	}
	_putchar('\n');
}
