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
 * check_null - checks for the NULL's address in a string.
 * @s: String.
 * Return: A pointer to NULL.
 */
char *check_null(char *s)
{
	return ((*s == '\0') ? s: check_null(++s));
}

/**
 * _print_rev_recursion - prints a string backwards.
 * @s: String to be printed.
 * Return: Void.
 */
void _print_rev_recursion(char *s)
{
	if (*s == "")
		_putchar("");
	else
	{
		char *ptr = check_null(s);
		print_char(--ptr, s);
	}
}
