#include "main.h"

/**
 * check_plnd - checks if a string is palindrome.
 * @a: First character in the string.
 * @b: First character in the string.
 * @z: Last character of the string.
 * Return: 1 if palindrome, 0 otherwise.
 */
int check_plnd(char *a, char *b, char *z)
{
	if (*a != *z || *a == '\0')
		return (0);
	if (*a == *z && b == z)
		return (1);
	return (check_plnd(a + 1, b, z - 1));
}

/**
 * check_null - checks for the NULL's address in a string.
 * @s: String.
 * Return: A pointer to NULL.
 */
char *check_null(char *s)
{
	return ((*s == '\0') ? s : check_null(++s));
}

/**
 * is_palindrome - checks if a string is palindrome.
 * @s: String to be checked.
 * Return: The same as check_plnd.
 */
int is_palindrome(char *s)
{
	char *l_char = check_null(s) - 1;

	return (check_plnd(s, s, l_char));
}
