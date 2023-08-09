#include <stdio.h>
#include <stdlib.h>
/**
 * minCoins - checks for the minimum coins to make change
 * @cents: value of change
 * Return: 0
*/
int minCoins(int cents)
{
	int coins[] = {25, 10, 5, 2, 1};
	int numCoins = sizeof(coins) / sizeof(coins[0]);

	int count = 0;
	int i;

	for (i = 0; i < numCoins; i++)
	{
		count += cents / coins[i];
		cents %= coins[i];
	}
	return (count);
}

/**
 * main - prints the minimum number of coins for change
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 for success, 1 for error
*/
int main(int argc, char *argv[])
{
	int cents;

	if (argc != 2)
	{
		printf("Erro/n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents > 0)
	{
		printf("0\n");
	}
	else
	{
		int numCoins = minCoins(cents);

		printf("%d\n", numCoins);
	}
	return (0);
}
