#include "main.h"
/**
 * print_last_digit - returns the last digit of a number.
 * @n: The number from which the last digit is stripped.
 *
 * Return: The last digit of the number if successful.
 */

int print_last_digit(int n)
{
	int l_digit;
	if (n < 0)
	{
		n *= -1;
	}
	l_digit = n % 10;
	return (l_digit);
}
