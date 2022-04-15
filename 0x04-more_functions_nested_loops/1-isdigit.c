#include "main.h"
/**
 * _isdigit - checks if a character id a digit or not.
 * @c: character to be checked.
 * Return: 1 if c is a digit, 0 otherwise.
 */

int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
