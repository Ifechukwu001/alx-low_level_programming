#include "main.h"
/**
 * check_null - checks for the NULL's address in a string.
 * @s: String.
 * Return: A pointer to NULL.
 */
char *check_null(char *s)
{
	return ((*s == '\0') ? s : check_null(++s));
}

/**
 * print_rev - prints out a string backwards to the output stream.
 * @s: String to be printed out.
 * Return: Void.
 */
void print_rev(char *s)
{
	char *pt = check_null(s) - 1;

	while (!(pt < s))
	{
		_putchar(*pt);
		pt--;
	}
	_putchar('\n');
}
