#include "main.h"
/**
 * _puts - prints out a string to the output stream.
 * @str: String to be printed out.
 * Return: Void.
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
