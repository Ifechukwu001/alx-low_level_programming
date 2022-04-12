#include "main.h"
/**
 * _islower - checks if a character is lowercase.
 * @c: The character to be checked.
 *
 * Return: Always void if successful.
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
