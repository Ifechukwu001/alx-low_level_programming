#include <stdio.h>

/**
 * main - prints all the numbers of the base 10.
 *
 * Return: Always 0 if successful.
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%d", i);
		i++;
	}

	putchar('\n');
	return (0);
}
