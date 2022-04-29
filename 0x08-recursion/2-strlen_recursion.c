#include "main.h"
/**
 * count - counts the characters from an address till NULL.
 * @c: Character to count.
 * Return: 1 if a character, 0 if NULL.
 */
int count(char *c)
{
	if (*c == '\0')
		return (0);
	else
		return (1 + count(++c));
}

/**
 * _strlen_recursion - counts the lenght of a string.
 * @s: String to be counted.
 * Return: An integer (The size of s).
 */
int _strlen_recursion(char *s)
{
	return (count(s));
}
