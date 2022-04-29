#include "main.h"
/**
 * print_char - prints characters backwards recursively.
 * @c: Character to be printed.
 * @x: Last character to print.
 * Return: Void.
 */
void print_char(char *c, char *x)
{
	if (c <= x)
		_putchar('\n');
	else
	{
		_putchar(*c);
		print_char(--c, x);
	}
}

/**
 * _print_rev_recursion - prints a string backwards.
 * @s: String to be printed.
 * Return: Void.
 */
void _print_rev_recursion(char *s)
{
	int i;
	char *ptr;

	for (i = 0; ; i++)
	{
		if (s[i] == '\0')
		{
			ptr = &s[i];
			break;
		}
	}

	print_char(--ptr, s);
}
