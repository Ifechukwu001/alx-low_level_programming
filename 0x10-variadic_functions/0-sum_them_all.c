#include <stdarg.h>

/**
 * sum_them_all - Sums the integer arguments passed to it.
 * @n: Number of arguments.
 * Return: The sum of the integers, 0 if none.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;
	int sum = 0;

	if (n > 0)
	{
		va_start(numbers, n);
		for (i = 1; i <= n; i++)
		{
			sum += va_arg(numbers, int);
		}
	}
	else
		return (0);
	return (sum);
}
