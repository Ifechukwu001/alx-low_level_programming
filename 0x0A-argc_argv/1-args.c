#include <stdio.h>
/**
 * main - prints the number of arguments passed.
 * @argc: Number of arguments.
 * @argv: Array of the arguments.
 * Return: Always 0 if successful.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
