#include "main.h"

/**
 * check_prm - checks if a number is prime.
 * @n: number to check.
 * @i: number used to test.
 * Return: 1 if prime, 0 otherwise.
 */
int check_prm(int n, int i)
{
	if (n == i)
		return (1);
	if (n % i == 0)
		return (0);
	return (check_prm(n, i + 1));
}

/**
 * is_prime_number - checks if a number is prime.
 * @n: number to be checked.
 * Return: 1 if prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n <= 1)
		return (0);
	return (check_prm(n, i));
}
