#include <stdlib.h>
#include <stdio.h>

int check_coin(int mon);

/**
 * main - prints the number of coins needed to make a change.
 * @argc: Number of arguments.
 * @argv: Array of the arguments.
 * Return: Always 0 if successful.
 */
int main(int argc, char *argv[])
{
	int cents;

	if (argc == 2)
	{
		cents = atoi(argv[1]);

		if (cents < 0)
			printf("0\n");
		else
			printf("%d\n", check_coin(cents));
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

/**
 * check_coin - return the needed coins.
 * @mon: Money to be changed.
 * Return: Number of coins.
 */
int check_coin(int mon)
{
	int n_coins, remaining;

	if (mon >= 25)
	{
		n_coins = mon / 25;
		remaining = mon % 25;
	}
	else if (mon >= 10)
	{
		n_coins = mon / 10;
		remaining = mon % 10;
	}
	else if (mon >= 5)
	{
		n_coins = mon / 5;
		remaining = mon % 5;
	}
	else if (mon >= 2)
	{
		n_coins = mon / 2;
		remaining = mon % 2;
	}
	else
	{
		n_coins = mon / 1;
		return (n_coins);
	}

	return (n_coins + check_coin(remaining));
}
