#include "main.h"
/**
 * times_table - prints out a multiplication table.
 *
 * Return: Void.
 */

void times_table(void)
{
	int i = 0, j, pdt;

	while (i < 10)
	{
		j = 0;
		while (j < 0)
		{
			pdt = i * j;
			if (pdt < 10)
				_putchar('0' + pdt);
			else
			{
				_putchar('0' + pdt / 10);
				_putchar('0' + pdt % 10);
			}
			_putchar(',');
			_putchar(' ');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
