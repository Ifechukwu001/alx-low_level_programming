#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the file in which the function is called.
 * Return: 0 if successful.
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (EXIT_SUCCESS);
}
