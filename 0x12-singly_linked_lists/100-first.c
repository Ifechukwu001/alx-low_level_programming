#include <stdio.h>

/**
 * call_first - A function called before the main function.
 * Return: Void.
 */
void  __attribute__((constructor)) call__first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
