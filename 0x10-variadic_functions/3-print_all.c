#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * check_case - Matches the case of it's parameter.
 * @chara: Character to match.
 * @arg: Argument list.
 * Return: 1 if printed, 0 otherwise.
 */
int check_case(char chara, va_list arg)
{
	int printed_out = 0;
	char *str;

	switch (chara)
	{
	case 'c':
		printf("%c", va_arg(arg, int));
		printed_out = 1;
		break;
	case 'i':
		printf("%d", va_arg(arg, int));
		printed_out = 1;
		break;
	case 'f':
		printf("%f", va_arg(arg, double));
		printed_out = 1;
		break;
	case 's':
		str = va_arg(arg, char *);
		printed_out = 1;
		if (str)
		{
			printf("%s", str);
			break;
		}
		printf("(nil)");
		break;
	}
	return (printed_out);
}

/**
 * print_all - prints it's argument to the stdout.
 * @format: Formatted string to show the order of srgument types.
 * Return: Void.
 */
void print_all(const char * const format, ...)
{
	va_list arguments;
	int i = 0, was_printed;

	if (format == NULL)
	{
		printf("(nil)");
		exit(EXIT_FAILURE);
	}
	va_start(arguments, format);
	while (format[i] != '\0')
	{
		was_printed = check_case(format[i], arguments);
		++i;
		while (was_printed)
		{
			if (format[i] != '\0')
				printf(", ");
			was_printed = 0;
		}
	}
	printf("\n");
}
