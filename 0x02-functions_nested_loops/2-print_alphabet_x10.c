#include "main.h"
/**
 * print_alphabet_x10 - prints a the alphabets (lowercase) 10 times.
 *
 * Return: Always void if successful.
 */

void print_alphabet(void)
{
	int i = 0;

	while (i < 10)
	{
		char ch;

		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
