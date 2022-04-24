#include "main.h"
/**
 * string_toupper - converts a lowercase string to uppercase.
 * @s: Input string.
 * Return: A pointer to s.
 */
char *string_toupper(char *s)
{
	int i;
	char *ptr = s;

	for (i = 0; *ptr != '\0'; i++)
	{
		if (*ptr > 96 && *ptr < 123)
			*ptr -= 32;
		ptr++;
	}
	return (s);
}
