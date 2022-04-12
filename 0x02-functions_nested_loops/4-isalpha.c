#include "main.h"
/**
 * _isalpha - checks if a character is alphabetic.
 * @c: The character to be checked.
 *
 * Return: Always 0 or 1 if successful.
 */

int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 91))
		return (1);
	else
		return (0);
}
