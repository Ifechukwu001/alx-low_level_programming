#include <stdio.h>
/**
 * main - prints all arguments passed.
 * @argc: Number of arguments.
 * @argv: Array of the arguments.
 * Return: Always 0 if successful.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
