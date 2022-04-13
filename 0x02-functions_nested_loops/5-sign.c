#include "main.h"
/**
 * print_sign - checks and prints the sign of an integer.
 * @n: The nubwer to be checked.
 *
 * Return: Always 0 or 1 if successful.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
