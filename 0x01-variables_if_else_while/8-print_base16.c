#include <stdio.h>

/**
 * main - prints the alphabets (lowercase) in reverse.
 *
 * Return: Always 0 if successful.
 */
int main(void)
{
	int i;
        char j;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}

	for (j = 'a'; j <= 'f'; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
