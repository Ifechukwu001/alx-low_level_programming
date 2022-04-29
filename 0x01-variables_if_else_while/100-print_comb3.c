#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * Return: 0 if successful.
 */

int main(void)
{
	int i = 0, j;

	while (i < 9)
	{
		j = i + 1;

		while (j < 10)
		{
			putchar('0' + i);
			putchar('0' + j);

			if (i != 8)
			{
				putchar(',');
				putchar(' ');
			}
			else
				putchar('\n');
			j++;
		}
		i++;
	}
	return (0);
}
