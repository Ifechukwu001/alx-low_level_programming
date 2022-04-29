#include "main.h"
/**
 * print_char - prints a character to the output recursively.
 * @c: The character to be printed.
 * Return: Void.
 */
void print_char(char *c)
{
	if (*c == '\0')
		_putchar('\n');
	else
	{
		_putchar(*c);
		print_char(++c);
	}
}

/**
 * _puts_recursion - prints a string to the output and then a newline.
 * @s: String to be printed.
 * Return: Void.
 */
void _puts_recursion(char *s)
{
	print_char(s);
}
