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
	if (argc == 3)
	{
		/* Type conversion was done.*/
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
