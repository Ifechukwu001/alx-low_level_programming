#include <stdio.h>

/**
 * main - outputs a character in the alphabet (lowercase).
 *
 * Return: Always 0 if successful.
 */
int main(void)
{
	char i = 'a';
	char j = 'A';

	while (i != '{')
	{
		putchar(i);
		i++;
	}

	while (j != '[')
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}
