#include "main.h"
/**
 * print_diagonal - prints a diagonal to yhe command line.
 * @n: the number of times the diagonal should be printed.
 * Return: Void.
 */
void print_diagonal(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar('\\');
		i++;
	}
	_putchar('\n');
}
