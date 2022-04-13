#include <stdio.h>
/**
 * print_to_98 - prints from an inputed number all the way to 98.
 * @n: Number to start count from.
 *
 * Return: Always void.
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i < 99; i++)
		{
			printf("%d", i);
			if (i != 98)
				printf(", ");
		}
	}
	else
	{
		for (i = n; i > 97; i--)
		{
			printf("%d", i);
			if (i != 98)
				printf(", ");
		}
	}
	putchar('\n');
}
