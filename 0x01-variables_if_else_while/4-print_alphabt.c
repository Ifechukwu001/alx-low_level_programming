#include <stdio.h>

/**
 * main - outputs a character in the alphabet (lowercase).
 *
 * Return: Always 0 if successful.
 */
int main(void)
{
	char i = 'a';

	while (i != '{')
	{
		if (i != 'e' && i != 'q')
			putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
