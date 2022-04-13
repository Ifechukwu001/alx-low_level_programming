#include "main.h"
/**
 * _abs - returns the absolute value of a number.
 * @n: The number whose absolute is to be returned.
 *
 * Return: The absolute value if successful.
 */

int _abs(int n)
{
	if (n > 0)
		return (n);
	else if (n == 0)
		return (0);
	else
		return (n * -1);
}
