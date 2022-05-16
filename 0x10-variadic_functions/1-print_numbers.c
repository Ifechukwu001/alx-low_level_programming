#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints the numbers passed to seperated by seperator.
 * @separator: String to seperate the numbers.
 * @n: Number of integers passed to the function.
 * Return: Void.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list numbers;

	if (separator == NULL)
		exit(EXIT_FAILURE);

	va_start(numbers, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numbers, int));
		if (i == n - 1)
			printf("\n");
		else
			printf("%s", separator);
	}
	va_end(numbers);
}
