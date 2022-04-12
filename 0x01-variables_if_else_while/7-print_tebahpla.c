#include <stdio.h>

/**
 * main - prints the alphabets (lowercase) in reverse.
 *
 * Return: Always 0 if successful.
 */
int main(void)
{
	int i;

	for (i = 122; i > 96; i--)
	{
		putchar(i);
	}

	putchar('\n');
	return (0);
}
