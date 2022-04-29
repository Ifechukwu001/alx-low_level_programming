#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * Return: 0 if successful.
 */

int main(void)
{
	int i = 0, j, k;

	while (i < 8)
	{
		j = i + 1;

		while (j < 9)
		{
			k = j + 1;

			while (k < 10)
			{
				putchar('0' + i);
				putchar('0' + j);
				putchar('0' + k);

				if (i != 7)
				{
					putchar(',');
					putchar(' ');
				}
				else
					putchar('\n');
				k++;
			}
			j++;
		}
		i++;
	}
	return (0);
}
