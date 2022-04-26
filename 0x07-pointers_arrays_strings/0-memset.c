#include "main.h"
/**
 * _memset - fills the first n bytes of the memory area pointed to by s with the constant byte b
 * @s: pointer to the memory area.
 * @b: constant byte to be placed in s.
 * @n: number of bytes to be replaced.
 * Return: A pointer to s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
