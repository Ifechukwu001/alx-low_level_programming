#include "main.h"
/**
 * print_alphabet - prints a the alphabets (lowercase).
 *
 * Return: Always 0 if successful.
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
