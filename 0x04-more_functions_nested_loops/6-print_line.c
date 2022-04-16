#include "main.h"
/**
 * print_line - prints a line in the output stream.
 * @n: The lenght of the line.
 * Return: void.
 */
void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
