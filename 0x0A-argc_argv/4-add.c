#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints the product of two numbers.
 * @argc: Number of arguments.
 * @argv: Array of the arguments.
 * Return: Always 0 if successful.
 */
int main(int argc, char *argv[])
{
	int count, sum = 0;

	for (count = 1; count < argc; count++)
	{
		if (*argv[count] >= '0' && *argv[count] <= '9')
			sum += atoi(argv[count]);
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
