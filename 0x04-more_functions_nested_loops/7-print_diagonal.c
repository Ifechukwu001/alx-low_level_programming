#include "main.h"
/**
 * print_diagonal - prints a diagonal to yhe command line.
 * @n: the number of times the diagonal should be printed.
 * Return: Void.
 */
void print_diagonal(int n)
{
	int i = 0, j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		while (i < n)
		{
			for (j = 0; j <= i; j++)
			{
				if (j == i)
				{
					_putchar('\\');
					_putchar('\n');
				}
				else
					_putchar(' ');
			}
			i++;
		}
	}
}
