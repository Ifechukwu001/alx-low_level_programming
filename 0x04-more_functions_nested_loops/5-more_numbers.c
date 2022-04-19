#include "main.h"
/**
 * more_numbers - prints digits 0 to 14 followed by a new line.
 *
 * Return: void.
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 15; i++)
	{
		if (i < 10)
			_putchar('0' + i);
		else
		{
			for (j = 0; j < 2; j++)
			{
				if (j == 0)
					_putchar('0' + (i / 10));
				else
					_putchar('0' + (i % 10));
			}
		}
	}
	_putchar('\n');
}
