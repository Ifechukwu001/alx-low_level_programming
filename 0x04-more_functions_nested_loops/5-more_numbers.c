#include "main.h"
/**
 * more_numbers - prints digits 0 to 14 followed by a new line.
 *
 * Return: void.
 */
void more_numbers(void)
{
	int i, j = 0;

	while (j < 10)
	{

		for (i = 0; i < 15; i++)
		{
			if (i / 10)
				_putchar('0' + (i / 10));
			_putchar('0' + (i % 10));
		}
		j++;
		_putchar('\n');
	}
}
