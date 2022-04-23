#include "main.h"
/**
 * reverse_array - reverses an array.
 * @a: Array to be reversed.
 * @n: Size of the array.
 * Return: Void.
 */
void reverse_array(int *a, int n)
{
	int i, tmp;

	--n;
	if (n % 2 == 0)
	{
		for (i = 0; i <= n / 2; i++)
		{
			tmp = a[i];
			a[i] = a[n - i];
			a[n - i] = tmp;
		}
	}
	else
	{
		for (i = 0; i < (n + 1) / 2; i++)
		{
			tmp = a[i];
			a[i] = a[n - i];
			a[n - i] = tmp;
		}
	}
}
