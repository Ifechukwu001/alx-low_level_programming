#include "main.h"
/**
 * jack_bauer - prints out all seconds in 24 hours.
 *
 *
 * Return: Always 0 if successful.
 */

void jack_bauer(void)
{
	int hr, min, min_count;

	for (min = 0; min < 1440; min++)
	{
		hr = min / 60;
		if (hr < 10)
		{
			_putchar('0');
			_putchar('0' + hr);
		}
		else
		{
			_putchar('0' + hr / 10);
			_putchar('0' + hr % 10);
		}

		_putchar(':');

		min_count = min % 60;
		if (min_count < 10)
		{
			_putchar('0');
			_putchar('0' + min_count);
		}
		else
		{
			_putchar('0' + min_count / 10);
			_putchar('0' + min_count % 10);
		}
		_putchar('\n');
	}
}
