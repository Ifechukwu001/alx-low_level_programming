#include "main.h"

/**
 * _pow - Gets the power of a number.
 * @base: Number.
 * @exponent: power.
 * Return: Integer.
 */
int _pow(int base, int exponent)
{
	int result = 1;

	for ( ; exponent > 0; exponent--)
		result = result * base;
	return (result);
}

/**
 * binary_to_uint - Converts binary to integer.
 * @b: Pointer to String.
 * Return: Integer number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0, c_num = 0;
	char *p;

	if (b == NULL)
		return (0);
	p = (char *)b;
	while (*p != '\0')
		p++;
	--p;
	for ( ; p != b; p--, n++)
	{
		if (*p == '1')
			c_num += _pow(2, n);
		else if (*p == '0')
			continue;
		else
			return (0);
	}
	if (*p == '1')
		c_num += _pow(2, n);
	return (c_num);
}
