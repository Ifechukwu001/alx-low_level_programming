#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints a variable amount of strings seperated by a string.
 * @separator: String to seperate the arguments.
 * @n: Number of strings passed.
 * Return: Void.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i = 0;
	char *str;

	va_start(strings, n);
	if (separator == NULL)
		separator = "";
	while (i < n)
	{
		str = va_arg(strings, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (!(i == n - 1))
			printf("%s", separator);
		i++;
	}
	printf("\n");
}
